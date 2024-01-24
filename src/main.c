#include <stdbool.h>

#include "esp_log.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

#define APP "app"

void app_main() {
    while (true) {
        ESP_LOGI(APP, "Hello World.");
        vTaskDelay(pdMS_TO_TICKS(1000));
    }
}