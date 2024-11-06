
static inline int32_t scan_predict_tree_0(struct iphdr *iph, struct tcphdr *tcph, u_int16_t tcp_segment_length) {
          if (tcph->rst == 0) {
              if (iph->tot_len < htons(34)) {
                  return 1;
              } else {
                  if ((tcph->doff*4) < htons(42)) {
                      if (tcph->source < htons(59779)) {
                          if (tcph->fin == 0) {
                              if ((tcph->doff*4) < htons(38)) {
                                  if (tcph->cwr == 0) {
                                      if (iph->tot_len < htons(45)) {
                                          if ((tcph->doff*4) < htons(22)) {
                                              if (tcph->window < htons(513)) {
                                                  if (tcph->window < htons(512)) {
                                                      return 0;
                                                  } else {
                                                      if ((iph->frag_off & IP_DF) == 0) {
                                                          return 1;
                                                      } else {
                                                          return 0;
                                                      }
                                                  }
                                              } else {
                                                  if (tcph->syn == 0) {
                                                      if ((iph->frag_off & IP_DF) == 0) {
                                                          if (tcph->window < htons(1231)) {
                                                              if (tcph->window < htons(844)) {
                                                                  return 0;
                                                              } else {
                                                                  if (tcph->source < htons(51278)) {
                                                                      return 1;
                                                                  } else {
                                                                      if (iph->id < htons(7366)) {
                                                                          return 0;
                                                                      } else {
                                                                          return 1;
                                                                      }
                                                                  }
                                                              }
                                                          } else {
                                                              return 0;
                                                          }
                                                      } else {
                                                          if (tcph->dest < htons(23)) {
                                                              if (tcph->source < htons(52897)) {
                                                                  return 0;
                                                              } else {
                                                                  return 1;
                                                              }
                                                          } else {
                                                              return 0;
                                                          }
                                                      }
                                                  } else {
                                                      if (tcph->dest < htons(23)) {
                                                          if (tcph->window < htons(59550)) {
                                                              if (tcph->dest < htons(21)) {
                                                                  if (tcph->source < htons(41419)) {
                                                                      if (tcph->source < htons(38405)) {
                                                                          return 0;
                                                                      } else {
                                                                          return 1;
                                                                      }
                                                                  } else {
                                                                      return 0;
                                                                  }
                                                              } else {
                                                                  if (iph->id < htons(48654)) {
                                                                      return 0;
                                                                  } else {
                                                                      if (tcph->source < htons(43912)) {
                                                                          return 1;
                                                                      } else {
                                                                          return 0;
                                                                      }
                                                                  }
                                                              }
                                                          } else {
                                                              if (tcph->source < htons(51752)) {
                                                                  if (tcph->source < htons(33159)) {
                                                                      return 0;
                                                                  } else {
                                                                      if (tcph->source < htons(51007)) {
                                                                          if (tcph->source < htons(34972)) {
                                                                              return 1;
                                                                          } else {
                                                                              return 0;
                                                                          }
                                                                      } else {
                                                                          return 1;
                                                                      }
                                                                  }
                                                              } else {
                                                                  return 0;
                                                              }
                                                          }
                                                      } else {
                                                          if (tcph->dest < htons(501)) {
                                                              if (tcph->dest < htons(103)) {
                                                                  if (tcph->window < htons(1051)) {
                                                                      if (tcph->source < htons(40089)) {
                                                                          if (tcph->source < htons(39945)) {
                                                                              return 0;
                                                                          } else {
                                                                              return 1;
                                                                          }
                                                                      } else {
                                                                          return 0;
                                                                      }
                                                                  } else {
                                                                      if (tcph->source < htons(49007)) {
                                                                          return 0;
                                                                      } else {
                                                                          if (tcph->source < htons(49257)) {
                                                                              if (tcph->dest < htons(84)) {
                                                                                  if (tcph->window < htons(54054)) {
                                                                                      return 0;
                                                                                  } else {
                                                                                      if (tcph->source < htons(49118)) {
                                                                                          if (tcph->source < htons(49117)) {
                                                                                              return 1;
                                                                                          } else {
                                                                                              return 0;
                                                                                          }
                                                                                      } else {
                                                                                          return 1;
                                                                                      }
                                                                                  }
                                                                              } else {
                                                                                  return 0;
                                                                              }
                                                                          } else {
                                                                              return 0;
                                                                          }
                                                                      }
                                                                  }
                                                              } else {
                                                                  if (tcph->source < htons(42168)) {
                                                                      if (tcph->source < htons(40036)) {
                                                                          return 0;
                                                                      } else {
                                                                          if ((iph->frag_off & IP_DF) == 0) {
                                                                              if (tcph->source < htons(40097)) {
                                                                                  return 1;
                                                                              } else {
                                                                                  if (tcph->source < htons(41885)) {
                                                                                      return 0;
                                                                                  } else {
                                                                                      if (tcph->window < htons(33280)) {
                                                                                          return 0;
                                                                                      } else {
                                                                                          if (tcph->dest < htons(354)) {
                                                                                              return 0;
                                                                                          } else {
                                                                                              if (tcph->source < htons(41940)) {
                                                                                                  if (tcph->source < htons(41936)) {
                                                                                                      return 1;
                                                                                                  } else {
                                                                                                      if (tcph->source < htons(41938)) {
                                                                                                          return 0;
                                                                                                      } else {
                                                                                                          if (tcph->source < htons(41939)) {
                                                                                                              return 1;
                                                                                                          } else {
                                                                                                              return 0;
                                                                                                          }
                                                                                                      }
                                                                                                  }
                                                                                              } else {
                                                                                                  if (tcph->source < htons(42118)) {
                                                                                                      return 1;
                                                                                                  } else {
                                                                                                      if (tcph->source < htons(42119)) {
                                                                                                          return 0;
                                                                                                      } else {
                                                                                                          return 1;
                                                                                                      }
                                                                                                  }
                                                                                              }
                                                                                          }
                                                                                      }
                                                                                  }
                                                                              }
                                                                          } else {
                                                                              return 0;
                                                                          }
                                                                      }
                                                                  } else {
                                                                      return 0;
                                                                  }
                                                              }
                                                          } else {
                                                              return 0;
                                                          }
                                                      }
                                                  }
                                              }
                                          } else {
                                              if (tcph->source < htons(37305)) {
                                                  if (tcph->source < htons(23)) {
                                                      if (tcph->source < htons(22)) {
                                                          return 0;
                                                      } else {
                                                          return 1;
                                                      }
                                                  } else {
                                                      return 0;
                                                  }
                                              } else {
                                                  if (tcph->window < htons(1162)) {
                                                      if (tcph->dest < htons(7968)) {
                                                          if (tcph->source < htons(57539)) {
                                                              if (tcph->source < htons(55495)) {
                                                                  if (tcph->source < htons(49624)) {
                                                                      if (iph->id < htons(46233)) {
                                                                          if (tcph->dest < htons(23)) {
                                                                              if (tcph->dest < htons(22)) {
                                                                                  return 1;
                                                                              } else {
                                                                                  if (tcph->source < htons(37676)) {
                                                                                      return 1;
                                                                                  } else {
                                                                                      if (tcph->source < htons(43206)) {
                                                                                          return 0;
                                                                                      } else {
                                                                                          return 1;
                                                                                      }
                                                                                  }
                                                                              }
                                                                          } else {
                                                                              if (tcph->source < htons(37366)) {
                                                                                  return 1;
                                                                              } else {
                                                                                  if (tcph->source < htons(43220)) {
                                                                                      return 0;
                                                                                  } else {
                                                                                      if (tcph->source < htons(43258)) {
                                                                                          return 1;
                                                                                      } else {
                                                                                          if (tcph->source < htons(47949)) {
                                                                                              return 0;
                                                                                          } else {
                                                                                              if (tcph->source < htons(48497)) {
                                                                                                  return 1;
                                                                                              } else {
                                                                                                  if (tcph->source < htons(49116)) {
                                                                                                      return 0;
                                                                                                  } else {
                                                                                                      return 1;
                                                                                                  }
                                                                                              }
                                                                                          }
                                                                                      }
                                                                                  }
                                                                              }
                                                                          }
                                                                      } else {
                                                                          if (tcph->source < htons(37460)) {
                                                                              return 1;
                                                                          } else {
                                                                              if (tcph->source < htons(43220)) {
                                                                                  return 0;
                                                                              } else {
                                                                                  if (tcph->source < htons(43292)) {
                                                                                      return 1;
                                                                                  } else {
                                                                                      if (tcph->source < htons(48427)) {
                                                                                          return 0;
                                                                                      } else {
                                                                                          if (tcph->source < htons(48486)) {
                                                                                              return 1;
                                                                                          } else {
                                                                                              if (tcph->source < htons(49600)) {
                                                                                                  if (iph->id < htons(51439)) {
                                                                                                      return 1;
                                                                                                  } else {
                                                                                                      return 0;
                                                                                                  }
                                                                                              } else {
                                                                                                  return 1;
                                                                                              }
                                                                                          }
                                                                                      }
                                                                                  }
                                                                              }
                                                                          }
                                                                      }
                                                                  } else {
                                                                      return 0;
                                                                  }
                                                              } else {
                                                                  if (iph->id < htons(3007)) {
                                                                      if (tcph->source < htons(55519)) {
                                                                          return 1;
                                                                      } else {
                                                                          if (tcph->source < htons(56541)) {
                                                                              return 0;
                                                                          } else {
                                                                              if (iph->id < htons(2860)) {
                                                                                  if (iph->id < htons(2677)) {
                                                                                      if (tcph->dest < htons(5561)) {
                                                                                          return 1;
                                                                                      } else {
                                                                                          if (tcph->dest < htons(6503)) {
                                                                                              return 0;
                                                                                          } else {
                                                                                              return 1;
                                                                                          }
                                                                                      }
                                                                                  } else {
                                                                                      if (tcph->source < htons(56745)) {
                                                                                          return 1;
                                                                                      } else {
                                                                                          if (tcph->source < htons(57355)) {
                                                                                              return 0;
                                                                                          } else {
                                                                                              return 1;
                                                                                          }
                                                                                      }
                                                                                  }
                                                                              } else {
                                                                                  return 0;
                                                                              }
                                                                          }
                                                                      }
                                                                  } else {
                                                                      if (tcph->dest < htons(89)) {
                                                                          if (tcph->dest < htons(86)) {
                                                                              if (iph->id < htons(4597)) {
                                                                                  if (iph->id < htons(4058)) {
                                                                                      return 1;
                                                                                  } else {
                                                                                      return 0;
                                                                                  }
                                                                              } else {
                                                                                  if (tcph->source < htons(56593)) {
                                                                                      if (tcph->source < htons(55713)) {
                                                                                          return 1;
                                                                                      } else {
                                                                                          return 0;
                                                                                      }
                                                                                  } else {
                                                                                      if (iph->id < htons(20598)) {
                                                                                          if (iph->id < htons(20170)) {
                                                                                              return 1;
                                                                                          } else {
                                                                                              return 0;
                                                                                          }
                                                                                      } else {
                                                                                          return 1;
                                                                                      }
                                                                                  }
                                                                              }
                                                                          } else {
                                                                              if (iph->id < htons(50441)) {
                                                                                  if (tcph->dest < htons(87)) {
                                                                                      return 0;
                                                                                  } else {
                                                                                      return 1;
                                                                                  }
                                                                              } else {
                                                                                  return 0;
                                                                              }
                                                                          }
                                                                      } else {
                                                                          if (iph->id < htons(63797)) {
                                                                              if (tcph->source < htons(57444)) {
                                                                                  if (tcph->source < htons(56732)) {
                                                                                      if (tcph->source < htons(56625)) {
                                                                                          if (tcph->source < htons(55504)) {
                                                                                              return 1;
                                                                                          } else {
                                                                                              if (tcph->dest < htons(444)) {
                                                                                                  return 1;
                                                                                              } else {
                                                                                                  return 0;
                                                                                              }
                                                                                          }
                                                                                      } else {
                                                                                          return 1;
                                                                                      }
                                                                                  } else {
                                                                                      return 0;
                                                                                  }
                                                                              } else {
                                                                                  return 1;
                                                                              }
                                                                          } else {
                                                                              if (iph->id < htons(63883)) {
                                                                                  return 0;
                                                                              } else {
                                                                                  if (iph->id < htons(65402)) {
                                                                                      if (tcph->source < htons(56161)) {
                                                                                          if (tcph->source < htons(55552)) {
                                                                                              return 1;
                                                                                          } else {
                                                                                              return 0;
                                                                                          }
                                                                                      } else {
                                                                                          return 1;
                                                                                      }
                                                                                  } else {
                                                                                      if (iph->id < htons(65460)) {
                                                                                          return 0;
                                                                                      } else {
                                                                                          return 1;
                                                                                      }
                                                                                  }
                                                                              }
                                                                          }
                                                                      }
                                                                  }
                                                              }
                                                          } else {
                                                              if (tcph->source < htons(59522)) {
                                                                  return 0;
                                                              } else {
                                                                  if (tcph->dest < htons(938)) {
                                                                      return 1;
                                                                  } else {
                                                                      return 0;
                                                                  }
                                                              }
                                                          }
                                                      } else {
                                                          if (tcph->source < htons(37306)) {
                                                              return 1;
                                                          } else {
                                                              if (tcph->source < htons(55467)) {
                                                                  if (tcph->source < htons(48468)) {
                                                                      if (tcph->source < htons(48408)) {
                                                                          if (tcph->source < htons(43245)) {
                                                                              if (tcph->source < htons(43213)) {
                                                                                  return 0;
                                                                              } else {
                                                                                  return 1;
                                                                              }
                                                                          } else {
                                                                              return 0;
                                                                          }
                                                                      } else {
                                                                          return 1;
                                                                      }
                                                                  } else {
                                                                      if (tcph->source < htons(49614)) {
                                                                          if (tcph->source < htons(49573)) {
                                                                              return 0;
                                                                          } else {
                                                                              return 1;
                                                                          }
                                                                      } else {
                                                                          return 0;
                                                                      }
                                                                  }
                                                              } else {
                                                                  if (tcph->source < htons(57499)) {
                                                                      if (iph->id < htons(3065)) {
                                                                          if (tcph->source < htons(57446)) {
                                                                              if (tcph->source < htons(55499)) {
                                                                                  return 1;
                                                                              } else {
                                                                                  if (tcph->source < htons(56703)) {
                                                                                      return 0;
                                                                                  } else {
                                                                                      if (tcph->source < htons(56753)) {
                                                                                          return 1;
                                                                                      } else {
                                                                                          return 0;
                                                                                      }
                                                                                  }
                                                                              }
                                                                          } else {
                                                                              return 1;
                                                                          }
                                                                      } else {
                                                                          if (tcph->source < htons(55508)) {
                                                                              return 1;
                                                                          } else {
                                                                              if (tcph->source < htons(56701)) {
                                                                                  return 0;
                                                                              } else {
                                                                                  if (tcph->source < htons(56720)) {
                                                                                      return 1;
                                                                                  } else {
                                                                                      if (tcph->source < htons(57455)) {
                                                                                          return 0;
                                                                                      } else {
                                                                                          return 1;
                                                                                      }
                                                                                  }
                                                                              }
                                                                          }
                                                                      }
                                                                  } else {
                                                                      return 0;
                                                                  }
                                                              }
                                                          }
                                                      }
                                                  } else {
                                                      return 0;
                                                  }
                                              }
                                          }
                                      } else {
                                          if (tcph->dest < htons(23)) {
                                              if (tcph->window < htons(23184)) {
                                                  return 0;
                                              } else {
                                                  if (tcph->source < htons(45065)) {
                                                      return 0;
                                                  } else {
                                                      if (tcph->source < htons(45275)) {
                                                          return 1;
                                                      } else {
                                                          if (tcph->window < htons(29136)) {
                                                              return 1;
                                                          } else {
                                                              if (iph->id < htons(27744)) {
                                                                  if (iph->id < htons(18483)) {
                                                                      return 0;
                                                                  } else {
                                                                      return 1;
                                                                  }
                                                              } else {
                                                                  return 0;
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          } else {
                                              if (tcph->source < htons(23)) {
                                                  if (tcph->window < htons(23456)) {
                                                      return 0;
                                                  } else {
                                                      if (tcph->window < htons(29024)) {
                                                          if (iph->id < htons(4551)) {
                                                              return 0;
                                                          } else {
                                                              return 1;
                                                          }
                                                      } else {
                                                          return 0;
                                                      }
                                                  }
                                              } else {
                                                  return 0;
                                              }
                                          }
                                      }
                                  } else {
                                      if ((iph->frag_off & IP_DF) == 0) {
                                          return 1;
                                      } else {
                                          return 0;
                                      }
                                  }
                              } else {
                                  if (tcph->window < htons(64191)) {
                                      if (tcph->source < htons(23)) {
                                          if (tcph->dest < htons(61739)) {
                                              if (tcph->window < htons(28760)) {
                                                  return 0;
                                              } else {
                                                  if (tcph->dest < htons(56010)) {
                                                      if (tcph->dest < htons(55408)) {
                                                          if (tcph->dest < htons(50653)) {
                                                              if (tcph->dest < htons(49535)) {
                                                                  if (tcph->dest < htons(33130)) {
                                                                      if (tcph->dest < htons(28835)) {
                                                                          if (tcph->dest < htons(13154)) {
                                                                              if (tcph->dest < htons(6977)) {
                                                                                  return 0;
                                                                              } else {
                                                                                  return 1;
                                                                              }
                                                                          } else {
                                                                              return 0;
                                                                          }
                                                                      } else {
                                                                          if (tcph->dest < htons(30218)) {
                                                                              return 1;
                                                                          } else {
                                                                              if (tcph->dest < htons(31610)) {
                                                                                  return 0;
                                                                              } else {
                                                                                  return 1;
                                                                              }
                                                                          }
                                                                      }
                                                                  } else {
                                                                      if (tcph->dest < htons(44918)) {
                                                                          return 0;
                                                                      } else {
                                                                          if (tcph->dest < htons(46084)) {
                                                                              return 1;
                                                                          } else {
                                                                              return 0;
                                                                          }
                                                                      }
                                                                  }
                                                              } else {
                                                                  return 1;
                                                              }
                                                          } else {
                                                              return 0;
                                                          }
                                                      } else {
                                                          return 1;
                                                      }
                                                  } else {
                                                      return 0;
                                                  }
                                              }
                                          } else {
                                              if (tcph->window < htons(28760)) {
                                                  return 0;
                                              } else {
                                                  return 1;
                                              }
                                          }
                                      } else {
                                          if (iph->id < htons(5739)) {
                                              if (iph->id < htons(5628)) {
                                                  return 0;
                                              } else {
                                                  return 1;
                                              }
                                          } else {
                                              return 0;
                                          }
                                      }
                                  } else {
                                      if (tcph->window < htons(64274)) {
                                          if (tcph->dest < htons(24)) {
                                              if (tcph->dest < htons(22)) {
                                                  return 1;
                                              } else {
                                                  if (iph->id < htons(52400)) {
                                                      if (iph->id < htons(50227)) {
                                                          if (tcph->source < htons(37436)) {
                                                              return 0;
                                                          } else {
                                                              if (tcph->source < htons(38522)) {
                                                                  return 1;
                                                              } else {
                                                                  if (tcph->source < htons(40795)) {
                                                                      return 0;
                                                                  } else {
                                                                      if (tcph->source < htons(41603)) {
                                                                          return 1;
                                                                      } else {
                                                                          if (iph->id < htons(24316)) {
                                                                              if (tcph->dest < htons(23)) {
                                                                                  return 1;
                                                                              } else {
                                                                                  return 0;
                                                                              }
                                                                          } else {
                                                                              return 0;
                                                                          }
                                                                      }
                                                                  }
                                                              }
                                                          }
                                                      } else {
                                                          return 1;
                                                      }
                                                  } else {
                                                      return 0;
                                                  }
                                              }
                                          } else {
                                              if (tcph->source < htons(32635)) {
                                                  return 0;
                                              } else {
                                                  if (tcph->dest < htons(634)) {
                                                      if (tcph->dest < htons(624)) {
                                                          if (iph->id < htons(63606)) {
                                                              if (tcph->dest < htons(81)) {
                                                                  if (tcph->dest < htons(80)) {
                                                                      return 1;
                                                                  } else {
                                                                      if (tcph->source < htons(51998)) {
                                                                          return 0;
                                                                      } else {
                                                                          return 1;
                                                                      }
                                                                  }
                                                              } else {
                                                                  if (tcph->source < htons(53328)) {
                                                                      return 1;
                                                                  } else {
                                                                      if (tcph->source < htons(53432)) {
                                                                          if (tcph->dest < htons(327)) {
                                                                              return 1;
                                                                          } else {
                                                                              return 0;
                                                                          }
                                                                      } else {
                                                                          return 1;
                                                                      }
                                                                  }
                                                              }
                                                          } else {
                                                              return 0;
                                                          }
                                                      } else {
                                                          if (iph->id < htons(19472)) {
                                                              if (tcph->source < htons(49554)) {
                                                                  return 0;
                                                              } else {
                                                                  if (iph->id < htons(14390)) {
                                                                      if (tcph->source < htons(54678)) {
                                                                          return 1;
                                                                      } else {
                                                                          return 0;
                                                                      }
                                                                  } else {
                                                                      return 1;
                                                                  }
                                                              }
                                                          } else {
                                                              return 0;
                                                          }
                                                      }
                                                  } else {
                                                      if (tcph->dest < htons(8063)) {
                                                          if (iph->id < htons(62800)) {
                                                              if (tcph->source < htons(59387)) {
                                                                  if (iph->id < htons(1045)) {
                                                                      if (iph->id < htons(1010)) {
                                                                          return 1;
                                                                      } else {
                                                                          return 0;
                                                                      }
                                                                  } else {
                                                                      if (iph->id < htons(35958)) {
                                                                          return 1;
                                                                      } else {
                                                                          if (iph->id < htons(36060)) {
                                                                              return 0;
                                                                          } else {
                                                                              if (iph->id < htons(36946)) {
                                                                                  if (iph->id < htons(36929)) {
                                                                                      return 1;
                                                                                  } else {
                                                                                      return 0;
                                                                                  }
                                                                              } else {
                                                                                  if (tcph->dest < htons(877)) {
                                                                                      if (tcph->dest < htons(841)) {
                                                                                          return 1;
                                                                                      } else {
                                                                                          if (iph->id < htons(43217)) {
                                                                                              return 1;
                                                                                          } else {
                                                                                              return 0;
                                                                                          }
                                                                                      }
                                                                                  } else {
                                                                                      if (iph->id < htons(55031)) {
                                                                                          return 1;
                                                                                      } else {
                                                                                          if (iph->id < htons(55041)) {
                                                                                              return 0;
                                                                                          } else {
                                                                                              if (tcph->source < htons(39278)) {
                                                                                                  if (tcph->source < htons(39186)) {
                                                                                                      return 1;
                                                                                                  } else {
                                                                                                      return 0;
                                                                                                  }
                                                                                              } else {
                                                                                                  return 1;
                                                                                              }
                                                                                          }
                                                                                      }
                                                                                  }
                                                                              }
                                                                          }
                                                                      }
                                                                  }
                                                              } else {
                                                                  if (tcph->source < htons(59427)) {
                                                                      return 0;
                                                                  } else {
                                                                      return 1;
                                                                  }
                                                              }
                                                          } else {
                                                              if (iph->id < htons(62828)) {
                                                                  return 0;
                                                              } else {
                                                                  if (tcph->source < htons(35900)) {
                                                                      if (iph->id < htons(64635)) {
                                                                          return 0;
                                                                      } else {
                                                                          return 1;
                                                                      }
                                                                  } else {
                                                                      return 1;
                                                                  }
                                                              }
                                                          }
                                                      } else {
                                                          if (tcph->dest < htons(8081)) {
                                                              if (tcph->source < htons(47610)) {
                                                                  return 0;
                                                              } else {
                                                                  return 1;
                                                              }
                                                          } else {
                                                              if (iph->id < htons(65105)) {
                                                                  if (tcph->source < htons(33525)) {
                                                                      if (tcph->source < htons(33455)) {
                                                                          if (tcph->dest < htons(24090)) {
                                                                              return 1;
                                                                          } else {
                                                                              if (tcph->dest < htons(31537)) {
                                                                                  return 0;
                                                                              } else {
                                                                                  return 1;
                                                                              }
                                                                          }
                                                                      } else {
                                                                          return 0;
                                                                      }
                                                                  } else {
                                                                      if (tcph->dest < htons(49451)) {
                                                                          if (iph->id < htons(23036)) {
                                                                              return 1;
                                                                          } else {
                                                                              if (iph->id < htons(23152)) {
                                                                                  return 0;
                                                                              } else {
                                                                                  if (iph->id < htons(26727)) {
                                                                                      if (iph->id < htons(26611)) {
                                                                                          if (tcph->dest < htons(28830)) {
                                                                                              if (iph->id < htons(25042)) {
                                                                                                  return 1;
                                                                                              } else {
                                                                                                  if (iph->id < htons(25277)) {
                                                                                                      return 0;
                                                                                                  } else {
                                                                                                      if (tcph->source < htons(55033)) {
                                                                                                          return 1;
                                                                                                      } else {
                                                                                                          if (tcph->source < htons(56371)) {
                                                                                                              return 0;
                                                                                                          } else {
                                                                                                              return 1;
                                                                                                          }
                                                                                                      }
                                                                                                  }
                                                                                              }
                                                                                          } else {
                                                                                              if (tcph->dest < htons(31541)) {
                                                                                                  return 0;
                                                                                              } else {
                                                                                                  return 1;
                                                                                              }
                                                                                          }
                                                                                      } else {
                                                                                          return 0;
                                                                                      }
                                                                                  } else {
                                                                                      if (tcph->source < htons(36153)) {
                                                                                          if (tcph->source < htons(36059)) {
                                                                                              if (iph->id < htons(54150)) {
                                                                                                  return 1;
                                                                                              } else {
                                                                                                  if (iph->id < htons(55388)) {
                                                                                                      return 0;
                                                                                                  } else {
                                                                                                      return 1;
                                                                                                  }
                                                                                              }
                                                                                          } else {
                                                                                              return 0;
                                                                                          }
                                                                                      } else {
                                                                                          if (tcph->dest < htons(21054)) {
                                                                                              if (tcph->source < htons(43251)) {
                                                                                                  if (tcph->source < htons(43210)) {
                                                                                                      return 1;
                                                                                                  } else {
                                                                                                      return 0;
                                                                                                  }
                                                                                              } else {
                                                                                                  return 1;
                                                                                              }
                                                                                          } else {
                                                                                              if (tcph->dest < htons(21426)) {
                                                                                                  return 0;
                                                                                              } else {
                                                                                                  if (tcph->dest < htons(29699)) {
                                                                                                      if (tcph->dest < htons(28081)) {
                                                                                                          return 1;
                                                                                                      } else {
                                                                                                          return 0;
                                                                                                      }
                                                                                                  } else {
                                                                                                      return 1;
                                                                                                  }
                                                                                              }
                                                                                          }
                                                                                      }
                                                                                  }
                                                                              }
                                                                          }
                                                                      } else {
                                                                          if (tcph->dest < htons(49750)) {
                                                                              return 0;
                                                                          } else {
                                                                              if (tcph->dest < htons(50428)) {
                                                                                  if (tcph->dest < htons(50328)) {
                                                                                      return 1;
                                                                                  } else {
                                                                                      return 0;
                                                                                  }
                                                                              } else {
                                                                                  if (iph->id < htons(54115)) {
                                                                                      return 1;
                                                                                  } else {
                                                                                      if (iph->id < htons(55673)) {
                                                                                          return 0;
                                                                                      } else {
                                                                                          return 1;
                                                                                      }
                                                                                  }
                                                                              }
                                                                          }
                                                                      }
                                                                  }
                                                              } else {
                                                                  if (tcph->dest < htons(50230)) {
                                                                      return 1;
                                                                  } else {
                                                                      return 0;
                                                                  }
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      } else {
                                          return 0;
                                      }
                                  }
                              }
                          } else {
                              if ((iph->frag_off & IP_DF) == 0) {
                                  if (iph->tot_len < htons(46)) {
                                      if (tcph->source < htons(852)) {
                                          return 0;
                                      } else {
                                          if (tcph->source < htons(51008)) {
                                              if (tcph->window < htons(386)) {
                                                  return 0;
                                              } else {
                                                  return 1;
                                              }
                                          } else {
                                              return 0;
                                          }
                                      }
                                  } else {
                                      return 0;
                                  }
                              } else {
                                  if (tcph->window < htons(27920)) {
                                      return 0;
                                  } else {
                                      if (tcph->window < htons(29016)) {
                                          return 1;
                                      } else {
                                          if (tcph->dest < htons(23)) {
                                              if (tcph->window < htons(51072)) {
                                                  return 0;
                                              } else {
                                                  return 1;
                                              }
                                          } else {
                                              return 0;
                                          }
                                      }
                                  }
                              }
                          }
                      } else {
                          if (tcph->window < htons(1025)) {
                              if ((iph->frag_off & IP_DF) == 0) {
                                  if (tcph->source < htons(64359)) {
                                      if (tcph->source < htons(59781)) {
                                          return 1;
                                      } else {
                                          if (tcph->source < htons(62216)) {
                                              return 0;
                                          } else {
                                              if (tcph->syn == 0) {
                                                  if (tcph->window < htons(1022)) {
                                                      return 0;
                                                  } else {
                                                      if (tcph->source < htons(63130)) {
                                                          return 0;
                                                      } else {
                                                          return 1;
                                                      }
                                                  }
                                              } else {
                                                  if (tcph->source < htons(62233)) {
                                                      return 1;
                                                  } else {
                                                      if (tcph->source < htons(64332)) {
                                                          if (tcph->dest < htons(445)) {
                                                              if (tcph->source < htons(63468)) {
                                                                  return 0;
                                                              } else {
                                                                  return 1;
                                                              }
                                                          } else {
                                                              return 0;
                                                          }
                                                      } else {
                                                          return 1;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  } else {
                                      return 0;
                                  }
                              } else {
                                  return 0;
                              }
                          } else {
                              if ((tcph->doff*4) < htons(38)) {
                                  return 0;
                              } else {
                                  if (tcph->window < htons(53290)) {
                                      return 0;
                                  } else {
                                      if (tcph->source < htons(61577)) {
                                          if (tcph->dest < htons(28)) {
                                              return 0;
                                          } else {
                                              if (tcph->window < htons(64888)) {
                                                  return 1;
                                              } else {
                                                  return 0;
                                              }
                                          }
                                      } else {
                                          return 0;
                                      }
                                  }
                              }
                          }
                      }
                  } else {
                      if (tcph->window < htons(14261)) {
                          return 0;
                      } else {
                          if (tcph->window < htons(17191)) {
                              if (tcph->source < htons(2066)) {
                                  return 0;
                              } else {
                                  return 1;
                              }
                          } else {
                              return 0;
                          }
                      }
                  }
              }
          } else {
              if ((iph->frag_off & IP_DF) == 0) {
                  if (tcph->dest < htons(756)) {
                      if (tcph->window < htons(600)) {
                          return 0;
                      } else {
                          if (tcph->source < htons(39796)) {
                              return 0;
                          } else {
                              if (tcph->ack == 0) {
                                  return 1;
                              } else {
                                  return 0;
                              }
                          }
                      }
                  } else {
                      return 0;
                  }
              } else {
                  if (iph->id < htons(64)) {
                      if (tcph->dest < htons(23)) {
                          if (tcph->source < htons(35296)) {
                              if (tcph->source < htons(11107)) {
                                  if (tcph->source < htons(6209)) {
                                      return 1;
                                  } else {
                                      return 0;
                                  }
                              } else {
                                  return 1;
                              }
                          } else {
                              if (tcph->source < htons(37828)) {
                                  return 0;
                              } else {
                                  if (tcph->source < htons(55873)) {
                                      return 1;
                                  } else {
                                      if (tcph->source < htons(58158)) {
                                          return 0;
                                      } else {
                                          return 1;
                                      }
                                  }
                              }
                          }
                      } else {
                          return 0;
                      }
                  } else {
                      if (tcph->dest < htons(632)) {
                          if ((tcph->doff*4) < htons(38)) {
                              if (tcph->window < htons(54016)) {
                                  return 0;
                              } else {
                                  if (tcph->source < htons(46264)) {
                                      return 0;
                                  } else {
                                      return 1;
                                  }
                              }
                          } else {
                              return 1;
                          }
                      } else {
                          if (tcph->source < htons(34911)) {
                              if (tcph->urg_ptr < htons(1)) {
                                  if (tcph->window < htons(23040)) {
                                      if (iph->tos < htons(1)) {
                                          if (tcph->window < htons(29)) {
                                              if (tcph->source < htons(8316)) {
                                                  if (tcph->source < htons(466)) {
                                                      if (tcph->source < htons(443)) {
                                                          if (tcph->source < htons(103)) {
                                                              if (tcph->source < htons(102)) {
                                                                  if (tcph->ack == 0) {
                                                                      if (iph->id < htons(49693)) {
                                                                          if (tcph->dest < htons(53609)) {
                                                                              if (tcph->source < htons(23)) {
                                                                                  if (tcph->source < htons(22)) {
                                                                                      return 1;
                                                                                  } else {
                                                                                      if (tcph->dest < htons(28777)) {
                                                                                          if (tcph->dest < htons(27939)) {
                                                                                              return 1;
                                                                                          } else {
                                                                                              return 0;
                                                                                          }
                                                                                      } else {
                                                                                          return 1;
                                                                                      }
                                                                                  }
                                                                              } else {
                                                                                  return 1;
                                                                              }
                                                                          } else {
                                                                              if (tcph->dest < htons(53811)) {
                                                                                  return 0;
                                                                              } else {
                                                                                  if (tcph->source < htons(29)) {
                                                                                      if (tcph->source < htons(24)) {
                                                                                          if (tcph->dest < htons(57710)) {
                                                                                              if (tcph->dest < htons(56134)) {
                                                                                                  return 1;
                                                                                              } else {
                                                                                                  return 0;
                                                                                              }
                                                                                          } else {
                                                                                              return 1;
                                                                                          }
                                                                                      } else {
                                                                                          return 0;
                                                                                      }
                                                                                  } else {
                                                                                      return 1;
                                                                                  }
                                                                              }
                                                                          }
                                                                      } else {
                                                                          if (iph->id < htons(54441)) {
                                                                              return 0;
                                                                          } else {
                                                                              return 1;
                                                                          }
                                                                      }
                                                                  } else {
                                                                      if (iph->id < htons(37488)) {
                                                                          if (iph->id < htons(37180)) {
                                                                              if (iph->id < htons(24962)) {
                                                                                  return 1;
                                                                              } else {
                                                                                  if (iph->id < htons(24977)) {
                                                                                      return 0;
                                                                                  } else {
                                                                                      if (tcph->dest < htons(42482)) {
                                                                                          return 1;
                                                                                      } else {
                                                                                          if (tcph->dest < htons(42775)) {
                                                                                              return 0;
                                                                                          } else {
                                                                                              if (iph->id < htons(31976)) {
                                                                                                  return 1;
                                                                                              } else {
                                                                                                  if (iph->id < htons(31982)) {
                                                                                                      return 0;
                                                                                                  } else {
                                                                                                      return 1;
                                                                                                  }
                                                                                              }
                                                                                          }
                                                                                      }
                                                                                  }
                                                                              }
                                                                          } else {
                                                                              return 0;
                                                                          }
                                                                      } else {
                                                                          return 1;
                                                                      }
                                                                  }
                                                              } else {
                                                                  if (tcph->dest < htons(19828)) {
                                                                      return 1;
                                                                  } else {
                                                                      if (iph->id < htons(60262)) {
                                                                          return 0;
                                                                      } else {
                                                                          return 1;
                                                                      }
                                                                  }
                                                              }
                                                          } else {
                                                              return 1;
                                                          }
                                                      } else {
                                                          if (tcph->ack == 0) {
                                                              if (tcph->dest < htons(46979)) {
                                                                  if (iph->id < htons(25419)) {
                                                                      if (iph->id < htons(7362)) {
                                                                          return 0;
                                                                      } else {
                                                                          if (tcph->source < htons(464)) {
                                                                              return 1;
                                                                          } else {
                                                                              if (tcph->dest < htons(23295)) {
                                                                                  return 0;
                                                                              } else {
                                                                                  return 1;
                                                                              }
                                                                          }
                                                                      }
                                                                  } else {
                                                                      if (iph->id < htons(40204)) {
                                                                          return 0;
                                                                      } else {
                                                                          return 1;
                                                                      }
                                                                  }
                                                              } else {
                                                                  if (tcph->dest < htons(64058)) {
                                                                      if (iph->id < htons(8762)) {
                                                                          return 1;
                                                                      } else {
                                                                          return 0;
                                                                      }
                                                                  } else {
                                                                      if (iph->id < htons(30356)) {
                                                                          return 0;
                                                                      } else {
                                                                          return 1;
                                                                      }
                                                                  }
                                                              }
                                                          } else {
                                                              if (tcph->dest < htons(60355)) {
                                                                  if (tcph->dest < htons(43056)) {
                                                                      if (tcph->dest < htons(2451)) {
                                                                          if (tcph->dest < htons(2067)) {
                                                                              return 1;
                                                                          } else {
                                                                              return 0;
                                                                          }
                                                                      } else {
                                                                          return 1;
                                                                      }
                                                                  } else {
                                                                      if (tcph->dest < htons(43205)) {
                                                                          return 0;
                                                                      } else {
                                                                          if (tcph->source < htons(452)) {
                                                                              if (tcph->source < htons(445)) {
                                                                                  if (iph->id < htons(11512)) {
                                                                                      if (iph->id < htons(11469)) {
                                                                                          if (tcph->dest < htons(49853)) {
                                                                                              if (tcph->dest < htons(49465)) {
                                                                                                  return 1;
                                                                                              } else {
                                                                                                  return 0;
                                                                                              }
                                                                                          } else {
                                                                                              return 1;
                                                                                          }
                                                                                      } else {
                                                                                          return 0;
                                                                                      }
                                                                                  } else {
                                                                                      return 1;
                                                                                  }
                                                                              } else {
                                                                                  if (tcph->dest < htons(53282)) {
                                                                                      return 1;
                                                                                  } else {
                                                                                      if (tcph->dest < htons(53874)) {
                                                                                          return 0;
                                                                                      } else {
                                                                                          if (tcph->dest < htons(59637)) {
                                                                                              if (iph->id < htons(19677)) {
                                                                                                  return 1;
                                                                                              } else {
                                                                                                  if (iph->id < htons(21871)) {
                                                                                                      return 0;
                                                                                                  } else {
                                                                                                      if (tcph->dest < htons(56313)) {
                                                                                                          return 0;
                                                                                                      } else {
                                                                                                          if (tcph->dest < htons(58298)) {
                                                                                                              return 1;
                                                                                                          } else {
                                                                                                              if (iph->id < htons(25835)) {
                                                                                                                  return 1;
                                                                                                              } else {
                                                                                                                  return 0;
                                                                                                              }
                                                                                                          }
                                                                                                      }
                                                                                                  }
                                                                                              }
                                                                                          } else {
                                                                                              return 1;
                                                                                          }
                                                                                      }
                                                                                  }
                                                                              }
                                                                          } else {
                                                                              return 1;
                                                                          }
                                                                      }
                                                                  }
                                                              } else {
                                                                  if (tcph->dest < htons(61746)) {
                                                                      if (tcph->source < htons(444)) {
                                                                          return 1;
                                                                      } else {
                                                                          if (iph->id < htons(56887)) {
                                                                              return 0;
                                                                          } else {
                                                                              return 1;
                                                                          }
                                                                      }
                                                                  } else {
                                                                      if (iph->id < htons(18958)) {
                                                                          if (iph->id < htons(12387)) {
                                                                              return 1;
                                                                          } else {
                                                                              return 0;
                                                                          }
                                                                      } else {
                                                                          if (iph->id < htons(60862)) {
                                                                              return 1;
                                                                          } else {
                                                                              return 0;
                                                                          }
                                                                      }
                                                                  }
                                                              }
                                                          }
                                                      }
                                                  } else {
                                                      if (iph->id < htons(148)) {
                                                          if (iph->id < htons(126)) {
                                                              return 1;
                                                          } else {
                                                              return 0;
                                                          }
                                                      } else {
                                                          if (tcph->source < htons(1429)) {
                                                              if (iph->id < htons(5164)) {
                                                                  if (iph->id < htons(5137)) {
                                                                      return 1;
                                                                  } else {
                                                                      return 0;
                                                                  }
                                                              } else {
                                                                  if (tcph->source < htons(1128)) {
                                                                      return 1;
                                                                  } else {
                                                                      if (tcph->source < htons(1130)) {
                                                                          return 0;
                                                                      } else {
                                                                          return 1;
                                                                      }
                                                                  }
                                                              }
                                                          } else {
                                                              if (tcph->dest < htons(3015)) {
                                                                  return 0;
                                                              } else {
                                                                  if (tcph->dest < htons(15474)) {
                                                                      if (tcph->dest < htons(15469)) {
                                                                          if (iph->id < htons(42893)) {
                                                                              if (iph->id < htons(24813)) {
                                                                                  if (iph->id < htons(24799)) {
                                                                                      if (iph->id < htons(17812)) {
                                                                                          if (iph->id < htons(8400)) {
                                                                                              return 1;
                                                                                          } else {
                                                                                              if (iph->id < htons(8432)) {
                                                                                                  return 0;
                                                                                              } else {
                                                                                                  return 1;
                                                                                              }
                                                                                          }
                                                                                      } else {
                                                                                          if (iph->id < htons(18502)) {
                                                                                              return 0;
                                                                                          } else {
                                                                                              if (tcph->dest < htons(12442)) {
                                                                                                  return 1;
                                                                                              } else {
                                                                                                  if (tcph->dest < htons(13276)) {
                                                                                                      return 0;
                                                                                                  } else {
                                                                                                      return 1;
                                                                                                  }
                                                                                              }
                                                                                          }
                                                                                      }
                                                                                  } else {
                                                                                      return 0;
                                                                                  }
                                                                              } else {
                                                                                  return 1;
                                                                              }
                                                                          } else {
                                                                              if (iph->id < htons(45881)) {
                                                                                  return 0;
                                                                              } else {
                                                                                  if (tcph->source < htons(5760)) {
                                                                                      return 1;
                                                                                  } else {
                                                                                      if (tcph->dest < htons(9529)) {
                                                                                          if (tcph->source < htons(5982)) {
                                                                                              return 0;
                                                                                          } else {
                                                                                              return 1;
                                                                                          }
                                                                                      } else {
                                                                                          return 0;
                                                                                      }
                                                                                  }
                                                                              }
                                                                          }
                                                                      } else {
                                                                          return 0;
                                                                      }
                                                                  } else {
                                                                      if (tcph->source < htons(1434)) {
                                                                          if (iph->id < htons(1163)) {
                                                                              return 0;
                                                                          } else {
                                                                              if (iph->id < htons(23330)) {
                                                                                  if (iph->id < htons(22066)) {
                                                                                      return 1;
                                                                                  } else {
                                                                                      return 0;
                                                                                  }
                                                                              } else {
                                                                                  return 1;
                                                                              }
                                                                          }
                                                                      } else {
                                                                          if (iph->id < htons(61994)) {
                                                                              if (tcph->source < htons(1781)) {
                                                                                  if (tcph->source < htons(1769)) {
                                                                                      if (tcph->source < htons(1449)) {
                                                                                          if (iph->id < htons(39335)) {
                                                                                              return 1;
                                                                                          } else {
                                                                                              if (iph->id < htons(42493)) {
                                                                                                  return 0;
                                                                                              } else {
                                                                                                  return 1;
                                                                                              }
                                                                                          }
                                                                                      } else {
                                                                                          return 1;
                                                                                      }
                                                                                  } else {
                                                                                      return 0;
                                                                                  }
                                                                              } else {
                                                                                  if (iph->id < htons(4033)) {
                                                                                      if (iph->id < htons(4029)) {
                                                                                          if (tcph->source < htons(2008)) {
                                                                                              if (tcph->dest < htons(52119)) {
                                                                                                  return 0;
                                                                                              } else {
                                                                                                  return 1;
                                                                                              }
                                                                                          } else {
                                                                                              return 1;
                                                                                          }
                                                                                      } else {
                                                                                          return 0;
                                                                                      }
                                                                                  } else {
                                                                                      if (tcph->dest < htons(33160)) {
                                                                                          if (tcph->dest < htons(33151)) {
                                                                                              if (iph->id < htons(6831)) {
                                                                                                  if (tcph->source < htons(5015)) {
                                                                                                      return 0;
                                                                                                  } else {
                                                                                                      return 1;
                                                                                                  }
                                                                                              } else {
                                                                                                  return 1;
                                                                                              }
                                                                                          } else {
                                                                                              return 0;
                                                                                          }
                                                                                      } else {
                                                                                          if (tcph->dest < htons(58404)) {
                                                                                              if (tcph->dest < htons(58390)) {
                                                                                                  if (iph->id < htons(27595)) {
                                                                                                      if (iph->id < htons(27392)) {
                                                                                                          if (tcph->dest < htons(55648)) {
                                                                                                              if (tcph->dest < htons(50019)) {
                                                                                                                  if (tcph->dest < htons(50014)) {
                                                                                                                      if (tcph->dest < htons(43941)) {
                                                                                                                          if (iph->id < htons(9687)) {
                                                                                                                              if (iph->id < htons(9682)) {
                                                                                                                                  return 1;
                                                                                                                              } else {
                                                                                                                                  return 0;
                                                                                                                              }
                                                                                                                          } else {
                                                                                                                              return 1;
                                                                                                                          }
                                                                                                                      } else {
                                                                                                                          if (tcph->dest < htons(43976)) {
                                                                                                                              return 0;
                                                                                                                          } else {
                                                                                                                              if (iph->id < htons(14604)) {
                                                                                                                                  return 1;
                                                                                                                              } else {
                                                                                                                                  if (iph->id < htons(24491)) {
                                                                                                                                      if (tcph->dest < htons(46055)) {
                                                                                                                                          return 1;
                                                                                                                                      } else {
                                                                                                                                          return 0;
                                                                                                                                      }
                                                                                                                                  } else {
                                                                                                                                      return 1;
                                                                                                                                  }
                                                                                                                              }
                                                                                                                          }
                                                                                                                      }
                                                                                                                  } else {
                                                                                                                      return 0;
                                                                                                                  }
                                                                                                              } else {
                                                                                                                  return 1;
                                                                                                              }
                                                                                                          } else {
                                                                                                              if (tcph->dest < htons(55661)) {
                                                                                                                  if (iph->id < htons(13320)) {
                                                                                                                      return 1;
                                                                                                                  } else {
                                                                                                                      return 0;
                                                                                                                  }
                                                                                                              } else {
                                                                                                                  return 1;
                                                                                                              }
                                                                                                          }
                                                                                                      } else {
                                                                                                          return 0;
                                                                                                      }
                                                                                                  } else {
                                                                                                      if (tcph->dest < htons(42905)) {
                                                                                                          return 1;
                                                                                                      } else {
                                                                                                          if (tcph->dest < htons(42960)) {
                                                                                                              return 0;
                                                                                                          } else {
                                                                                                              if (tcph->dest < htons(46380)) {
                                                                                                                  if (tcph->dest < htons(46313)) {
                                                                                                                      if (tcph->dest < htons(44318)) {
                                                                                                                          return 1;
                                                                                                                      } else {
                                                                                                                          if (tcph->dest < htons(44368)) {
                                                                                                                              return 0;
                                                                                                                          } else {
                                                                                                                              return 1;
                                                                                                                          }
                                                                                                                      }
                                                                                                                  } else {
                                                                                                                      return 0;
                                                                                                                  }
                                                                                                              } else {
                                                                                                                  if (iph->id < htons(34295)) {
                                                                                                                      if (iph->id < htons(34086)) {
                                                                                                                          return 1;
                                                                                                                      } else {
                                                                                                                          return 0;
                                                                                                                      }
                                                                                                                  } else {
                                                                                                                      return 1;
                                                                                                                  }
                                                                                                              }
                                                                                                          }
                                                                                                      }
                                                                                                  }
                                                                                              } else {
                                                                                                  return 0;
                                                                                              }
                                                                                          } else {
                                                                                              if (tcph->dest < htons(61984)) {
                                                                                                  return 1;
                                                                                              } else {
                                                                                                  if (tcph->dest < htons(62002)) {
                                                                                                      return 0;
                                                                                                  } else {
                                                                                                      return 1;
                                                                                                  }
                                                                                              }
                                                                                          }
                                                                                      }
                                                                                  }
                                                                              }
                                                                          } else {
                                                                              if (iph->id < htons(62147)) {
                                                                                  return 0;
                                                                              } else {
                                                                                  return 1;
                                                                              }
                                                                          }
                                                                      }
                                                                  }
                                                              }
                                                          }
                                                      }
                                                  }
                                              } else {
                                                  if (tcph->dest < htons(3750)) {
                                                      return 0;
                                                  } else {
                                                      if (tcph->source < htons(8333)) {
                                                          return 0;
                                                      } else {
                                                          if (iph->id < htons(64022)) {
                                                              if (tcph->dest < htons(52315)) {
                                                                  if (tcph->dest < htons(52306)) {
                                                                      if (tcph->dest < htons(45052)) {
                                                                          if (iph->id < htons(1906)) {
                                                                              if (tcph->source < htons(9685)) {
                                                                                  return 0;
                                                                              } else {
                                                                                  return 1;
                                                                              }
                                                                          } else {
                                                                              if (iph->id < htons(61107)) {
                                                                                  if (tcph->dest < htons(5913)) {
                                                                                      if (tcph->dest < htons(5894)) {
                                                                                          if (tcph->source < htons(8852)) {
                                                                                              return 0;
                                                                                          } else {
                                                                                              return 1;
                                                                                          }
                                                                                      } else {
                                                                                          return 0;
                                                                                      }
                                                                                  } else {
                                                                                      if (tcph->dest < htons(8005)) {
                                                                                          if (tcph->dest < htons(7987)) {
                                                                                              return 1;
                                                                                          } else {
                                                                                              return 0;
                                                                                          }
                                                                                      } else {
                                                                                          if (iph->id < htons(44036)) {
                                                                                              if (iph->id < htons(44015)) {
                                                                                                  if (iph->id < htons(42172)) {
                                                                                                      if (iph->id < htons(9140)) {
                                                                                                          if (iph->id < htons(9138)) {
                                                                                                              return 1;
                                                                                                          } else {
                                                                                                              return 0;
                                                                                                          }
                                                                                                      } else {
                                                                                                          if (tcph->dest < htons(40291)) {
                                                                                                              return 1;
                                                                                                          } else {
                                                                                                              if (tcph->dest < htons(40352)) {
                                                                                                                  return 0;
                                                                                                              } else {
                                                                                                                  return 1;
                                                                                                              }
                                                                                                          }
                                                                                                      }
                                                                                                  } else {
                                                                                                      if (tcph->dest < htons(38960)) {
                                                                                                          return 1;
                                                                                                      } else {
                                                                                                          return 0;
                                                                                                      }
                                                                                                  }
                                                                                              } else {
                                                                                                  return 0;
                                                                                              }
                                                                                          } else {
                                                                                              return 1;
                                                                                          }
                                                                                      }
                                                                                  }
                                                                              } else {
                                                                                  if (iph->id < htons(61775)) {
                                                                                      return 0;
                                                                                  } else {
                                                                                      return 1;
                                                                                  }
                                                                              }
                                                                          }
                                                                      } else {
                                                                          if (tcph->dest < htons(46072)) {
                                                                              if (tcph->dest < htons(45977)) {
                                                                                  if (tcph->dest < htons(45083)) {
                                                                                      return 0;
                                                                                  } else {
                                                                                      if (iph->id < htons(50697)) {
                                                                                          return 1;
                                                                                      } else {
                                                                                          if (tcph->dest < htons(45772)) {
                                                                                              return 0;
                                                                                          } else {
                                                                                              return 1;
                                                                                          }
                                                                                      }
                                                                                  }
                                                                              } else {
                                                                                  return 0;
                                                                              }
                                                                          } else {
                                                                              if (iph->id < htons(3626)) {
                                                                                  return 0;
                                                                              } else {
                                                                                  if (tcph->ack == 0) {
                                                                                      if (iph->id < htons(12251)) {
                                                                                          return 1;
                                                                                      } else {
                                                                                          return 0;
                                                                                      }
                                                                                  } else {
                                                                                      if (iph->id < htons(23485)) {
                                                                                          if (iph->id < htons(12844)) {
                                                                                              return 1;
                                                                                          } else {
                                                                                              return 0;
                                                                                          }
                                                                                      } else {
                                                                                          if (tcph->source < htons(22981)) {
                                                                                              return 1;
                                                                                          } else {
                                                                                              if (tcph->source < htons(23262)) {
                                                                                                  return 0;
                                                                                              } else {
                                                                                                  if (iph->id < htons(58321)) {
                                                                                                      return 1;
                                                                                                  } else {
                                                                                                      if (iph->id < htons(59359)) {
                                                                                                          return 0;
                                                                                                      } else {
                                                                                                          return 1;
                                                                                                      }
                                                                                                  }
                                                                                              }
                                                                                          }
                                                                                      }
                                                                                  }
                                                                              }
                                                                          }
                                                                      }
                                                                  } else {
                                                                      return 0;
                                                                  }
                                                              } else {
                                                                  if (tcph->source < htons(8989)) {
                                                                      if (tcph->source < htons(8941)) {
                                                                          if (tcph->dest < htons(58479)) {
                                                                              if (tcph->dest < htons(57787)) {
                                                                                  return 1;
                                                                              } else {
                                                                                  return 0;
                                                                              }
                                                                          } else {
                                                                              return 1;
                                                                          }
                                                                      } else {
                                                                          return 0;
                                                                      }
                                                                  } else {
                                                                      if (iph->id < htons(1295)) {
                                                                          if (tcph->dest < htons(52771)) {
                                                                              return 1;
                                                                          } else {
                                                                              return 0;
                                                                          }
                                                                      } else {
                                                                          if (tcph->source < htons(23700)) {
                                                                              return 1;
                                                                          } else {
                                                                              if (tcph->source < htons(24171)) {
                                                                                  return 0;
                                                                              } else {
                                                                                  if (tcph->dest < htons(58280)) {
                                                                                      if (tcph->dest < htons(58222)) {
                                                                                          if (tcph->source < htons(31777)) {
                                                                                              if (tcph->source < htons(31552)) {
                                                                                                  return 1;
                                                                                              } else {
                                                                                                  return 0;
                                                                                              }
                                                                                          } else {
                                                                                              return 1;
                                                                                          }
                                                                                      } else {
                                                                                          return 0;
                                                                                      }
                                                                                  } else {
                                                                                      return 1;
                                                                                  }
                                                                              }
                                                                          }
                                                                      }
                                                                  }
                                                              }
                                                          } else {
                                                              if (tcph->dest < htons(43890)) {
                                                                  return 1;
                                                              } else {
                                                                  return 0;
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          } else {
                                              if (iph->tot_len < htons(58)) {
                                                  return 0;
                                              } else {
                                                  return 1;
                                              }
                                          }
                                      } else {
                                          return 0;
                                      }
                                  } else {
                                      return 0;
                                  }
                              } else {
                                  return 0;
                              }
                          } else {
                              if (tcph->dest < htons(27815)) {
                                  if ((tcph->doff*4) < htons(42)) {
                                      if (tcph->source < htons(54290)) {
                                          if (tcph->source < htons(49593)) {
                                              if (tcph->source < htons(49234)) {
                                                  if (tcph->source < htons(47132)) {
                                                      return 0;
                                                  } else {
                                                      if (tcph->source < htons(47497)) {
                                                          return 1;
                                                      } else {
                                                          return 0;
                                                      }
                                                  }
                                              } else {
                                                  return 1;
                                              }
                                          } else {
                                              return 0;
                                          }
                                      } else {
                                          if (tcph->window < htons(29)) {
                                              if (tcph->dest < htons(3769)) {
                                                  return 0;
                                              } else {
                                                  if (iph->id < htons(35463)) {
                                                      if (iph->id < htons(5857)) {
                                                          if (tcph->source < htons(64280)) {
                                                              if (tcph->source < htons(59602)) {
                                                                  if (tcph->dest < htons(5198)) {
                                                                      return 1;
                                                                  } else {
                                                                      return 0;
                                                                  }
                                                              } else {
                                                                  return 1;
                                                              }
                                                          } else {
                                                              return 0;
                                                          }
                                                      } else {
                                                          if (iph->id < htons(21373)) {
                                                              if (iph->id < htons(9056)) {
                                                                  if (iph->id < htons(8703)) {
                                                                      return 1;
                                                                  } else {
                                                                      if (tcph->source < htons(64116)) {
                                                                          return 1;
                                                                      } else {
                                                                          return 0;
                                                                      }
                                                                  }
                                                              } else {
                                                                  if (tcph->ack == 0) {
                                                                      return 0;
                                                                  } else {
                                                                      if (tcph->dest < htons(6412)) {
                                                                          return 0;
                                                                      } else {
                                                                          if (tcph->dest < htons(18059)) {
                                                                              return 1;
                                                                          } else {
                                                                              return 0;
                                                                          }
                                                                      }
                                                                  }
                                                              }
                                                          } else {
                                                              if (tcph->dest < htons(5920)) {
                                                                  if (tcph->dest < htons(5785)) {
                                                                      return 1;
                                                                  } else {
                                                                      return 0;
                                                                  }
                                                              } else {
                                                                  return 1;
                                                              }
                                                          }
                                                      }
                                                  } else {
                                                      if (tcph->ack == 0) {
                                                          return 0;
                                                      } else {
                                                          if (tcph->dest < htons(6489)) {
                                                              return 0;
                                                          } else {
                                                              return 1;
                                                          }
                                                      }
                                                  }
                                              }
                                          } else {
                                              return 0;
                                          }
                                      }
                                  } else {
                                      return 1;
                                  }
                              } else {
                                  if (tcph->urg_ptr < htons(1)) {
                                      if (tcph->dest < htons(64579)) {
                                          if (tcph->dest < htons(34638)) {
                                              if (tcph->dest < htons(33762)) {
                                                  if (tcph->source < htons(38091)) {
                                                      if ((tcph->doff*4) < htons(32)) {
                                                          return 0;
                                                      } else {
                                                          return 1;
                                                      }
                                                  } else {
                                                      if (tcph->dest < htons(33390)) {
                                                          if (iph->id < htons(31118)) {
                                                              if (tcph->dest < htons(32261)) {
                                                                  return 1;
                                                              } else {
                                                                  if (tcph->dest < htons(32552)) {
                                                                      if (tcph->source < htons(49829)) {
                                                                          return 1;
                                                                      } else {
                                                                          return 0;
                                                                      }
                                                                  } else {
                                                                      return 1;
                                                                  }
                                                              }
                                                          } else {
                                                              if (tcph->urg == 0) {
                                                                  if (iph->id < htons(53674)) {
                                                                      if (tcph->dest < htons(30387)) {
                                                                          return 1;
                                                                      } else {
                                                                          return 0;
                                                                      }
                                                                  } else {
                                                                      return 1;
                                                                  }
                                                              } else {
                                                                  return 1;
                                                              }
                                                          }
                                                      } else {
                                                          return 1;
                                                      }
                                                  }
                                              } else {
                                                  if (tcph->source < htons(65423)) {
                                                      if (iph->id < htons(40502)) {
                                                          return 0;
                                                      } else {
                                                          if (tcph->dest < htons(34294)) {
                                                              return 1;
                                                          } else {
                                                              return 0;
                                                          }
                                                      }
                                                  } else {
                                                      return 1;
                                                  }
                                              }
                                          } else {
                                              if (tcph->window < htons(42)) {
                                                  if (iph->id < htons(1034)) {
                                                      return 0;
                                                  } else {
                                                      if (tcph->source < htons(50373)) {
                                                          if (tcph->source < htons(50328)) {
                                                              if (tcph->ack == 0) {
                                                                  if (iph->id < htons(48790)) {
                                                                      if (iph->id < htons(21955)) {
                                                                          if (tcph->source < htons(46513)) {
                                                                              return 0;
                                                                          } else {
                                                                              return 1;
                                                                          }
                                                                      } else {
                                                                          if (tcph->source < htons(46922)) {
                                                                              if (tcph->source < htons(45432)) {
                                                                                  if (tcph->source < htons(44270)) {
                                                                                      return 1;
                                                                                  } else {
                                                                                      if (tcph->source < htons(44403)) {
                                                                                          return 0;
                                                                                      } else {
                                                                                          return 1;
                                                                                      }
                                                                                  }
                                                                              } else {
                                                                                  return 0;
                                                                              }
                                                                          } else {
                                                                              return 1;
                                                                          }
                                                                      }
                                                                  } else {
                                                                      return 0;
                                                                  }
                                                              } else {
                                                                  if (tcph->source < htons(38069)) {
                                                                      if (tcph->source < htons(36673)) {
                                                                          return 1;
                                                                      } else {
                                                                          return 0;
                                                                      }
                                                                  } else {
                                                                      if (tcph->dest < htons(45777)) {
                                                                          if (tcph->dest < htons(44793)) {
                                                                              return 1;
                                                                          } else {
                                                                              return 0;
                                                                          }
                                                                      } else {
                                                                          return 1;
                                                                      }
                                                                  }
                                                              }
                                                          } else {
                                                              return 0;
                                                          }
                                                      } else {
                                                          if (tcph->ack == 0) {
                                                              if (tcph->dest < htons(48733)) {
                                                                  return 1;
                                                              } else {
                                                                  if (iph->id < htons(37514)) {
                                                                      if (tcph->dest < htons(50733)) {
                                                                          return 0;
                                                                      } else {
                                                                          return 1;
                                                                      }
                                                                  } else {
                                                                      return 0;
                                                                  }
                                                              }
                                                          } else {
                                                              if (tcph->source < htons(64035)) {
                                                                  if (tcph->dest < htons(47313)) {
                                                                      if (tcph->dest < htons(46877)) {
                                                                          return 1;
                                                                      } else {
                                                                          if (tcph->source < htons(51492)) {
                                                                              return 1;
                                                                          } else {
                                                                              return 0;
                                                                          }
                                                                      }
                                                                  } else {
                                                                      return 1;
                                                                  }
                                                              } else {
                                                                  if (tcph->source < htons(64384)) {
                                                                      return 0;
                                                                  } else {
                                                                      if (iph->id < htons(3224)) {
                                                                          if (tcph->dest < htons(52458)) {
                                                                              return 0;
                                                                          } else {
                                                                              return 1;
                                                                          }
                                                                      } else {
                                                                          if (tcph->dest < htons(62937)) {
                                                                              if (iph->id < htons(15517)) {
                                                                                  if (iph->id < htons(13182)) {
                                                                                      return 1;
                                                                                  } else {
                                                                                      return 0;
                                                                                  }
                                                                              } else {
                                                                                  return 1;
                                                                              }
                                                                          } else {
                                                                              if (tcph->dest < htons(63044)) {
                                                                                  return 0;
                                                                              } else {
                                                                                  return 1;
                                                                              }
                                                                          }
                                                                      }
                                                                  }
                                                              }
                                                          }
                                                      }
                                                  }
                                              } else {
                                                  if (tcph->psh == 0) {
                                                      return 0;
                                                  } else {
                                                      return 1;
                                                  }
                                              }
                                          }
                                      } else {
                                          if (iph->id < htons(58260)) {
                                              if (tcph->ack == 0) {
                                                  if (iph->id < htons(19241)) {
                                                      return 1;
                                                  } else {
                                                      return 0;
                                                  }
                                              } else {
                                                  if (tcph->window < htons(8192)) {
                                                      if (iph->id < htons(26081)) {
                                                          return 1;
                                                      } else {
                                                          return 0;
                                                      }
                                                  } else {
                                                      return 1;
                                                  }
                                              }
                                          } else {
                                              return 0;
                                          }
                                      }
                                  } else {
                                      return 0;
                                  }
                              }
                          }
                      }
                  }
              }
          }
        }
    