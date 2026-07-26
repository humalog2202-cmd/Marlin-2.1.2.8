#include "../../inc/MarlinConfig.h"

#include "../config.h"

#include "ts_kernel.h"

#include "ts_log.h"

#include "version.h"

#include "../settings/ts_settings.h"

namespace TarantulaOS {

void TSKernel::init() {

    SERIAL_ECHOLNPGM("");
    SERIAL_ECHOLNPGM("=================================");
    SERIAL_ECHOLNPGM("        " TARANTULA_NAME);
    SERIAL_ECHOLNPGM("        Version " TARANTULA_VERSION_STRING);
    SERIAL_ECHOLNPGM("=================================");
    SERIAL_ECHOLNPGM("");

    TSLog::info("Initializing Kernel...");
    TSSettings::init();
    TSLog::info("Settings initialized.");
    TSLog::info("Kernel Ready.");
}

}