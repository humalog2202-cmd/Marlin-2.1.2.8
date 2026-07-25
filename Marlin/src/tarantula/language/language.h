#pragma once

namespace TarantulaOS {

enum LanguageID {

    LANG_BOOT_TITLE,
    LANG_BOOT_KERNEL,
    LANG_BOOT_READY

};

class Language {

  public:

    static const char* get(LanguageID id);

};

}