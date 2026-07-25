#include "../../inc/MarlinConfig.h"

#include "boot.h"

#include "../language/language.h"

namespace TarantulaOS {

void Boot::init() {

    SERIAL_ECHOLNPGM("");
    SERIAL_ECHOLNPGM("========== TarantulaOS Boot ==========");

    SERIAL_ECHOLNPGM("[ OK ] Kernel");
    SERIAL_ECHOPGM("[ OK ] ");
    SERIAL_ECHOLN(Language::get(LANG_BOOT_READY));

    SERIAL_ECHOLNPGM("======================================");
    SERIAL_ECHOLNPGM("");

}

}