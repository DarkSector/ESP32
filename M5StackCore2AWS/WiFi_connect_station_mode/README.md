# WiFi Connect STA mode

Taken from [ESP32 example](https://github.com/espressif/esp-idf/tree/master/examples/wifi/getting_started/station)
Docs worth reading - [KConfig ESP32 docs](https://docs.espressif.com/projects/esp-idf/en/latest/esp32/api-reference/kconfig.html)
The actual wifi & ssid is under sdkdefaults which can be generated using `menuconfig`. It generates sdkconfig.h which is then further used directly within the source. Don't need to import skdconfig.h file

To find out more about the AWS IoT EduKit program, visit [https://aws.amazon.com/iot/edukit](https://aws.amazon.com/iot/edukit).
