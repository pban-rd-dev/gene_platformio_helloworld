#include "esp_log.h"

#include "sample.h"

#define TAG "sample"

int say_greeting(void)
{
    ESP_LOGI(TAG, "Hello World.");
    return 0;
}