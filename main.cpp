#include "mbed.h"

extern "C" {
#include "mruby.h"
int mirb_main(int argc, char **argv);
}


int main(int argc, char **argv) {
    mirb_main(argc, argv);
}

