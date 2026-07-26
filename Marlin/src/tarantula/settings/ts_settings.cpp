#include "ts_settings.h"

namespace TarantulaOS {

// Экземпляр структуры настроек
TSSettingsData TSSettings::settings;

void TSSettings::init() {

    // Пока ничего не делаем.
    // Позже здесь будет:
    // - загрузка EEPROM
    // - проверка версии
    // - проверка CRC

}

TSSettingsData& TSSettings::data() {

    return settings;

}

} // namespace TarantulaOS