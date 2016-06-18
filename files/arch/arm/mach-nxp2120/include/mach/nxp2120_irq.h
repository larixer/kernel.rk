/*------------------------------------------------------------------------------
 *
 *	Copyright (C) 2005 Nexell Co., Ltd All Rights Reserved
 *	Nexell Co. Proprietary & Confidential
 *
 *	NEXELL INFORMS THAT THIS CODE AND INFORMATION IS PROVIDED "AS IS" BASE
 *  AND	WITHOUT WARRANTY OF ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING
 *  BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS
 *  FOR A PARTICULAR PURPOSE.
 *
 *	Module     : System memory config
 *	Description:
 *	Author     : Platform Team
 *	Export     :
 *	History    :
 *	   2010/09/28 first implementation
 ------------------------------------------------------------------------------*/
#ifndef __NXP2120_INTR_H__
#define __NXP2120_INTR_H__

//------------------------------------------------------------------------------
// Physical Interrupt Number 64 (0~63)
//------------------------------------------------------------------------------
#define	IRQ_PHY_DPC_P			0
// NA 2
#define	IRQ_PHY_VIP				2
#define	IRQ_PHY_DMA				3
#define	IRQ_PHY_TIMER0			4
#define	IRQ_PHY_CLKPWR			5
// NA 6
#define	IRQ_PHY_MPEGTSIF		7
// NA 8, 9
#define	IRQ_PHY_UART0		 	10
#define	IRQ_PHY_TIMER1		 	11
#define	IRQ_PHY_SSPSPI0	 		12
#define	IRQ_PHY_GPIO		 	13
#define	IRQ_PHY_SDHC0		 	14
#define	IRQ_PHY_TIMER2		 	15
#define	IRQ_PHY_H264		 	16
#define	IRQ_PHY_MPEG		 	17
// NA 18
#define	IRQ_PHY_VLC		 		19
#define	IRQ_PHY_UDC		 		20
#define	IRQ_PHY_TIMER3		 	21
#define	IRQ_PHY_DEINTERLACE 	22
#define	IRQ_PHY_PPM		 		23
#define	IRQ_PHY_AUDIO		 	24
#define	IRQ_PHY_ADC		 		25
#define	IRQ_PHY_MCUS		 	26
#define	IRQ_PHY_GRP3D		 	27
// NA 28
#define	IRQ_PHY_ROTATOR	 		29
#define	IRQ_PHY_SCALER		 	30
#define	IRQ_PHY_RTC		 		31
#define	IRQ_PHY_I2C0		 	32
#define	IRQ_PHY_I2C1		 	33
#define	IRQ_PHY_UART1		 	34
// NA 35
#define	IRQ_PHY_CSC		 		41
// NA 42
#define	IRQ_PHY_TIMER4		 	43
// NA 44, 44, 45, 46, 47, 48, 49
#define	IRQ_PHY_ALIVE		 	50
#define	IRQ_PHY_EHCI		 	51
#define	IRQ_PHY_OHCI		 	52
// NA 53
#define	IRQ_PHY_VIP1		 	54
#define	IRQ_PHY_SPDIF		 	55
// NA 56 ~ 63

#define IRQ_PHY_MAX_COUNT      	64

//------------------------------------------------------------------------------
// DMA Interrupt Number 16 (64~79)
//------------------------------------------------------------------------------
#define	IRQ_DMA_START			IRQ_PHY_MAX_COUNT
#define	IRQ_DMA_END				(IRQ_DMA_START + 16)

#define IRQ_DMA_CH0				(IRQ_DMA_START +  0)
#define IRQ_DMA_CH1				(IRQ_DMA_START +  1)
#define IRQ_DMA_CH2				(IRQ_DMA_START +  2)
#define IRQ_DMA_CH3				(IRQ_DMA_START +  3)
#define IRQ_DMA_CH4				(IRQ_DMA_START +  4)
#define IRQ_DMA_CH5				(IRQ_DMA_START +  5)
#define IRQ_DMA_CH6				(IRQ_DMA_START +  6)
#define IRQ_DMA_CH7				(IRQ_DMA_START +  7)
#define IRQ_DMA_CH8				(IRQ_DMA_START +  8)
#define IRQ_DMA_CH9				(IRQ_DMA_START +  9)
#define IRQ_DMA_CH10			(IRQ_DMA_START + 10)
#define IRQ_DMA_CH11			(IRQ_DMA_START + 11)
#define IRQ_DMA_CH12			(IRQ_DMA_START + 12)
#define IRQ_DMA_CH13			(IRQ_DMA_START + 13)
#define IRQ_DMA_CH14			(IRQ_DMA_START + 14)
#define IRQ_DMA_CH15			(IRQ_DMA_START + 15)

//------------------------------------------------------------------------------
// GPIO Interrupt Number 160 (80~239)
//------------------------------------------------------------------------------
#define IRQ_GPIO_START			IRQ_DMA_END
#define IRQ_GPIO_END			(IRQ_GPIO_START + 32 * 5)	// Group: A,B,C,D,E

#define IRQ_GPIO_A_START		(IRQ_GPIO_START + PAD_GPIO_A)
#define IRQ_GPIO_B_START		(IRQ_GPIO_START + PAD_GPIO_B)
#define IRQ_GPIO_C_START		(IRQ_GPIO_START + PAD_GPIO_C)
#define IRQ_GPIO_D_START		(IRQ_GPIO_START + PAD_GPIO_D)
#define IRQ_GPIO_E_START		(IRQ_GPIO_START + PAD_GPIO_E)

//------------------------------------------------------------------------------
// ALIVE Interrupt Number 8 (240~247)
//------------------------------------------------------------------------------
#define IRQ_ALIVE_START			IRQ_GPIO_END
#define IRQ_ALIVE_END			(IRQ_ALIVE_START + 8)

#define IRQ_ALIVE_0				(IRQ_ALIVE_START + 0)
#define IRQ_ALIVE_1				(IRQ_ALIVE_START + 1)
#define IRQ_ALIVE_2				(IRQ_ALIVE_START + 2)
#define IRQ_ALIVE_3				(IRQ_ALIVE_START + 3)
#define IRQ_ALIVE_4				(IRQ_ALIVE_START + 4)
#define IRQ_ALIVE_5				(IRQ_ALIVE_START + 5)
#define IRQ_ALIVE_6				(IRQ_ALIVE_START + 6)
#define IRQ_ALIVE_7				(IRQ_ALIVE_START + 7)

//------------------------------------------------------------------------------
// CLKPWR(SYSCTL: BATF/TOGGLE) Virtual Interrupt Number 2 (248~249)
//
// Note> ALIVE0~7 is supported at ALIVE interrupt
//------------------------------------------------------------------------------
#define IRQ_SYSCTL_START		IRQ_ALIVE_END
#define IRQ_SYSCTL_END			(IRQ_SYSCTL_START + 2)

#define IRQ_SYSCTL_PWRTOGGLE	(IRQ_SYSCTL_START + 0)
#define IRQ_SYSCTL_BATFAULT		(IRQ_SYSCTL_START + 1)

//------------------------------------------------------------------------------
// MAX(Physical+Virtual) Interrupt Number
//------------------------------------------------------------------------------
#define IRQ_TOTAL_MAX_COUNT  	256


#endif //__NXP2120_INTR_H__