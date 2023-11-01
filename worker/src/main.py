#
#
#

#
# https://github.com/lvgl/lv_binding_micropython/blob/master/driver/esp32/ili9XXX.py#L106
#

import gc


def report_memory():
    gc.collect()
    mem_free = gc.mem_free()
    print(f"### {mem_free=}")


report_memory()

import micropython
import lvgl as lv
import espidf as esp
import ili9XXX
from micropython import const

print("HELLO KITTY")

# using cnc anolex pins
SPI_1_ID = const(1)
SPI_1_SCL = const(14)  # h/w default
SPI_1_MOSI = const(13)  # h/w default
SPI_1_MISO = const(12)  # h/w default

DISP_CHIP_RST = const(0)  # display
DISP_CHIP_SEL = const(2)  # display
DISP_DATA_CMD = const(15)  # display

POWER_XXX = const(22)
LIGHT_XXX = const(23)

report_memory()

lv.init()

report_memory()

disp = ili9XXX.ili9341(

    spihost=SPI_1_ID,
    miso=SPI_1_MISO, mosi=SPI_1_MOSI, clk=SPI_1_SCL,

    # spihost=esp.HSPI_HOST,
    # miso=-1, mosi=-1, clk=-1,

    dc=DISP_DATA_CMD, cs=DISP_CHIP_SEL, rst=DISP_CHIP_RST,
    power=POWER_XXX, backlight=LIGHT_XXX,

    factor=4,
    hybrid=True,
    half_duplex=True,
    double_buffer=True,

    mhz=40,

    # width=240, height=320,

    rot=ili9XXX.REVERSE_PORTRAIT,
)

report_memory()

screen = lv.scr_act()  # lv.obj()
screen.set_style_bg_color(lv.color_hex(0x003a57), lv.PART.MAIN)
button = lv.btn(screen)
button.align_to(lv.scr_act(), lv.ALIGN.CENTER, 0, 0)
label = lv.label(button)
label.set_text("hello kitty")
label.align(lv.ALIGN.CENTER, 0, 0)
# lv.scr_load(screen)

# scr = lv.scr_act()
# scr.set_style_bg_color(lv.color_hex(0x003a57), lv.PART.MAIN)
# label = lv.label(lv.scr_act())
# label.set_text("Hello world")
# label.set_style_text_color(lv.color_hex(0xffffff), lv.PART.MAIN)
# label.align(lv.ALIGN.CENTER, 0, 0)

micropython.mem_info()  # @UndefinedVariable
