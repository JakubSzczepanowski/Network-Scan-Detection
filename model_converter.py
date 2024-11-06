# ['ip.id', 'ip.flags.df', 'ip.len', 'ip.dsfield', 'tcp.srcport', 'tcp.dstport', 'tcp.len', 'tcp.hdr_len', 'tcp.flags.fin', 'tcp.flags.syn', 'tcp.flags.reset', 'tcp.flags.push', 'tcp.flags.ack', 'tcp.flags.urg', 'tcp.flags.cwr', 'tcp.window_size', 'tcp.urgent_pointer']

import math
import re

FLAGS_INDEXES = (1,8,9,10,11,12,13,14)
LITTLE_ENDIAN_INDEX = 6

def normal_round(n):
    if n - math.floor(n) < 0.5:
        return math.floor(n)
    return math.ceil(n)

def transform(match: re.Match):
    relation = '<'
    index = int(match.group(1))
    if index in FLAGS_INDEXES:
        return f'{features[index]} == 0'
    else:
        number = float(match.group(2))
    if index == LITTLE_ENDIAN_INDEX:
        return f'{features[index]} < {normal_round(number)}'
    return f'{features[index]} {relation} htons({normal_round(number)})'

features = ['iph->id', '(iph->frag_off & IP_DF)', 'iph->tot_len', 'iph->tos', 'tcph->source', 'tcph->dest', '(unsigned int)tcp_segment_length', '(tcph->doff*4)', 'tcph->fin', 'tcph->syn', 'tcph->rst', 'tcph->psh', 'tcph->ack', 'tcph->urg', 'tcph->cwr', 'tcph->window', 'tcph->urg_ptr']

with open('scan.h', 'r', encoding='utf-8') as f:
    txt = f.read()
    pattern = r"features\[(\d{1,2})\] < (-?\d+\.\d+)"
    txt = txt.replace("const float *features, int32_t features_length", "struct iphdr *iph, struct tcphdr *tcph, u_int16_t tcp_segment_length")\
        .replace("features, features_length", "iph, tcph, tcp_segment_length")
    new_txt = re.sub(pattern, transform, txt)

    output = open('model.h', 'w', encoding='utf-8')
    output.write(new_txt)
    output.close()