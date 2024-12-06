/*****************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by xfc_map_parser
 * from the NPL output file(s) header.yml.
 * Edits to this file will be lost when it is regenerated.
 *
 * $Id: $
 * $Copyright: Copyright 2018-2023 Broadcom. All rights reserved.
 * The term 'Broadcom' refers to Broadcom Inc. and/or its subsidiaries.
 * 
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License 
 * version 2 as published by the Free Software Foundation.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * A copy of the GNU General Public License version 2 (GPLv2) can
 * be found in the LICENSES folder.$
 * All Rights Reserved.$
 *
 * Tool Path: $SDK/INTERNAL/fltg/xfc_map_parser
 *
 ****************************************************************/

#ifndef BCM56890_A0_CNA_6_5_29_BCMPKT_FLEXHDR_H
#define BCM56890_A0_CNA_6_5_29_BCMPKT_FLEXHDR_H

#include <bcmpkt/bcmpkt_flexhdr_internal.h>

#define BCM56890_A0_CNA_6_5_29_BCMPKT_ARP_T                          0
#define BCM56890_A0_CNA_6_5_29_BCMPKT_CPU_COMPOSITES_0_T             1
#define BCM56890_A0_CNA_6_5_29_BCMPKT_CPU_COMPOSITES_1_T             2
#define BCM56890_A0_CNA_6_5_29_BCMPKT_EP_NIH_HEADER_T                3
#define BCM56890_A0_CNA_6_5_29_BCMPKT_ERSPAN3_FIXED_HDR_T            4
#define BCM56890_A0_CNA_6_5_29_BCMPKT_ERSPAN3_SUBHDR_5_T             5
#define BCM56890_A0_CNA_6_5_29_BCMPKT_ETHERTYPE_T                    6
#define BCM56890_A0_CNA_6_5_29_BCMPKT_GENERIC_LOOPBACK_T             7
#define BCM56890_A0_CNA_6_5_29_BCMPKT_ICMP_T                         8
#define BCM56890_A0_CNA_6_5_29_BCMPKT_IPFIX_T                        9
#define BCM56890_A0_CNA_6_5_29_BCMPKT_IPV4_T                         10
#define BCM56890_A0_CNA_6_5_29_BCMPKT_IPV6_T                         11
#define BCM56890_A0_CNA_6_5_29_BCMPKT_L2_T                           12
#define BCM56890_A0_CNA_6_5_29_BCMPKT_MIRROR_ERSPAN_SN_T             13
#define BCM56890_A0_CNA_6_5_29_BCMPKT_MIRROR_TRANSPORT_T             14
#define BCM56890_A0_CNA_6_5_29_BCMPKT_PSAMP_MIRROR_ON_DROP_0_T       15
#define BCM56890_A0_CNA_6_5_29_BCMPKT_PSAMP_MIRROR_ON_DROP_1_T       16
#define BCM56890_A0_CNA_6_5_29_BCMPKT_PSAMP_MIRROR_ON_DROP_2_T       17
#define BCM56890_A0_CNA_6_5_29_BCMPKT_RARP_T                         18
#define BCM56890_A0_CNA_6_5_29_BCMPKT_TCP_FIRST_4BYTES_T             19
#define BCM56890_A0_CNA_6_5_29_BCMPKT_TCP_LAST_16BYTES_T             20
#define BCM56890_A0_CNA_6_5_29_BCMPKT_UDP_T                          21
#define BCM56890_A0_CNA_6_5_29_BCMPKT_UNKNOWN_L3_T                   22
#define BCM56890_A0_CNA_6_5_29_BCMPKT_UNKNOWN_L4_T                   23
#define BCM56890_A0_CNA_6_5_29_BCMPKT_UNKNOWN_L5_T                   24
#define BCM56890_A0_CNA_6_5_29_BCMPKT_VLAN_T                         25
#define BCM56890_A0_CNA_6_5_29_BCMPKT_VXLAN_T                        26
#define BCM56890_A0_CNA_6_5_29_BCMPKT_RXPMD_FLEX_T                   27

#define BCM56890_A0_CNA_6_5_29_BCMPKT_FLEXHDR_COUNT    28

