/*
 * acs42200.h  --  ACS42200 Soc Audio driver
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef _ACS42200_H
#define _ACS42200_H

#define ACS42200_HPVOLL         0x00 
#define ACS42200_HPVOLR         0x01 
#define ACS42200_SPKVOLL        0x02 
#define ACS42200_SPKVOLR        0x03 
#define ACS42200_DACVOLL        0x04 
#define ACS42200_DACVOLR        0x05 
#define ACS42200_ADCVOLL        0x06 
#define ACS42200_ADCVOLR        0x07 
#define ACS42200_INVOLL         0x08 
#define ACS42200_INVOLR         0x09 
#define ACS42200_VUCTL          0x0A 
#define ACS42200_INMODE         0x0B 
#define ACS42200_INSELL         0x0C 
#define ACS42200_INSELR         0x0D 
#define ACS42200_ALC0           0x0E 
#define ACS42200_ALC1           0x0F 
#define ACS42200_ALC2           0x10 
#define ACS42200_ALC3           0x11 
#define ACS42200_NGATE          0x12 
#define ACS42200_AIC1           0x13 
#define ACS42200_AIC2           0x14 
#define ACS42200_AIC3           0x15 
#define ACS42200_CNVRTR0        0x16 
#define ACS42200_ADCSR          0x17 
#define ACS42200_CNVRTR1        0x18 
#define ACS42200_DACSR          0x19 
#define ACS42200_PWRM1          0x1A 
#define ACS42200_PWRM2          0x1B 
#define ACS42200_CTL            0x1C 
#define ACS42200_THERMTS        0x1D 
#define ACS42200_THERMSPKR1     0x1E 
#define ACS42200_CONFIG0        0x1F 
#define ACS42200_CONFIG1        0x20 
#define ACS42200_GAINCTL        0x21 
#define ACS42200_COP1           0x22 
#define ACS42200_COP2           0x23 
#define ACS42200_DMICCTL        0x24 
#define ACS42200_CLECTL         0x25 
#define ACS42200_MUGAIN         0x26 
#define ACS42200_COMPTH         0x27 
#define ACS42200_CMPRAT         0x28 
#define ACS42200_CATKTCL        0x29 
#define ACS42200_CATKTCH        0x2A 
#define ACS42200_CRELTCL        0x2B 
#define ACS42200_CRELTCH        0x2C 
#define ACS42200_LIMTH          0x2D 
#define ACS42200_LIMTGT         0x2E 
#define ACS42200_LATKTCL        0x2F 
#define ACS42200_LATKTCH        0x30 
#define ACS42200_LRELTCL        0x31 
#define ACS42200_LRELTCH        0x32 
#define ACS42200_EXPTH          0x33 
#define ACS42200_EXPRAT         0x34 
#define ACS42200_XATKTCL        0x35 
#define ACS42200_XATKTCH        0x36 
#define ACS42200_XRELTCL        0x37 
#define ACS42200_XRELTCH        0x38 
#define ACS42200_FXCTL          0x39 
#define ACS42200_DACCRWRL       0x3A 
#define ACS42200_DACCRWRM       0x3B 
#define ACS42200_DACCRWRH       0x3C 
#define ACS42200_DACCRRDL       0x3D 
#define ACS42200_DACCRRDM       0x3E 
#define ACS42200_DACCRRDH       0x3F 
#define ACS42200_DACCRADDR      0x40 
#define ACS42200_DCOFSEL        0x41 
#define ACS42200_DEVADR         0x7C 
#define ACS42200_DEVIDL         0x7D 
#define ACS42200_DEVIDH         0x7E 
#define ACS42200_REVID          0x7F 
#define ACS42200_RESET          0x80 
#define ACS42200_THERMSPKR2     0x88 



/* WM8960 register space */


#define WM8960_CACHEREGNUM 	56

#define WM8960_LINVOL		0x0
#define WM8960_RINVOL		0x1
#define WM8960_LOUT1		0x2
#define WM8960_ROUT1		0x3
#define WM8960_CLOCK1		0x4
#define WM8960_DACCTL1		0x5
#define WM8960_DACCTL2		0x6
#define WM8960_IFACE1		0x7
#define WM8960_CLOCK2		0x8
#define WM8960_IFACE2		0x9
#define WM8960_LDAC		0xa
#define WM8960_RDAC		0xb

#define WM8960_RESET		0xf
#define WM8960_3D		0x10
#define WM8960_ALC1		0x11
#define WM8960_ALC2		0x12
#define WM8960_ALC3		0x13
#define WM8960_NOISEG		0x14
#define WM8960_LADC		0x15
#define WM8960_RADC		0x16
#define WM8960_ADDCTL1		0x17
#define WM8960_ADDCTL2		0x18
#define WM8960_POWER1		0x19
#define WM8960_POWER2		0x1a
#define WM8960_ADDCTL3		0x1b
#define WM8960_APOP1		0x1c
#define WM8960_APOP2		0x1d

