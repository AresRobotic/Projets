# THIS FILE IS AUTOMATICALLY GENERATED
# Project: C:\Users\Cedric\Google Drive\Mes Documents\PSoC Creator\Design01\cadeau_marraine_ensea_promo_2017.cydsn\cadeau_marraine_ensea_promo_2017.cyprj
# Date: Wed, 29 Oct 2014 00:11:07 GMT
#set_units -time ns
create_clock -name {Clock_1(FFB)} -period 83.333333333333329 -waveform {0 41.6666666666667} [list [get_pins {ClockBlock/ff_div_8}]]
create_clock -name {Clock_3(FFB)} -period 83.333333333333329 -waveform {0 41.6666666666667} [list [get_pins {ClockBlock/ff_div_9}]]
create_clock -name {Clock_4(FFB)} -period 100000 -waveform {0 50000} [list [get_pins {ClockBlock/ff_div_10}]]
create_clock -name {Clock_2(FFB)} -period 83.333333333333329 -waveform {0 41.6666666666667} [list [get_pins {ClockBlock/ff_div_11}]]
create_clock -name {CyHFCLK} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/hfclk}]]
create_generated_clock -name {Clock_1} -source [get_pins {ClockBlock/hfclk}] -edges {1 3 5} [list]
create_generated_clock -name {Clock_3} -source [get_pins {ClockBlock/hfclk}] -edges {1 3 5} [list]
create_generated_clock -name {Clock_4} -source [get_pins {ClockBlock/hfclk}] -edges {1 2401 4801} [list]
create_generated_clock -name {Clock_2} -source [get_pins {ClockBlock/hfclk}] -edges {1 3 5} [list]
create_clock -name {CyIMO} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/imo}]]
create_clock -name {CySYSCLK} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/sysclk}]]
create_clock -name {CyILO} -period 31250 -waveform {0 15625} [list [get_pins {ClockBlock/ilo}]]
create_clock -name {CyLFCLK} -period 31250 -waveform {0 15625} [list [get_pins {ClockBlock/lfclk}]]


# Component constraints for C:\Users\Cedric\Google Drive\Mes Documents\PSoC Creator\Design01\cadeau_marraine_ensea_promo_2017.cydsn\TopDesign\TopDesign.cysch
# Project: C:\Users\Cedric\Google Drive\Mes Documents\PSoC Creator\Design01\cadeau_marraine_ensea_promo_2017.cydsn\cadeau_marraine_ensea_promo_2017.cyprj
# Date: Wed, 29 Oct 2014 00:11:01 GMT
