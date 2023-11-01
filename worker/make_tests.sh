#!/usr/bin/env bash

#
#
#

trap 'exit' SIGTSTP

# proper python environment
source /home/work/source/git/creator-python/.pyenv/bin/activate

this_port="/dev/serial/by-id/usb-Silicon_Labs_CP2102_USB_to_UART_Bridge_Controller_0001-if00-port0"
this_port=$(readlink -f $this_port)

while true ; do
    echo "########## RUN_TEST ############"
    #
    rm -rf src/__pycache__
    rm -rf test/__pycache__
    #
    rshell --port $this_port --file make_tests.txt
done
