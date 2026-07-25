#include "tarantula.h"

#include "core/kernel.h"
#include "boot/boot.h"

namespace TarantulaOS {

void init() {

    Kernel::init();
    Boot::init();

}

}