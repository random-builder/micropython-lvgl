#!/usr/bin/env bash

#
# code change:
# 
# https://github.com/orgs/micropython/discussions/12027
# /home/work/source/git/micropython-lvgl/py/stackctrl.c
# #pragma GCC diagnostic ignored "-Wdangling-pointer=1"
#

source ./arkon.sh 

#export IDF_PATH=$espidf_dir 

source $espidf_dir/export.sh

# cnc_anolex uses: esp-32 wroom 38 pin black board
this_port="/dev/serial/by-id/usb-Silicon_Labs_CP2102_USB_to_UART_Bridge_Controller_0001-if00-port0"
this_port=$(readlink -f $this_port)

this_esp32="$base_dir/ports/esp32"
this_board="GENERIC"
this_build="build-$this_board"
this_image=$this_build/firmware.bin

#frozen_manifest="/home/work/source/git/creator-cnc-anolex/manifest.py"
#        FROZEN_MANIFEST="$frozen_manifest" \

invoke_build() {

    make -C mpy-cross
    
    make -C ports/esp32 \
        LV_CFLAGS="-DLV_COLOR_DEPTH=16" \
        BOARD=$this_board \
    
}


install_firmware() {

    cd $this_esp32

    echo "### flash file"
    ls -las $this_image
    
    echo "### flash erase"
    esptool.py --chip esp32 --port $this_port erase_flash
    
    echo "### flash write"
    esptool.py --chip esp32 --port $this_port --baud 460800 write_flash -z 0x1000 $this_image
   
}

invoke_build
install_firmware
