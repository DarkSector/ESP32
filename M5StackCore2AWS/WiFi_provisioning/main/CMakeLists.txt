set(COMPONENT_SRCS "main.c")
# set(COMPONENT_ADD_INCLUDEDIRS "./includes")
set(COMPONENT_REQUIRES "nvs_flash" "esp-aws-iot" "wifi_provisioning" "esp-cryptoauthlib" "core2forAWS")
register_component()

#target_add_binary_data(${COMPONENT_TARGET} "certs/aws-root-ca.pem" TEXT)
