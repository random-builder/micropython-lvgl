

### origin

https://forum.lvgl.io/t/add-new-font-code-example-needed/1473/2

https://docs.lvgl.io/master/overview/font.html

https://lvgl.io/tools/fontconverter


### steps 1


download ttf
    https://fonts.google.com/specimen/Montserrat
    font size = Bold 700
    
select font type
    folder = static
    make local copy to folder = worker/font  

convert ttf to c, XX = 16,24,32, 
    use name:
        * in lower case
        * with underscore
        * with lv_font prefix

    https://lvgl.io/tools/fontconverter
    
    Name: lv_font_montserrat_bold_XX
    Size: XX
    Bpp: 4
    File: Montserrat-Bold.ttf
    Range: 0x20-0x7F

    make local copy to folder = /micropython-lvgl/lib/lv_bindings/lvgl/src/font_user

### include in lv_conf_user.h

#define LV_FONT_CUSTOM_DECLARE \
    LV_FONT_DECLARE(lv_font_montserrat_bold_16) \
    LV_FONT_DECLARE(lv_font_montserrat_bold_24) \
    LV_FONT_DECLARE(lv_font_montserrat_bold_32) \

    note: since this is git submodule, change will not be committed with top level commit 

### steps 2


download ttf
    https://fonts.google.com/specimen/Space+Mono
    font size = Regualr 400
    
select font type
    make local copy to folder = worker/font

convert ttf to c, XX = 16,24,32, 
    use name:
        * in lower case
        * with underscore
        * with lv_font prefix

    https://lvgl.io/tools/fontconverter
    
    Name: lv_font_spacemono_XX
    Size: XX
    Bpp: 4
    File: Montserrat-Bold.ttf
    Range: 0x20-0x7F

    make local copy to folder = /micropython-lvgl/lib/lv_bindings/lvgl/src/font_user

### include in lv_conf_user.h

#define LV_FONT_CUSTOM_DECLARE \
    LV_FONT_DECLARE(lv_font_montserrat_bold_16) \
    LV_FONT_DECLARE(lv_font_montserrat_bold_24) \
    LV_FONT_DECLARE(lv_font_montserrat_bold_32) \
    LV_FONT_DECLARE(lv_font_spacemono_16) \
    LV_FONT_DECLARE(lv_font_spacemono_24) \
    LV_FONT_DECLARE(lv_font_spacemono_32) \

    note: since this is git submodule, change will not be committed with top level commit 
    