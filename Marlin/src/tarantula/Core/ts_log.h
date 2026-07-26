#pragma once

namespace TarantulaOS {

enum class TSLogLevel {
    Debug,
    Info,
    Warning,
    Error
};

class TSLog {

public:

    static void write(TSLogLevel level, const char *msg);

    static void debug(const char *msg);
    static void info(const char *msg);
    static void warning(const char *msg);
    static void error(const char *msg);

};

}