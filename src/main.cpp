#include "mbed.h"
#include "mbed_mem_trace.h"

extern "C" {
#include "mruby.h"
int mirb_main(void);
}


int main(void) {
    mbed_mem_trace_set_callback(mbed_mem_trace_default_callback);
    mirb_main();
}

