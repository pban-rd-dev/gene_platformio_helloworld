#include <stdbool.h>

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

#include "sample.h"

void app_main() {
    while (true) {
        say_greeting();
        vTaskDelay(pdMS_TO_TICKS(1000));
    }
}