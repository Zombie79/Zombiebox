#ifndef __TXL_GATE_DTBINDING_H
#define __TXL_GATE_DTBINDING_H
/*0x50*/
#define GCLK_IDX_DDR         0
#define GCLK_IDX_DOS         1
#define GCLK_IDX_RESERVED0         2
#define GCLK_IDX_RESERVED1         3
#define GCLK_IDX_AHB_BRIDGE_ABD         4
#define GCLK_IDX_ISA         5
#define GCLK_IDX_PL310_CBUS         6
#define GCLK_IDX__1200XXX       7
#define GCLK_IDX_SPICC         8
#define GCLK_IDX_I2C         9
#define GCLK_IDX_SAR_ADC         10
#define GCLK_IDX_SMART_CARD_MPEG_DOMAIN         11
#define GCLK_IDX_RANDOM_NUM_GEN         12
#define GCLK_IDX_UART0         13
#define GCLK_IDX_SDHC_ABD         14
#define GCLK_IDX_STREAM         15
#define GCLK_IDX_ASYNC_FIFO         16
#define GCLK_IDX_SDIO_ABD         17
#define GCLK_IDX_AUD_BUF_ABD         18
#define GCLK_IDX_HIU_PARSER         19
#define GCLK_IDX_RESERVED2         20
#define GCLK_IDX_HDMI_RX_ABD         21
#define GCLK_IDX_RESERVED3         22
#define GCLK_IDX_ASSIST_MISC         23
#define GCLK_IDX_EMMCA         24
#define GCLK_IDX_EMMCB         25
#define GCLK_IDX_EMMCC         26
#define GCLK_IDX_DMA         27
#define GCLK_IDX_ACODEC         28
#define GCLK_IDX_RESERVED9         29
#define GCLK_IDX_SPI         30
/*0x51*/
#define GCLK_IDX_RESERVED11         32
#define GCLK_IDX_RESERVED12         33
#define GCLK_IDX_AUD_IN         34
#define GCLK_IDX_ETHERNET         35
#define GCLK_IDX_DEMUX        36
#define GCLK_IDX_RESERVED13         37
#define GCLK_IDX_AIU_AI_TOP_GLUE         38
#define GCLK_IDX_AIU_IEC958         39
#define GCLK_IDX_AIU_I2S_OUT         40
#define GCLK_IDX_AIU_AMCLK_MEASURE         41
#define GCLK_IDX_AIU_AIFIFO2         42
#define GCLK_IDX_AIU_AUD_MIXER         43
#define GCLK_IDX_AIU_MIXER_REG         44
#define GCLK_IDX_AIU_ADC         45
#define GCLK_IDX_BLK_MOV         46
#define GCLK_IDX_AIU_TOP_LEVEL         47
#define GCLK_IDX_UART1         48
#define GCLK_IDX_RESERVED14         49
#define GCLK_IDX_CSI_DIG_CLKIN_ABD         50
#define GCLK_IDX_RESERVED15         51
#define GCLK_IDX_GE2D         52
#define GCLK_IDX_USB0         53
#define GCLK_IDX_USB1         54
#define GCLK_IDX_RESET         55
#define GCLK_IDX_NAND_ABD         56
#define GCLK_IDX_HIU_PARSER_TOP         57
#define GCLK_IDX_USB_GENERAL         58
#define GCLK_IDX_RESERVED16         59
#define GCLK_IDX_RESERVED17         60
#define GCLK_IDX_AHB_ARB0         61
#define GCLK_IDX_EFUSE         62
#define GCLK_IDX_ROM_CLK         63

