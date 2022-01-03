#include <stdio.h>
#include "core2forAWS.h"
#include <freertos/FreeRTOS.h>
#include <freertos/task.h>

void app_main()
{
    Core2ForAWS_Init();
    while (1)
    {
        printf("Hello World\n");
        Core2ForAWS_Sk6812_Clear();
        Core2ForAWS_Sk6812_SetSideColor(SK6812_SIDE_LEFT, 0x000000);
        Core2ForAWS_Sk6812_SetSideColor(SK6812_SIDE_RIGHT, 0xffffff);
        Core2ForAWS_Sk6812_Show();
        vTaskDelay(1000 / portTICK_PERIOD_MS);
        Core2ForAWS_Sk6812_SetSideColor(SK6812_SIDE_LEFT, 0xffffff);
        Core2ForAWS_Sk6812_SetSideColor(SK6812_SIDE_RIGHT, 0x000000);
        Core2ForAWS_Sk6812_Show();
        vTaskDelay(1000 / portTICK_PERIOD_MS);
    }
}