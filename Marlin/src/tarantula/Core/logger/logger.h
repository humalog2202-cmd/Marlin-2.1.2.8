#pragma once

namespace TarantulaOS {

class Logger {
  public:
    static void info(const char *msg);
    static void warning(const char *msg);
    static void error(const char *msg);
};

}