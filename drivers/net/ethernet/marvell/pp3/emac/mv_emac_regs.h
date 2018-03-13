/*******************************************************************************
Copyright (C) Marvell International Ltd. and its affiliates

This software file (the "File") is owned and distributed by Marvell
International Ltd. and/or its affiliates ("Marvell") under the following
alternative licensing terms.  Once you have made an election to distribute the
File under one of the following license alternatives, please (i) delete this
introductory statement regarding license alternatives, (ii) delete the two
license alternatives that you have not elected to use and (iii) preserve the
Marvell copyright notice above.


********************************************************************************
Marvell GPL License Option

If you received this File from Marvell, you may opt to use, redistribute and/or
modify this File in accordance with the terms and conditions of the General
Public License Version 2, June 1991 (the "GPL License"), a copy of which is
available along with the File in the license.txt file or by writing to the Free
Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 or
on the worldwide web at http://www.gnu.org/licenses/gpl.txt.

THE FILE IS DISTRIBUTED AS-IS, WITHOUT WARRANTY OF ANY KIND, AND THE IMPLIED
WARRANTIES OF MERCHANTABILITY OR FITNESS FOR A PARTICULAR PURPOSE ARE EXPRESSLY
DISCLAIMED.  The GPL License provides additional details about this warranty
disclaimer.
*******************************************************************************/

#ifndef __mv_emac_reg_h__
#define __mv_emac_reg_h__


/* Emac Control (emac_cr) */
#define MV_EMAC_CR_REG								(0x0000)
#define MV_EMAC_CR_ENQ_EN_OFFS							0
#define MV_EMAC_CR_ENQ_EN_MASK    \
		(0x00000001 << MV_EMAC_CR_ENQ_EN_OFFS)

#define MV_EMAC_CR_SLEEP_OFFS							1
#define MV_EMAC_CR_SLEEP_MASK    \
		(0x00000001 << MV_EMAC_CR_SLEEP_OFFS)

#define MV_EMAC_CR_LOOPBACK_EN_OFFS						2
#define MV_EMAC_CR_LOOPBACK_EN_MASK    \
		(0x00000001 << MV_EMAC_CR_LOOPBACK_EN_OFFS)

#define MV_EMAC_INT_MASK_REG							(0x0008)

/* Emac Status */
#define MV_EMAC_STATUS_REG							(0x000c)
#define MV_EMAC_STATUS_EMAC_IDLE_OFFS						0
#define MV_EMAC_STATUS_EMAC_IDLE_MASK    \
		(0x00000001 << MV_EMAC_STATUS_EMAC_IDLE_OFFS)

#define MV_EMAC_STATUS_ENQ_IDLE_OFFS						1
#define MV_EMAC_STATUS_ENQ_IDLE_MASK    \
		(0x00000001 << MV_EMAC_STATUS_ENQ_IDLE_OFFS)

#define MV_EMAC_STATUS_DEQ_IDLE_OFFS						2
#define MV_EMAC_STATUS_DEQ_IDLE_MASK    \
		(0x00000001 << MV_EMAC_STATUS_DEQ_IDLE_OFFS)

#define MV_EMAC_STATUS_XOFF_REASON_OFFS						3
#define MV_EMAC_STATUS_XOFF_REASON_MASK    \
		(0x00000007 << MV_EMAC_STATUS_XOFF_REASON_OFFS)

/* Emac Enq Control (EMAC_ENQ_CR) */
#define MV_EMAC_ENQ_CR_REG							(0x0010)
#define MV_EMAC_ENQ_CR_CFH_OFFSET_OFFS					0
#define MV_EMAC_ENQ_CR_CFH_OFFSET_MASK    \
		(0x0000000f << MV_EMAC_ENQ_CR_CFH_OFFSET_OFFS)

#define MV_EMAC_ENQ_CR_ADD_MH_OFFS					4
#define MV_EMAC_ENQ_CR_ADD_MH_MASK    \
		(0x00000001 << MV_EMAC_ENQ_CR_ADD_MH_OFFS)

#define MV_EMAC_ENQ_CR_TIMESTAMP_FROM_DESCRIPTOR_OFFS			5
#define MV_EMAC_ENQ_CR_TIMESTAMP_FROM_DESCRIPTOR_MASK    \
		(0x00000001 << MV_EMAC_ENQ_CR_TIMESTAMP_FROM_DESCRIPTOR_OFFS)


