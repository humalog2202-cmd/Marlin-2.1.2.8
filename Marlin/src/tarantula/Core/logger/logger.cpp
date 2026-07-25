#include "../../../inc/MarlinConfig.h"
#include "logger.h"

namespace TarantulaOS {

void Logger::info(const char *msg) {
    SERIAL_ECHOPGM("[INFO] ");
    SERIAL_ECHOLN(msg);
}

void Logger::warning(const char *msg) {
    SERIAL_ECHOPGM("[WARN] ");
    SERIAL_ECHOLN(msg);
}

void Logger::error(const char *msg) {
    SERIAL_ECHOPGM("[ERROR] ");
    SERIAL_ECHOLN(msg);
}

}