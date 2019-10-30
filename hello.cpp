#include <ruby.hpp>
#include <iostream>

RB_BEGIN_DECLS

void Init_hello(void)
{
    rb::Class klass("Tatara");
    klass.define_method("initialize", [](VALUE rb_self, int argc, VALUE *argv) {
        return Qnil;
    });

    klass.define_method("version", [](VALUE rb_self) {
        std::cout << "Tatara version is v0.1.0!" << std::endl;
        return Qnil;
    });
}

RB_END_DECLS