/* Emac Enq Cfh Mh (EMAC_ENQ_CFH_MH) */
#define MV_EMAC_ENQ_CFH_MH_REG							(0x0014)
#define MV_EMAC_ENQ_CFH_MH_EMAC_ENQ_CFH_MH_OFFS					0
#define MV_EMAC_ENQ_CFH_MH_EMAC_ENQ_CFH_MH_MASK    \
		(0x0000ffff << MV_EMAC_ENQ_CFH_MH_EMAC_ENQ_CFH_MH_OFFS)


/* Emac Enq Descriptor Word 0 (EMAC_ENQ_DESC_W0) */
#define MV_EMAC_ENQ_DESC_W0_REG							(0x0018)
#define MV_EMAC_ENQ_DESC_W0_EMAC_ENQ_DESC_W0_31_16_OFFS				0
#define MV_EMAC_ENQ_DESC_W0_EMAC_ENQ_DESC_W0_31_16_MASK    \
		(0x0000ffff << MV_EMAC_ENQ_DESC_W0_EMAC_ENQ_DESC_W0_31_16_OFFS)

#define MV_EMAC_ENQ_DESC_W0_LOCKID_OFFS						16
#define MV_EMAC_ENQ_DESC_W0_LOCKID_MASK			\
		(0x00000fff << MV_EMAC_ENQ_DESC_W0_LOCKID_OFFS)

#define MV_EMAC_ENQ_DESC_W0_REORDER_MODE_OFFS					28
#define MV_EMAC_ENQ_DESC_W0_REORDER_MODE_MASK			\
		(0x00000003 << MV_EMAC_ENQ_DESC_W0_REORDER_MODE_OFFS)

#define MV_EMAC_ENQ_DESC_W0_DEQ_MODE_OFFS					30
#define MV_EMAC_ENQ_DESC_W0_DEQ_MODE_MASK			\
		(0x00000003 << MV_EMAC_ENQ_DESC_W0_DEQ_MODE_OFFS)


/* Emac Enq Descriptor Word 1 (EMAC_ENQ_DESC_W1) */
#define MV_EMAC_ENQ_DESC_W1_REG							(0x001c)
#define MV_EMAC_ENQ_DESC_W1_EMAC_ENQ_DESC_W1_OFFS				0
#define MV_EMAC_ENQ_DESC_W1_FW_CFH_MODE_OFFS					24
#define MV_EMAC_ENQ_DESC_W1_FW_CFH_MODE_MASK			\
		(0x00000003 << MV_EMAC_ENQ_DESC_W1_FW_CFH_MODE_OFFS)
#define MV_EMAC_ENQ_DESC_W1_FW_LOGIC_PORT_OFFS					28
#define MV_EMAC_ENQ_DESC_W1_FW_LOGIC_PORT_MASK			\
		(0x0000000F << MV_EMAC_ENQ_DESC_W1_FW_LOGIC_PORT_OFFS)



/* Emac Axi Configuration (EMAC_AXI_CFG) */
#define MV_EMAC_AXI_CFG_REG							(0x0030)
#define MV_EMAC_AXI_CFG_AXI4_ENQ_QUEUE_NUM_OFFS					0
#define MV_EMAC_AXI_CFG_AXI4_ENQ_QUEUE_NUM_MASK    \
		(0x00000fff << MV_EMAC_AXI_CFG_AXI4_ENQ_QUEUE_NUM_OFFS)

#define MV_EMAC_AXI_CFG_AXI4_DEQ_PORT_NUM_OFFS					12
#define MV_EMAC_AXI_CFG_AXI4_DEQ_PORT_NUM_MASK    \
		(0x00000fff << MV_EMAC_AXI_CFG_AXI4_DEQ_PORT_NUM_OFFS)

/* Emac Enq Dropped Packets Counter (EMAC_ENQ_DRP_PKT_CNT) */
#define MV_EMAC_ENQ_DRP_PKT_CNT_REG						(0x00c0)
#define MV_EMAC_ENQ_DRP_PKT_CNT_ENQ_DRP_PKT_CNT_OFFS				0

/* Emac Enq Xoff Counter (EMAC_ENQ_XOFF_CNT) */
#define MV_EMAC_ENQ_XOFF_CNT_REG						(0x00c4)
#define MV_EMAC_ENQ_XOFF_CNT_ENQ_XOFF_CNT_OFFS					0

/* Emac Deq Control (EMAC_DEQ_CR) */
#define MV_EMAC_DEQ_CR_REG							(0x00d0)
#define MV_EMAC_DEQ_CR_STRM_DESC_SIZE_OFFS					0
#define MV_EMAC_DEQ_CR_STRM_DESC_SIZE_MASK    \
		(0x00000003 << MV_EMAC_DEQ_CR_STRM_DESC_SIZE_OFFS)

