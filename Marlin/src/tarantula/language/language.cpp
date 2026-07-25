#include "language.h"
#include "ru.h"

namespace TarantulaOS {

const char* Language::get(LanguageID id) {

    return language_ru[(int)id];

}

}