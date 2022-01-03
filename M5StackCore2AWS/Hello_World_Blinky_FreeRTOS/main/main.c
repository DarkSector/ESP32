#include <stdio.h>
#include "core2forAWS.h"
#include <freertos/FreeRTOS.h>
#include <freertos/task.h>

void vHelloWorldTask(void *pvParameters)
{

    while (1)
    {
        printf("Hello World\n");
        vTaskDelay(1000 / portTICK_RATE_MS);
    }
}

void vBlinkyTask(void *pvParameters)
{
    Core2ForAWS_Init();
    Core2ForAWS_Sk6812_Clear();
    while (1)
    {
        Core2ForAWS_Sk6812_SetSideColor(SK6812_SIDE_LEFT, 0x00ff00);
        Core2ForAWS_Sk6812_SetSideColor(SK6812_SIDE_RIGHT, 0xffff00);
        Core2ForAWS_Sk6812_Show();
        vTaskDelay(1000 / portTICK_PERIOD_MS);

        Core2ForAWS_Sk6812_SetSideColor(SK6812_SIDE_LEFT, 0xff00ff);
        Core2ForAWS_Sk6812_SetSideColor(SK6812_SIDE_RIGHT, 0xff0000);
        Core2ForAWS_Sk6812_Show();
        vTaskDelay(1000 / portTICK_PERIOD_MS);
    }
}

void app_main()
{

    xTaskCreate(&vHelloWorldTask, "hello_world_task", 2048, NULL, 2, NULL);
    xTaskCreate(&vBlinkyTask, "blinky_task", 2048 * 2, NULL, 3, NULL);
}