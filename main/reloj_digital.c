#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"
#include "lcd_com.h"
#include "lcd_lib.h"

// Pines específicos para tu LCD (actualiza según tu hardware)
#define GPIO_RD -1  // No conectado
#define GPIO_WR 4   // Pin de escritura
#define GPIO_RS 5   // Pin de datos/comando
#define GPIO_CS -1  // No conectado
#define GPIO_D0 14  // Pin de datos D0
#define GPIO_D1 13  // Pin de datos D1
#define GPIO_D2 12  // Pin de datos D2
#define GPIO_D3 27  // Pin de datos D3
#define GPIO_D4 26  // Pin de datos D4
#define GPIO_D5 25  // Pin de datos D5
#define GPIO_D6 33  // Pin de datos D6
#define GPIO_D7 32  // Pin de datos D7

void app_main() {
    // Configura el dispositivo TFT
    TFT_t dev;
    dev._width = 176;  // Ancho de tu LCD
    dev._height = 220; // Alto de tu LCD
    dev._offsetx = 0;  // Desplazamiento X
    dev._offsety = 0;  // Desplazamiento Y
    dev._rd = GPIO_RD;
    dev._wr = GPIO_WR;
    dev._rs = GPIO_RS;
    dev._cs = GPIO_CS;
    dev._d0 = GPIO_D0;
    dev._d1 = GPIO_D1;
    dev._d2 = GPIO_D2;
    dev._d3 = GPIO_D3;
    dev._d4 = GPIO_D4;
    dev._d5 = GPIO_D5;
    dev._d6 = GPIO_D6;
    dev._d7 = GPIO_D7;

    // Inicializa el dispositivo LCD
    lcdInitDevice(&dev, 240, 320, 0, 0);

    // Llena la pantalla de color negro
    lcdFillScreen(&dev, BLACK);

    // Cambia la dirección de la fuente (opcional)
    lcdSetFontDirection(&dev, 0);

    // Escribe "Hola Mundo" en la pantalla
    FontxFile fx[2];
    InitFontx(fx, "/spiffs/ILGH16XB.FNT", "");  // Configura tu fuente

    lcdDrawString(&dev, fx, 10, 50, (uint8_t *)"Hola Mundo", WHITE);

    while (1) {
        vTaskDelay(1000 / portTICK_PERIOD_MS);
    }
}
