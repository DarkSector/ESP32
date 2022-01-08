# WiFi provisioning using SoftAP  

ESP32 [WiFi Provisioning docs](https://docs.espressif.com/projects/esp-idf/en/latest/esp32/api-reference/provisioning/wifi_provisioning.html#)

* Requires mbedTLS Curve ciphers - enable that for sure using menuconfig

## Workflow

 1. Boot up
 2. Look for credentials - if found, go to STA mode and join the network - exit to app
 3. Otherwise start and go to SoftAP mode
 4. Wait for client to connect
 5. Once connected assign IP via DHCP
 6. Wait for credentials from client
 7. Save to NVS and goto step 2
 8. If no connection - clear NVS and goto step 3

To find out more about the AWS IoT EduKit program, visit [https://aws.amazon.com/iot/edukit](https://aws.amazon.com/iot/edukit).