/*******0x52********/
#define GCLK_IDX_RESERVED18         64
#define GCLK_IDX_AHB_DATA_BUS         65
#define GCLK_IDX_AHB_CONTROL_BUS         66
#define GCLK_IDX_HDMI_INTR_SYNC         67
#define GCLK_IDX_HDMI_PCLK         68
#define GCLK_IDX_PDM        69
#define GCLK_IDX_BT656         70
#define GCLK_IDX_BT656_2         71
#define GCLK_IDX_MISC_USB1_TO_DDR         72
#define GCLK_IDX_MISC_USB0_TO_DDR         73
#define GCLK_IDX_AIU_PCLK        74
#define GCLK_IDX_MMC_PCLK         75
#define GCLK_IDX_MISC_DVIN         76
#define GCLK_IDX_RESERVED22         77
#define GCLK_IDX_RESERVED23         78
#define GCLK_IDX_UART2         79
#define GCLK_IDX_RESERVED24         80
#define GCLK_IDX_RESERVED25         81
#define GCLK_IDX_RESERVED26         82
#define GCLK_IDX_RESERVED27         83
#define GCLK_IDX_RESERVED28         84
#define GCLK_IDX_UART3         85
#define GCLK_IDX_SARADC        86
#define GCLK_IDX_RESERVED30        87
#define GCLK_IDX_RESERVED31        88
#define GCLK_IDX_VPU_INTR        89
#define GCLK_IDX_SECURE_AHP_APB3        90
#define GCLK_IDX_RESERVED32        91
#define GCLK_IDX_RESERVED33        92
#define GCLK_IDX_CLK81_TO_A9_ABD        93
#define GCLK_IDX_GIC        94
#define GCLK_IDX_RESERVED35        95
/*0x1053 all reserved*/
/*****54***********/
#define GCLK_IDX_RESERVED36        (96+32)
#define GCLK_IDX_VCLK2_VENCI         (97+32)
#define GCLK_IDX_VCLK2_VENCI1         (98+32)
#define GCLK_IDX_VCLK2_VENCP         (99+32)
#define GCLK_IDX_VCLK2_VENCP1         (100+32)
#define GCLK_IDX_VCLK2_VENCT         (101+32)
#define GCLK_IDX_VCLK2_VENCT1         (102+32)
#define GCLK_IDX_VCLK2_OTHER         (103+32)
#define GCLK_IDX_VCLK2_ENCI         (104+32)
#define GCLK_IDX_VCLK2_ENCP         (105+32)
#define GCLK_IDX_DAC_CLK         (106+32)
#define GCLK_IDX_RESERVED37        (107+32)
#define GCLK_IDX_RESERVED38        (108+32)
#define GCLK_IDX_RESERVED39        (109+32)
#define GCLK_IDX_AIU_AOCLK         (110+32)
#define GCLK_IDX_RESERVED40         (111+32)
#define GCLK_IDX_AIU_ICE958_AMCLK         (112+32)
#define GCLK_IDX_RESERVED41         (113+32)
#define GCLK_IDX_RESERVED42         (114+32)
#define GCLK_IDX_RESERVED43         (115+32)
#define GCLK_IDX_ENC480P         (116+32)
#define GCLK_IDX_RANDOM_NUM_GEN1         (117+32)
#define GCLK_IDX_VCLK2_ENCT         (118+32)
#define GCLK_IDX_VCLK2_ENCL         (119+32)
#define GCLK_IDX_MMC_CLK         (120+32)
#define GCLK_IDX_VCLK2_VENCL         (121+32)
#define GCLK_IDX_VCLK2_OTHER1         (122+32)
#define GCLK_IDX_RESERVED44         (123+32)
#define GCLK_IDX_RESERVED45         (124+32)
#define GCLK_IDX_RESERVED46         (125+32)
#define GCLK_IDX_RESERVED47         (126+32)
#define GCLK_IDX_EDP_CLK_ABD         (127+32)

/*************0x1055***************/
#define GCLK_IDX_AO_CPU         (128+32)
#define GCLK_IDX_AHB_SRAM         (129+32)
#define GCLK_IDX_AHB_BUS         (130+32)
#define GCLK_IDX_AO_REGS         (131+32)
#define GCLK_IDX_AO_I2C         (132+32)

#endif
