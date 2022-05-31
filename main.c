#include <stdio.h>
#include"pico/stdlib.h"

int main() {
    stdio_init_all();
    gpio_init(5);
    gpio_set_dir(5,false);
    
    gpio_init(25);
    gpio_set_dir(25,true);  

    while (1) {
        char pin5 = gpio_get(5);
        char pin25 = gpio_get(25);
        if (pin5==true ) {
            if (pin25==false){
                 gpio_put(25,true);
                 sleep_ms(1000);
            }
            else {
                 gpio_put(25,false);
                 sleep_ms(1000);
            }            
        }   
    }

}