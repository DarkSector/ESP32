# M5Stack Core 2 for AWS

## Prerequisites

* Install PlatformIO on VSCode
* On Apple M1 it requires the Darwin version of Xcode since cryptoauthlib doesn't support Apple silicon


## How to use

* Start by copying the starter project
* Rename project name in CMakeLists.txt and Makefile
* Make sure platformio.ini has an environment setup
* To upload `pio run --environment core2foraws --target upload`
* To Erase `pio run --environment core2foraws --target erase`
* To open the serial terminal `screen /dev/cu.SLAB_USBtoUART 115200` (Ctrl-a k y to quit)


## Projects

* Starter template
* Hello World & Blinking LED
* Hello World & Blinking LED using Free RTOS

