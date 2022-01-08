# WiFi provisioning using SoftAP  

ESP32 [WiFi Provisioning docs](https://docs.espressif.com/projects/esp-idf/en/latest/esp32/api-reference/provisioning/wifi_provisioning.html#)

* Requires mbedTLS Curve ciphers - enable that using menuconfig (sdkconfig.defaults has it enabled already for this example)
* Setup device debug logging to see more

## Workflow

 1. Boot up
 2. Look for credentials - if found, go to STA mode and join the network - exit to app
 3. Otherwise start and go to SoftAP mode
 4. Wait for client to connect
 5. Once connected assign IP via DHCP
 6. Wait for credentials from client
 7. Save to NVS and goto step 2
 8. If no connection - clear NVS and goto step 3

## Python client

* `tools` folder contains the standard esp-idf 4.2 python `esp_prov` tool for wifi provisioning
* Create a new `virtualenv` and install requirements
* `python esp_prov.py --pop abcd12354 --transport softap --ssid <SSID> --passphrase <Passkey> --sec_ver 1 --service_name "192.168.4.1" --verbose`

To find out more about the AWS IoT EduKit program, visit [https://aws.amazon.com/iot/edukit](https://aws.amazon.com/iot/edukit).