#define MV_EMAC_DEQ_CR_STRIP_MH_OFFS						2
#define MV_EMAC_DEQ_CR_STRIP_MH_MASK    \
		(0x00000001 << MV_EMAC_DEQ_CR_STRIP_MH_OFFS)

#define MV_EMAC_DEQ_CR_FIFO_UNDRN_PROT_TH_OFFS					3
#define MV_EMAC_DEQ_CR_FIFO_UNDRN_PROT_TH_MASK    \
		(0x000000ff << MV_EMAC_DEQ_CR_FIFO_UNDRN_PROT_TH_OFFS)

#define MV_EMAC_DEQ_CR_FIFO_UNDRN_PROT_TH_DEF					0x80

#define MV_EMAC_DEQ_CR_TX_SOP_DESC_PTP_ACTION_OFFS				12
#define MV_EMAC_DEQ_CR_TX_SOP_DESC_PTP_ACTION_MASK    \
		(0x0000000f << MV_EMAC_DEQ_CR_TX_SOP_DESC_PTP_ACTION_OFFS)

#define MV_EMAC_DEQ_CR_TX_SOP_DESC_INGRS_TIME_STMP_FROM_CFH_OFFS		16
#define MV_EMAC_DEQ_CR_TX_SOP_DESC_INGRS_TIME_STMP_FROM_CFH_MASK    \
		(0x00000001 << MV_EMAC_DEQ_CR_TX_SOP_DESC_INGRS_TIME_STMP_FROM_CFH_OFFS)


/* Emac Deq Minimum Packet Length (EMAC_MIN_PKT_LEN) */
#define MV_EMAC_MIN_PKT_LEN_REG							(0x00d4)
#define MV_EMAC_MIN_PKT_LEN_DEQ_OFFS						0
#define MV_EMAC_MIN_PKT_LEN_DEQ_MASK    \
		(0x0000007f << MV_EMAC_MIN_PKT_LEN_DEQ_OFFS)


/* Emac Deq Rtc Value From Descriptor (EMAC_DEQ_RTC_STRM_VAL) */
#define MV_EMAC_DEQ_RTC_STRM_VAL_REG						(0x00d8)
#define MV_EMAC_DEQ_RTC_STRM_VAL_DEQ_RTC_STRM_VAL_OFFS				0

/* Emac Deq Rtc Value From Port (EMAC_DEQ_RTC_PORT_VAL) */
#define MV_EMAC_DEQ_RTC_PORT_VAL_REG						(0x00dc)
#define MV_EMAC_DEQ_RTC_PORT_VAL_DEQ_RTC_PORT_VAL_OFFS				0

/* Emac Deq Egress Pipe Delay */
#define MV_EMAC_DEQ_EG_PIPE_DELAY_REG						(0x00e0)
#define MV_EMAC_DEQ_EG_PIPE_DELAY_EGRESS_PIPE_DELAY_OFFS			0
#define MV_EMAC_DEQ_EG_PIPE_DELAY_EGRESS_PIPE_DELAY_MASK    \
		(0x3fffffff << MV_EMAC_DEQ_EG_PIPE_DELAY_EGRESS_PIPE_DELAY_OFFS)

/* Debug State Machines Status (EMAC_DBG_SM_STATUS) */
#define MV_EMAC_DBG_SM_STATUS_REG						(0x0100)
#define MV_EMAC_DBG_SM_STATUS_ENQ_FC_STATE_OFFS					0
#define MV_EMAC_DBG_SM_STATUS_ENQ_FC_STATE_MASK    \
		(0x0000000f << MV_EMAC_DBG_SM_STATUS_ENQ_FC_STATE_OFFS)

#define MV_EMAC_DBG_SM_STATUS_ENQ_STATE_OFFS					4
#define MV_EMAC_DBG_SM_STATUS_ENQ_STATE_MASK    \
		(0x0000000f << MV_EMAC_DBG_SM_STATUS_ENQ_STATE_OFFS)

#define MV_EMAC_DBG_SM_STATUS_AXI4_W_STATE_OFFS					8
#define MV_EMAC_DBG_SM_STATUS_AXI4_W_STATE_MASK    \
		(0x0000000f << MV_EMAC_DBG_SM_STATUS_AXI4_W_STATE_OFFS)

#define MV_EMAC_DBG_SM_STATUS_AXI4_AW_STATE_OFFS				12
#define MV_EMAC_DBG_SM_STATUS_AXI4_AW_STATE_MASK    \
		(0x0000000f << MV_EMAC_DBG_SM_STATUS_AXI4_AW_STATE_OFFS)

