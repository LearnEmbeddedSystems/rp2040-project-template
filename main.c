#include <stdio.h>
#include "pico/stdlib.h"
#include "header.h"

int main() {
    stdio_init_all();
    while (1) {
        print_hello_world();
        sleep_ms(1000);
    }
    return 0;
}