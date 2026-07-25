from pathlib import Path
import json
import re
import shutil
import sys

ROOT = Path(__file__).resolve().parents[2]
MARLIN_DIR = ROOT / "Marlin"
CONFIG_FILE = MARLIN_DIR / "Configuration.h"
BACKUP_DIR = ROOT / "TarantulaOS" / "backup"
CONFIG_JSON = ROOT / "TarantulaOS" / "configs" / "base.json"

if not CONFIG_FILE.exists():
    print("Ошибка: Configuration.h не найден!")
    sys.exit(1)

if not CONFIG_JSON.exists():
    print("Ошибка: base.json не найден!")
    sys.exit(1)

BACKUP_DIR.mkdir(parents=True, exist_ok=True)

backup = BACKUP_DIR / "Configuration.h.original"

if not backup.exists():
    shutil.copy2(CONFIG_FILE, backup)
    print("Создана резервная копия Configuration.h")

cfg = json.loads(CONFIG_JSON.read_text(encoding="utf-8"))
text = CONFIG_FILE.read_text(encoding="utf-8")

def replace_define(name, value):
    global text
    pattern = rf"(^\s*#define\s+{name}\s+).*$"
    replacement = rf"\g<1>{value}"
    text = re.sub(pattern, replacement, text, flags=re.MULTILINE)

replace_define("MOTHERBOARD", cfg["board"])
replace_define("X_BED_SIZE", cfg["bed_x"])
replace_define("Y_BED_SIZE", cfg["bed_y"])
replace_define("X_MAX_POS", cfg["bed_x"])
replace_define("Y_MAX_POS", cfg["bed_y"])
replace_define("Z_MAX_POS", cfg["height"])
replace_define("LCD_LANGUAGE", cfg["language"])

CONFIG_FILE.write_text(text, encoding="utf-8")

print("Configuration.h успешно обновлён.")