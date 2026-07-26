#include "../../inc/MarlinConfig.h"

#include "../config.h"

#include "ts_kernel.h"

#include "version.h"

namespace TarantulaOS {

void TSKernel::init() {

    SERIAL_ECHOLNPGM("");
    SERIAL_ECHOLNPGM("=================================");
    SERIAL_ECHOLNPGM("        " TARANTULA_NAME);
    SERIAL_ECHOLNPGM("        Version " TARANTULA_VERSION_STRING);
    SERIAL_ECHOLNPGM("=================================");
    SERIAL_ECHOLNPGM("");

    SERIAL_ECHOLNPGM("Initializing Kernel...");
    SERIAL_ECHOLNPGM("Kernel Ready.");

}

}