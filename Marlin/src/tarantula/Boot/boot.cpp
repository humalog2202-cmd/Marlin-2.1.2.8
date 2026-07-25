#include "../../inc/MarlinConfig.h"

#include "boot.h"

namespace TarantulaOS {

void Boot::init() {

    SERIAL_ECHOLNPGM("");
    SERIAL_ECHOLNPGM("========== TarantulaOS Boot ==========");

    SERIAL_ECHOLNPGM("[ OK ] Kernel");
    SERIAL_ECHOLNPGM("[ OK ] Boot");

    SERIAL_ECHOLNPGM("======================================");
    SERIAL_ECHOLNPGM("");

}

}