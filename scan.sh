#!/bin/bash
IP="172.16.25.5"
hping_pckt_count="3"

echo "> nmap TCP SYN Scan"
nmap -sS -Pn -n $IP

echo "> nmap TCP Connect Scan"
nmap -sT -Pn -n $IP

echo "> nmap TCP NULL Scan"
nmap -sN -Pn -n $IP

echo "> nmap TCP XMAS Scan"
nmap -sX -Pn -n $IP

echo "> nmap TCP FIN Scan"
nmap -sF -Pn -n $IP

echo "> nmap TCP ACK Scan"
nmap -sA -Pn -n $IP

echo "> nmap TCP Window Scan"
nmap -sW -Pn -n $IP

echo "> nmap TCP Maimon Scan"
nmap -sM -Pn -n $IP

###################################
# hping3
###################################

echo "> hping3 TCP SYN Scan"
hping3 $IP -c $hping_pckt_count -V -p ++1 -S

echo "> hping3 TCP NULL Scan"
hping3 $IP -c $hping_pckt_count -V -p ++1 -Y

echo "> hping3 TCP XMAS Scan"
hping3 $IP -c $hping_pckt_count -V -p ++1 -UPF

echo "> hping3 TCP FIN Scan"
hping3 $IP -c $hping_pckt_count -V -p ++1 -F

echo "> hping3 TCP ACK Scan"
hping3 $IP -c $hping_pckt_count -V -p ++1 -A