#define WM8960_LINPATH		0x20
#define WM8960_RINPATH		0x21
#define WM8960_LOUTMIX		0x22

#define WM8960_ROUTMIX		0x25
#define WM8960_MONOMIX1		0x26
#define WM8960_MONOMIX2		0x27
#define WM8960_LOUT2		0x28
#define WM8960_ROUT2		0x29
#define WM8960_MONO		0x2a
#define WM8960_INBMIX1		0x2b
#define WM8960_INBMIX2		0x2c
#define WM8960_BYPASS1		0x2d
#define WM8960_BYPASS2		0x2e
#define WM8960_POWER3		0x2f
#define WM8960_ADDCTL4		0x30
#define WM8960_CLASSD1		0x31

#define WM8960_CLASSD3		0x33
#define WM8960_PLL1		0x34
#define WM8960_PLL2		0x35
#define WM8960_PLL3		0x36
#define WM8960_PLL4		0x37


/*
 * WM8960 Clock dividers
 */
#define WM8960_SYSCLKDIV 		0
#define WM8960_DACDIV			1
#define WM8960_ADCDIV			2
#define WM8960_OPCLKDIV			3
#define WM8960_DCLKDIV			4
#define WM8960_TOCLKSEL			5
#define WM8960_SYSCLKSEL		6
#define WM8960_BCLKDIV  		7

#define WM8960_SYSCLK_DIV_1		(0 << 1)
#define WM8960_SYSCLK_DIV_2		(2 << 1)

#define WM8960_SYSCLK_MCLK		(0 << 0)
#define WM8960_SYSCLK_PLL		(1 << 0)

#define WM8960_DAC_DIV_1		(0 << 3)
#define WM8960_DAC_DIV_1_5		(1 << 3)
#define WM8960_DAC_DIV_2		(2 << 3)
#define WM8960_DAC_DIV_3		(3 << 3)
#define WM8960_DAC_DIV_4		(4 << 3)
#define WM8960_DAC_DIV_5_5		(5 << 3)
#define WM8960_DAC_DIV_6		(6 << 3)

#define WM8960_ADC_DIV_1		(0 << 6)
#define WM8960_ADC_DIV_1_5		(1 << 6)
#define WM8960_ADC_DIV_2		(2 << 6)
#define WM8960_ADC_DIV_3		(3 << 6)
#define WM8960_ADC_DIV_4		(4 << 6)
#define WM8960_ADC_DIV_5_5		(5 << 6)
#define WM8960_ADC_DIV_6		(6 << 6)

#define WM8960_DCLK_DIV_1_5		(0 << 6)
#define WM8960_DCLK_DIV_2		(1 << 6)
#define WM8960_DCLK_DIV_3		(2 << 6)
#define WM8960_DCLK_DIV_4		(3 << 6)
#define WM8960_DCLK_DIV_6		(4 << 6)
#define WM8960_DCLK_DIV_8		(5 << 6)
#define WM8960_DCLK_DIV_12		(6 << 6)
#define WM8960_DCLK_DIV_16		(7 << 6)

#define WM8960_TOCLK_F19		(0 << 1)
#define WM8960_TOCLK_F21		(1 << 1)

#define WM8960_OPCLK_DIV_1		(0 << 0)
#define WM8960_OPCLK_DIV_2		(1 << 0)
#define WM8960_OPCLK_DIV_3		(2 << 0)
#define WM8960_OPCLK_DIV_4		(3 << 0)
#define WM8960_OPCLK_DIV_5_5		(4 << 0)
#define WM8960_OPCLK_DIV_6		(5 << 0)

#define WM8960_BCLK_DIV_1		(0 << 0)
#define WM8960_BCLK_DIV_1_5		(1 << 0)
#define WM8960_BCLK_DIV_2		(2 << 0)
#define WM8960_BCLK_DIV_3		(3 << 0)
#define WM8960_BCLK_DIV_4	    (4 << 0)
#define WM8960_BCLK_DIV_5_5		(5 << 0)
#define WM8960_BCLK_DIV_6		(6 << 0)
#define WM8960_BCLK_DIV_8		(7 << 0)
#define WM8960_BCLK_DIV_11		(8 << 0)
#define WM8960_BCLK_DIV_12		(9 << 0)
#define WM8960_BCLK_DIV_16	    (10 << 0)
#define WM8960_BCLK_DIV_22		(11 << 0)
#define WM8960_BCLK_DIV_24		(12 << 0)
#define WM8960_BCLK_DIV_32		(13 << 0)

extern struct snd_soc_dai wm8960_dai;
extern struct snd_soc_codec_device soc_codec_dev_wm8960;

#define WM8960_DRES_400R 0
#define WM8960_DRES_200R 1
#define WM8960_DRES_600R 2
#define WM8960_DRES_150R 3
#define WM8960_DRES_MAX  3

struct wm8960_data {
	int dres;
};

#endif