#!/usr/bin/env bash

source ./arkon.sh 

#
# reproduce /micropython/tools/ci.sh
#

function setup_module_lvgl {
    git submodule update --init --recursive lib/lv_bindings
}


function ci_esp32_idf402_setup {
    ci_esp32_setup_helper v4.0.2
}

function ci_esp32_idf44_setup {
    ci_esp32_setup_helper v4.4
}

function ci_esp32_setup_helper {
    ### pip3 install pyelftools
    git clone https://github.com/espressif/esp-idf.git
    git -C esp-idf checkout $1
    git -C esp-idf submodule update --init \
        components/bt/host/nimble/nimble \
        components/esp_wifi \
        components/esptool_py/esptool \
        components/lwip/lwip \
        components/mbedtls/mbedtls
    if [ -d esp-idf/components/bt/controller/esp32 ]; then
        git -C esp-idf submodule update --init \
            components/bt/controller/lib_esp32 \
            components/bt/controller/lib_esp32c3_family
    else
        git -C esp-idf submodule update --init \
            components/bt/controller/lib
    fi
    ./esp-idf/install.sh
}

#
#
#

setup_module_lvgl

ci_esp32_idf402_setup
#ci_esp32_idf44_setup
