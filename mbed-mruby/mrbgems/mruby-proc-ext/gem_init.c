/*
 * This file is loading the irep
 * Ruby GEM code.
 *
 * IMPORTANT:
 *   This file was generated!
 *   All manual changes will get lost.
 */
#include <stdlib.h>
#include <mruby.h>
#include <mruby/irep.h>
/* dumped in little endian order.
   use `mrbc -E` option for big endian CPU. */
#include <stdint.h>
extern const uint8_t gem_mrblib_irep_mruby_proc_ext[];
const uint8_t
#if defined __GNUC__
__attribute__((aligned(4)))
#elif defined _MSC_VER
__declspec(align(4))
#endif
gem_mrblib_irep_mruby_proc_ext[] = {
0x45,0x54,0x49,0x52,0x30,0x30,0x30,0x35,0x6e,0xab,0x00,0x00,0x03,0xf4,0x4d,0x41,
0x54,0x5a,0x30,0x30,0x30,0x30,0x49,0x52,0x45,0x50,0x00,0x00,0x03,0x2b,0x30,0x30,
0x30,0x32,0x00,0x00,0x00,0x55,0x00,0x01,0x00,0x03,0x00,0x01,0x00,0x00,0x00,0x0d,
0x0f,0x01,0x0f,0x02,0x5a,0x01,0x00,0x5c,0x01,0x00,0x37,0x01,0x67,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x01,0x00,0x04,0x50,0x72,0x6f,0x63,0x00,0x00,0x00,0x00,0xce,
0x00,0x01,0x00,0x03,0x00,0x04,0x00,0x00,0x00,0x25,0x00,0x00,0x61,0x01,0x56,0x02,
0x00,0x5d,0x01,0x00,0x61,0x01,0x56,0x02,0x01,0x5d,0x01,0x01,0x61,0x01,0x56,0x02,
0x02,0x5d,0x01,0x02,0x61,0x01,0x56,0x02,0x03,0x5d,0x01,0x03,0x0e,0x01,0x03,0x37,
0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x00,0x03,0x3d,0x3d,0x3d,0x00,0x00,
0x05,0x79,0x69,0x65,0x6c,0x64,0x00,0x00,0x07,0x74,0x6f,0x5f,0x70,0x72,0x6f,0x63,
0x00,0x00,0x05,0x63,0x75,0x72,0x72,0x79,0x00,0x00,0x00,0x00,0x6d,0x00,0x03,0x00,
0x06,0x00,0x00,0x00,0x00,0x00,0x13,0x00,0x33,0x00,0x10,0x00,0x10,0x03,0x46,0x04,
0x00,0x01,0x05,0x01,0x48,0x04,0x2c,0x03,0x00,0x37,0x03,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x01,0x00,0x04,0x63,0x61,0x6c,0x6c,0x00,0x00,0x00,0x00,0x6d,0x00,0x03,
0x00,0x06,0x00,0x00,0x00,0x00,0x00,0x13,0x33,0x00,0x10,0x00,0x10,0x03,0x46,0x04,
0x00,0x01,0x05,0x01,0x48,0x04,0x2c,0x03,0x00,0x37,0x03,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x01,0x00,0x04,0x63,0x61,0x6c,0x6c,0x00,0x00,0x00,0x00,0x3a,0x00,0x02,
0x00,0x03,0x00,0x00,0x00,0x00,0x00,0x08,0x33,0x00,0x00,0x00,0x10,0x02,0x37,0x02,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x53,0x00,0x08,0x00,0x0e,
0x00,0x02,0x00,0x00,0x00,0xb1,0x00,0x00,0x33,0x00,0x20,0x00,0x21,0x00,0x0a,0x21,
0x00,0x13,0x10,0x08,0x2e,0x08,0x00,0x00,0x01,0x01,0x08,0x0e,0x03,0x01,0x10,0x08,
0x55,0x09,0x00,0x2f,0x08,0x02,0x00,0x01,0x04,0x08,0x01,0x09,0x01,0x2e,0x08,0x03,
0x01,0x01,0x01,0x08,0x10,0x08,0x2e,0x08,0x04,0x00,0x23,0x08,0x00,0x9d,0x0e,0x03,
0x02,0x10,0x08,0x2e,0x08,0x00,0x00,0x01,0x05,0x08,0x06,0x09,0x45,0x08,0x23,0x08,
0x00,0x54,0x01,0x08,0x01,0x01,0x09,0x05,0x2e,0x08,0x05,0x01,0x22,0x08,0x00,0x72,
0x01,0x08,0x05,0x06,0x09,0x42,0x08,0x23,0x08,0x00,0x72,0x01,0x08,0x04,0x01,0x09,
0x05,0x2e,0x08,0x03,0x01,0x01,0x09,0x01,0x44,0x08,0x23,0x08,0x00,0x9d,0x10,0x08,
0x1b,0x09,0x06,0x4f,0x0a,0x00,0x01,0x0b,0x01,0x50,0x0a,0x4f,0x0b,0x01,0x50,0x0a,
0x01,0x0b,0x04,0x01,0x0c,0x05,0x2e,0x0b,0x03,0x01,0x50,0x0a,0x4f,0x0b,0x02,0x50,
0x0a,0x2e,0x08,0x07,0x02,0x10,0x06,0x10,0x08,0x55,0x09,0x01,0x2f,0x08,0x01,0x00,
0x01,0x07,0x08,0x2e,0x08,0x08,0x00,0x37,0x08,0x00,0x00,0x00,0x03,0x00,0x00,0x1b,
0x77,0x72,0x6f,0x6e,0x67,0x20,0x6e,0x75,0x6d,0x62,0x65,0x72,0x20,0x6f,0x66,0x20,
0x61,0x72,0x67,0x75,0x6d,0x65,0x6e,0x74,0x73,0x20,0x28,0x00,0x00,0x05,0x20,0x66,
0x6f,0x72,0x20,0x00,0x00,0x01,0x29,0x00,0x00,0x00,0x09,0x00,0x05,0x61,0x72,0x69,
0x74,0x79,0x00,0x00,0x04,0x70,0x72,0x6f,0x63,0x00,0x00,0x06,0x6c,0x61,0x6d,0x62,
0x64,0x61,0x00,0x00,0x02,0x5b,0x5d,0x00,0x00,0x07,0x6c,0x61,0x6d,0x62,0x64,0x61,
0x3f,0x00,0x00,0x02,0x21,0x3d,0x00,0x00,0x0d,0x41,0x72,0x67,0x75,0x6d,0x65,0x6e,
0x74,0x45,0x72,0x72,0x6f,0x72,0x00,0x00,0x05,0x72,0x61,0x69,0x73,0x65,0x00,0x00,
0x04,0x63,0x61,0x6c,0x6c,0x00,0x00,0x00,0x00,0xa3,0x00,0x03,0x00,0x06,0x00,0x00,
0x00,0x00,0x00,0x21,0x33,0x04,0x00,0x00,0x01,0x03,0x01,0x06,0x04,0x42,0x03,0x23,
0x03,0x00,0x1c,0x01,0x03,0x01,0x2e,0x03,0x00,0x00,0x3e,0x03,0x01,0x21,0x00,0x1f,
0x01,0x03,0x01,0x37,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x02,0x2d,
0x40,0x00,0x00,0x00,0x00,0xa1,0x00,0x03,0x00,0x06,0x00,0x01,0x00,0x00,0x00,0x1f,
0x33,0x00,0x20,0x00,0x21,0x00,0x0a,0x21,0x00,0x10,0x46,0x03,0x00,0x01,0x01,0x03,
0x10,0x03,0x1f,0x04,0x03,0x00,0x55,0x05,0x00,0x2f,0x03,0x00,0x01,0x37,0x03,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x08,0x5f,0x5f,0x73,0x65,0x6e,0x64,0x5f,
0x5f,0x00,0x00,0x00,0x01,0x1a,0x00,0x04,0x00,0x07,0x00,0x00,0x00,0x00,0x00,0x3d,
0x33,0x00,0x10,0x00,0x1f,0x04,0x01,0x00,0x01,0x05,0x01,0x3b,0x04,0x01,0x03,0x04,
0x2e,0x04,0x00,0x00,0x1f,0x05,0x01,0x01,0x45,0x04,0x23,0x04,0x00,0x30,0x1f,0x04,
0x06,0x01,0x46,0x05,0x00,0x01,0x06,0x03,0x48,0x05,0x2c,0x04,0x01,0x21,0x00,0x3b,
0x1f,0x04,0x07,0x01,0x01,0x05,0x03,0x2e,0x04,0x01,0x01,0x37,0x04,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x02,0x00,0x04,0x73,0x69,0x7a,0x65,0x00,0x00,0x02,0x5b,0x5d,
0x00,0x4c,0x56,0x41,0x52,0x00,0x00,0x00,0xab,0x00,0x00,0x00,0x0b,0x00,0x04,0x61,
0x72,0x67,0x73,0x00,0x01,0x26,0x00,0x05,0x61,0x72,0x69,0x74,0x79,0x00,0x04,0x74,
0x79,0x70,0x65,0x00,0x03,0x61,0x62,0x73,0x00,0x0a,0x73,0x65,0x6c,0x66,0x5f,0x61,
0x72,0x69,0x74,0x79,0x00,0x05,0x70,0x70,0x72,0x6f,0x63,0x00,0x0a,0x6d,0x61,0x6b,
0x65,0x5f,0x63,0x75,0x72,0x72,0x79,0x00,0x01,0x61,0x00,0x0a,0x67,0x69,0x76,0x65,
0x6e,0x5f,0x61,0x72,0x67,0x73,0x00,0x08,0x6e,0x65,0x77,0x5f,0x61,0x72,0x67,0x73,
0x00,0x00,0x00,0x01,0x00,0x01,0x00,0x02,0x00,0x00,0x00,0x01,0x00,0x01,0x00,0x02,
0x00,0x01,0x00,0x01,0x00,0x02,0x00,0x01,0x00,0x01,0x00,0x02,0x00,0x03,0x00,0x03,
0x00,0x04,0x00,0x04,0x00,0x05,0x00,0x05,0x00,0x06,0x00,0x06,0x00,0x07,0x00,0x07,
0x00,0x08,0x00,0x01,0x00,0x01,0x00,0x02,0x00,0x09,0x00,0x01,0x00,0x01,0x00,0x02,
0x00,0x00,0x00,0x01,0x00,0x01,0x00,0x02,0x00,0x0a,0x00,0x03,0x45,0x4e,0x44,0x00,
0x00,0x00,0x00,0x08,
};
void mrb_mruby_proc_ext_gem_init(mrb_state *mrb);
void mrb_mruby_proc_ext_gem_final(mrb_state *mrb);

void GENERATED_TMP_mrb_mruby_proc_ext_gem_init(mrb_state *mrb) {
  int ai = mrb_gc_arena_save(mrb);
  mrb_mruby_proc_ext_gem_init(mrb);
  mrb_load_irep(mrb, gem_mrblib_irep_mruby_proc_ext);
  if (mrb->exc) {
    mrb_print_error(mrb);
    mrb_close(mrb);
    exit(EXIT_FAILURE);
  }
  mrb_gc_arena_restore(mrb, ai);
}

void GENERATED_TMP_mrb_mruby_proc_ext_gem_final(mrb_state *mrb) {
  mrb_mruby_proc_ext_gem_final(mrb);
}
