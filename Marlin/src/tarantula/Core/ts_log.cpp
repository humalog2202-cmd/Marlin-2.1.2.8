#include "../../inc/MarlinConfig.h"

#include "ts_log.h"

namespace TarantulaOS {

void TSLog::write(TSLogLevel level, const char *msg) {

    switch (level) {

        case TSLogLevel::Debug:
            SERIAL_ECHOPGM("[DEBUG] ");
            break;

        case TSLogLevel::Info:
            SERIAL_ECHOPGM("[INFO ] ");
            break;

        case TSLogLevel::Warning:
            SERIAL_ECHOPGM("[WARN ] ");
            break;

        case TSLogLevel::Error:
            SERIAL_ECHOPGM("[ERROR] ");
            break;

    }

    SERIAL_ECHOLN(msg);
}

void TSLog::debug(const char *msg) {
    write(TSLogLevel::Debug, msg);
}

void TSLog::info(const char *msg) {
    write(TSLogLevel::Info, msg);
}

void TSLog::warning(const char *msg) {
    write(TSLogLevel::Warning, msg);
}

void TSLog::error(const char *msg) {
    write(TSLogLevel::Error, msg);
}

}