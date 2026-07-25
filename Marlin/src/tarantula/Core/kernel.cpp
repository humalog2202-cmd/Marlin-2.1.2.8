#include "../../inc/MarlinConfig.h"

#include "kernel.h"
#include "version.h"

namespace TarantulaOS {

void Kernel::init() {

    SERIAL_ECHOLNPGM("");
    SERIAL_ECHOLNPGM("=================================");
    SERIAL_ECHOLNPGM("        TarantulaOS");
    SERIAL_ECHOLNPGM("        Version " TARANTULA_VERSION_STRING);
    SERIAL_ECHOLNPGM("=================================");
    SERIAL_ECHOLNPGM("");

    SERIAL_ECHOLNPGM("Initializing Kernel...");
    SERIAL_ECHOLNPGM("Kernel Ready.");

}

}