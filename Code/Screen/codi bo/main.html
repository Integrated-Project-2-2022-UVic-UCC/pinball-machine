from time import sleep
from ili9341 import Display,color565
from xglcd_font import XglcdFont
from machine import Pin, SPI
import os
uart = machine.UART(0, 115200)

print('Loading fonts...')
print('Loading robotron')
robotron = XglcdFont('fonts/Robotron13x21.c', 13, 24)

spi = SPI(1, baudrate=10000000, sck=Pin(14), mosi=Pin(15))
display = Display(spi, dc=Pin(6), cs=Pin(17), rst=Pin(7),width=240, height=320, rotation=0)

display.draw_image('309_523466_1504709900_noticia_normal.raw', 0, 0, 240, 320)
b = None
msg = "0"
while True:
    sleep(1)
    if uart.any():
        b = uart.read()
        #print(type(b))
        #print(b)
        try:
            msg = b.decode('utf-8')
            #fprint(type(msg))
            print(msg)
        except:
            pass
        x=(100)
        y=(95)
        display.draw_text(x, y,msg,robotron,color565(0, 0, 0),background=color565(60, 255, 255))
        
sleep(10)