#define MV_EMAC_DBG_SM_STATUS_DEQ_STATE_OFFS					16
#define MV_EMAC_DBG_SM_STATUS_DEQ_STATE_MASK    \
		(0x0000000f << MV_EMAC_DBG_SM_STATUS_DEQ_STATE_OFFS)

#define MV_EMAC_DBG_SM_STATUS_APB_ARB_STATE_OFFS				20
#define MV_EMAC_DBG_SM_STATUS_APB_ARB_STATE_MASK    \
		(0x0000000f << MV_EMAC_DBG_SM_STATUS_APB_ARB_STATE_OFFS)

#define MV_EMAC_DBG_SM_STATUS_APB2MG_STATE_OFFS					24
#define MV_EMAC_DBG_SM_STATUS_APB2MG_STATE_MASK    \
		(0x0000000f << MV_EMAC_DBG_SM_STATUS_APB2MG_STATE_OFFS)


/* Debug Fill Level Status 1 (EMAC_DBG_FIFO_FILL_LVL1) */
#define MV_EMAC_DBG_FIFO_FILL_LVL1_REG						(0x0104)
#define MV_EMAC_DBG_FIFO_FILL_LVL1_DBG_FIFO_FILL_LVL_ENQ_PFC_FIFO_OFFS		0
#define MV_EMAC_DBG_FIFO_FILL_LVL1_DBG_FIFO_FILL_LVL_ENQ_PFC_FIFO_MASK    \
		(0x000000ff << MV_EMAC_DBG_FIFO_FILL_LVL1_DBG_FIFO_FILL_LVL_ENQ_PFC_FIFO_OFFS)

#define MV_EMAC_DBG_FIFO_FILL_LVL1_DBG_FIFO_FILL_LVL_ENQ_CFH_FIFO_OFFS		8
#define MV_EMAC_DBG_FIFO_FILL_LVL1_DBG_FIFO_FILL_LVL_ENQ_CFH_FIFO_MASK    \
		(0x000000ff << MV_EMAC_DBG_FIFO_FILL_LVL1_DBG_FIFO_FILL_LVL_ENQ_CFH_FIFO_OFFS)

#define MV_EMAC_DBG_FIFO_FILL_LVL1_DBG_FIFO_FILL_LVL_ENQ_LEN_FIFO_OFFS		16
#define MV_EMAC_DBG_FIFO_FILL_LVL1_DBG_FIFO_FILL_LVL_ENQ_LEN_FIFO_MASK    \
		(0x000000ff << MV_EMAC_DBG_FIFO_FILL_LVL1_DBG_FIFO_FILL_LVL_ENQ_LEN_FIFO_OFFS)

#define MV_EMAC_DBG_FIFO_FILL_LVL1_DBG_FIFO_FILL_LVL_ENQ_EOP_FIFO_OFFS		24
#define MV_EMAC_DBG_FIFO_FILL_LVL1_DBG_FIFO_FILL_LVL_ENQ_EOP_FIFO_MASK    \
		(0x000000ff << MV_EMAC_DBG_FIFO_FILL_LVL1_DBG_FIFO_FILL_LVL_ENQ_EOP_FIFO_OFFS)


/* Debug Fill Level Status 2 (EMAC_DBG_FIFO_FILL_LVL2) */
#define MV_EMAC_DBG_FIFO_FILL_LVL2_REG						(0x0108)
#define MV_EMAC_DBG_FIFO_FILL_LVL2_DBG_FIFO_FILL_LVL_ENQ_CFH_FIFO_OFFS		0
#define MV_EMAC_DBG_FIFO_FILL_LVL2_DBG_FIFO_FILL_LVL_ENQ_CFH_FIFO_MASK    \
		(0x000000ff << MV_EMAC_DBG_FIFO_FILL_LVL2_DBG_FIFO_FILL_LVL_ENQ_CFH_FIFO_OFFS)

#define MV_EMAC_DBG_FIFO_FILL_LVL2_DBG_FIFO_FILL_LVL_DEQ_CFH_FIFO_OFFS		16
#define MV_EMAC_DBG_FIFO_FILL_LVL2_DBG_FIFO_FILL_LVL_DEQ_CFH_FIFO_MASK    \
		(0x000000ff << MV_EMAC_DBG_FIFO_FILL_LVL2_DBG_FIFO_FILL_LVL_DEQ_PKT_FIFO_OFFS)

#endif /* __mv_emac_reg_h__ */
