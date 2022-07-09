#include <stdio.h>
#include "pico/stdlib.h"
int main (){
    char VC = 25;
    char UN = 1;

    stdio_init_all();
    gpio_init (VC);
    gpio_set_dir(VC,false);
    gpio_init (UN);
    gpio_set_dir(UN,true);

    while (1) 
    {
        char UNO = gpio_get(UN);
        char DOS = gpio_get(VC);
        if (UNO==true)
        {
            if (DOS == true)
            {
                gpio_put(DOS,false);
                sleep_ms(500);
            }
            if (DOS == false)
            {
                gpio_put(DOS,true);
                sleep_ms(500);
            }
        }

    }
}