#define BCM56890_A0_CNA_6_5_29_BCMPKT_FLEXHDR_NAME_MAP_INIT \
    {"arp_t", BCM56890_A0_CNA_6_5_29_BCMPKT_ARP_T},\
    {"cpu_composites_0_t", BCM56890_A0_CNA_6_5_29_BCMPKT_CPU_COMPOSITES_0_T},\
    {"cpu_composites_1_t", BCM56890_A0_CNA_6_5_29_BCMPKT_CPU_COMPOSITES_1_T},\
    {"ep_nih_header_t", BCM56890_A0_CNA_6_5_29_BCMPKT_EP_NIH_HEADER_T},\
    {"erspan3_fixed_hdr_t", BCM56890_A0_CNA_6_5_29_BCMPKT_ERSPAN3_FIXED_HDR_T},\
    {"erspan3_subhdr_5_t", BCM56890_A0_CNA_6_5_29_BCMPKT_ERSPAN3_SUBHDR_5_T},\
    {"ethertype_t", BCM56890_A0_CNA_6_5_29_BCMPKT_ETHERTYPE_T},\
    {"generic_loopback_t", BCM56890_A0_CNA_6_5_29_BCMPKT_GENERIC_LOOPBACK_T},\
    {"icmp_t", BCM56890_A0_CNA_6_5_29_BCMPKT_ICMP_T},\
    {"ipfix_t", BCM56890_A0_CNA_6_5_29_BCMPKT_IPFIX_T},\
    {"ipv4_t", BCM56890_A0_CNA_6_5_29_BCMPKT_IPV4_T},\
    {"ipv6_t", BCM56890_A0_CNA_6_5_29_BCMPKT_IPV6_T},\
    {"l2_t", BCM56890_A0_CNA_6_5_29_BCMPKT_L2_T},\
    {"mirror_erspan_sn_t", BCM56890_A0_CNA_6_5_29_BCMPKT_MIRROR_ERSPAN_SN_T},\
    {"mirror_transport_t", BCM56890_A0_CNA_6_5_29_BCMPKT_MIRROR_TRANSPORT_T},\
    {"psamp_mirror_on_drop_0_t", BCM56890_A0_CNA_6_5_29_BCMPKT_PSAMP_MIRROR_ON_DROP_0_T},\
    {"psamp_mirror_on_drop_1_t", BCM56890_A0_CNA_6_5_29_BCMPKT_PSAMP_MIRROR_ON_DROP_1_T},\
    {"psamp_mirror_on_drop_2_t", BCM56890_A0_CNA_6_5_29_BCMPKT_PSAMP_MIRROR_ON_DROP_2_T},\
    {"rarp_t", BCM56890_A0_CNA_6_5_29_BCMPKT_RARP_T},\
    {"tcp_first_4bytes_t", BCM56890_A0_CNA_6_5_29_BCMPKT_TCP_FIRST_4BYTES_T},\
    {"tcp_last_16bytes_t", BCM56890_A0_CNA_6_5_29_BCMPKT_TCP_LAST_16BYTES_T},\
    {"udp_t", BCM56890_A0_CNA_6_5_29_BCMPKT_UDP_T},\
    {"unknown_l3_t", BCM56890_A0_CNA_6_5_29_BCMPKT_UNKNOWN_L3_T},\
    {"unknown_l4_t", BCM56890_A0_CNA_6_5_29_BCMPKT_UNKNOWN_L4_T},\
    {"unknown_l5_t", BCM56890_A0_CNA_6_5_29_BCMPKT_UNKNOWN_L5_T},\
    {"vlan_t", BCM56890_A0_CNA_6_5_29_BCMPKT_VLAN_T},\
    {"vxlan_t", BCM56890_A0_CNA_6_5_29_BCMPKT_VXLAN_T},\
    {"RXPMD_FLEX_T", BCM56890_A0_CNA_6_5_29_BCMPKT_RXPMD_FLEX_T},\
    {"flexhdr count", BCM56890_A0_CNA_6_5_29_BCMPKT_FLEXHDR_COUNT}

#endif /* BCM56890_A0_CNA_6_5_29_BCMPKT_FLEXHDR_H */
