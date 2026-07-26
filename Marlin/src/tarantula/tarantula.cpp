#include "tarantula.h"

#include "core/ts_kernel.h"
#include "boot/ts_boot.h"

namespace TarantulaOS {

void init() {

    TSKernel::init();
    TSBoot::init();

}

}