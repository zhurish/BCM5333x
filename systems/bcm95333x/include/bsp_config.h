/*
 * $Id: bsp_config.h,v 1.8 Broadcom SDK $
 *
 * $Copyright: Copyright 2016 Broadcom Corporation.
 * This program is the proprietary software of Broadcom Corporation
 * and/or its licensors, and may only be used, duplicated, modified
 * or distributed pursuant to the terms and conditions of a separate,
 * written license agreement executed between you and Broadcom
 * (an "Authorized License").  Except as set forth in an Authorized
 * License, Broadcom grants no license (express or implied), right
 * to use, or waiver of any kind with respect to the Software, and
 * Broadcom expressly reserves all rights in and to the Software
 * and all intellectual property rights therein.  IF YOU HAVE
 * NO AUTHORIZED LICENSE, THEN YOU HAVE NO RIGHT TO USE THIS SOFTWARE
 * IN ANY WAY, AND SHOULD IMMEDIATELY NOTIFY BROADCOM AND DISCONTINUE
 * ALL USE OF THE SOFTWARE.  
 *  
 * Except as expressly set forth in the Authorized License,
 *  
 * 1.     This program, including its structure, sequence and organization,
 * constitutes the valuable trade secrets of Broadcom, and you shall use
 * all reasonable efforts to protect the confidentiality thereof,
 * and to use this information only in connection with your use of
 * Broadcom integrated circuit products.
 *  
 * 2.     TO THE MAXIMUM EXTENT PERMITTED BY LAW, THE SOFTWARE IS
 * PROVIDED "AS IS" AND WITH ALL FAULTS AND BROADCOM MAKES NO PROMISES,
 * REPRESENTATIONS OR WARRANTIES, EITHER EXPRESS, IMPLIED, STATUTORY,
 * OR OTHERWISE, WITH RESPECT TO THE SOFTWARE.  BROADCOM SPECIFICALLY
 * DISCLAIMS ANY AND ALL IMPLIED WARRANTIES OF TITLE, MERCHANTABILITY,
 * NONINFRINGEMENT, FITNESS FOR A PARTICULAR PURPOSE, LACK OF VIRUSES,
 * ACCURACY OR COMPLETENESS, QUIET ENJOYMENT, QUIET POSSESSION OR
 * CORRESPONDENCE TO DESCRIPTION. YOU ASSUME THE ENTIRE RISK ARISING
 * OUT OF USE OR PERFORMANCE OF THE SOFTWARE.
 * 
 * 3.     TO THE MAXIMUM EXTENT PERMITTED BY LAW, IN NO EVENT SHALL
 * BROADCOM OR ITS LICENSORS BE LIABLE FOR (i) CONSEQUENTIAL,
 * INCIDENTAL, SPECIAL, INDIRECT, OR EXEMPLARY DAMAGES WHATSOEVER
 * ARISING OUT OF OR IN ANY WAY RELATING TO YOUR USE OF OR INABILITY
 * TO USE THE SOFTWARE EVEN IF BROADCOM HAS BEEN ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGES; OR (ii) ANY AMOUNT IN EXCESS OF
 * THE AMOUNT ACTUALLY PAID FOR THE SOFTWARE ITSELF OR USD 1.00,
 * WHICHEVER IS GREATER. THESE LIMITATIONS SHALL APPLY NOTWITHSTANDING
 * ANY FAILURE OF ESSENTIAL PURPOSE OF ANY LIMITED REMEDY.$
 *
 */

#define CFG_INIT_L1     1   /* initialize the L1 cache */
#define CFG_INIT_L2     0   /* there is no L2 cache */

#define CFG_INIT_DRAM       0   /* initialize DRAM controller */
#define CFG_DRAM_SIZE       1   /* size of DRAM if you don't initialize */


#ifndef CFG_SERIAL_BAUD_RATE
#define CFG_SERIAL_BAUD_RATE    CFG_UART_BAUDRATE   /* normal console speed */
#endif

#define CFG_MULTI_CPUS      0   /* no multi-cpu support */

#define CFG_SERIAL_LEDS     0   /* never set this (UART can hang) */
#define CFG_HEAP_SIZE           24     /* heap size in kilobytes */

#define CFG_STACK_SIZE          16384 /* stack size (bytes, rounded up to K) */


/************* Robo/NTSW specific features *******/
#define CFG_PTABLE          0
#define CFG_TCP_NEW         0
#define CFG_FULLDIAG        0
#define CFG_NETWORK 0   /* define to include network support */
#define CFG_FATFS       0
#define CFG_TCP     0
#define CFG_HTTPFS  0
#define CFG_URLS    0

#define CCA_WATCHDOG_COUNTER   0x18000080
#define DMU_CRU_RESET          0x1803f200

#define CFG_UART0_BASE         0x18000300
#define CFG_UART1_BASE         0x18000400

#ifdef CFG_UART1
#define CFG_UART_BASE          CFG_UART1_BASE
#else
#define CFG_UART_BASE          CFG_UART0_BASE
#endif
#define CFG_BSPI_BASE          0x18027000