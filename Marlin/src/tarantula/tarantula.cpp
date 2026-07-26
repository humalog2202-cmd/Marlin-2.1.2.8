#include "tarantula.h"

#include "core/ts_kernel.h"
#include "boot/boot.h"

namespace TarantulaOS {

void init() {

    TSKernel::init();
    Boot::init();

}

}