

### origin

https://forum.lvgl.io/t/add-new-font-code-example-needed/1473/2

https://docs.lvgl.io/master/overview/font.html

https://lvgl.io/tools/fontconverter


### steps


download ttf
    font size = Bold 700
    https://fonts.google.com/specimen/Montserrat
    
select font type
    folder = static
    make local copy to folder = worker/font  

convert ttf to c, XX = 16,24,32, use name with underscore

    https://lvgl.io/tools/fontconverter
    
    Name: Montserrat_Bold_XX
    Size: XX
    Bpp: 4
    File: Montserrat-Bold.ttf
    Range: 0x20-0x7F

    make local copy to folder = /micropython-lvgl/lib/lv_bindings/lvgl/src/font_user

### include in lv_conf_user.h

    #define LV_FONT_CUSTOM_DECLARE \
        LV_FONT_DECLARE(Montserrat_Bold_16) \
        LV_FONT_DECLARE(Montserrat_Bold_24) \
        LV_FONT_DECLARE(Montserrat_Bold_32) \

    note: since this is git submodule, change will not be committed with top level commit 
