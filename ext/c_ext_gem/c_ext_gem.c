#include <stdio.h>
#include <ruby.h>

static VALUE
rb_hello(VALUE klass)
{
  printf("Hello, World!\n");
  return Qnil;
}

void Init_c_ext_gem(void) {
  VALUE mod = rb_define_module("CExtGem");
  rb_define_singleton_method(mod, "hello", rb_hello, 0);
}
