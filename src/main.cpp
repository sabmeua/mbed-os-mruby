#include "mbed.h"

extern "C" {
#include "mruby.h"
int mirb_main(void);
}


int main(void) {
    mirb_main();
}

