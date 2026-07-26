#pragma once

#include <stdint.h>

namespace TarantulaOS {

/**
 * Настройки TarantulaOS
 */
struct TSSettingsData {

    // Язык интерфейса
    uint8_t language = 0;

    // Яркость дисплея (0...100)
    uint8_t brightness = 100;

    // Звуковые сигналы
    bool sounds = true;

    // Отладочный вывод
    bool debug = true;

    // Режим разработчика
    bool developerMode = false;
};

/**
 * Менеджер настроек TarantulaOS
 */
class TSSettings {

  public:

    // Инициализация
    static void init();

    // Доступ к настройкам
    static TSSettingsData& data();

  private:

    static TSSettingsData settings;

};

} // namespace TarantulaOS