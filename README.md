# GenCalc-Builder

**GenCalc-Builder** — это демонстрационный консольный проект на C++ (стандарт C++23), созданный для отработки навыков работы с консолью в Windows и терминале VS Code. В проекте реализованы продвинутые приемы управления выводом: позиционирование курсора, очистка экрана, скрытие/отображение курсора, а также простой калькулятор-перечислитель.

## 🛠️ Используемые технологии

- **Язык**: C++23
- **Система сборки**: CMake (минимальная версия 3.20)
- **Компилятор**: MSVC (Visual Studio Build Tools) или любой совместимый с C++23
- **Среда разработки**: Visual Studio Code с расширениями C/C++ и CMake Tools

## 📂 Структура проекта
GenCalc-Builder/
├── .vscode/ # Конфигурации VS Code (tasks.json, launch.json)
├── include_folder/ # Заголовочные файлы
│ ├── AAA/
│ │ ├── a.h
│ │ └── BBB/
│ │ └── b.h
│ └── CALC/
│ └── calc.h
├── src/ # Исходные файлы
│ ├── AAA/
│ │ ├── a.cpp
│ │ └── BBB/
│ │ └── b.cpp
│ ├── CALC/
│ │ └── calc.cpp
│ └── main.cpp
├── .gitignore
├── CMakeLists.txt
└── README.md


- **include_folder** — содержит заголовочные файлы классов `AAA`, `BBB` и `Calc`.
- **src** — содержит реализации этих классов и точку входа `main.cpp`.
- **CMakeLists.txt** — конфигурация сборки. Создает статическую библиотеку `Core` из всех `.cpp` файлов в `src` (кроме `main.cpp`) и исполняемый файл `GenCalculator`, который линкуется с `Core`. Для MSVC включена опция `/utf-8` для корректной работы с кириллицей.

## ⚙️ Требования

- **CMake** версии 3.20 или выше
- Компилятор с поддержкой C++23 (например, MSVC из Visual Studio Build Tools 2022+)
- **Visual Studio Code** с установленными расширениями:
  - [C/C++](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools)
  - [CMake Tools](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cmake-tools)

## 🚀 Сборка и запуск

### В Visual Studio Code

1. Откройте папку проекта в VS Code.
2. Выберите компилятор (Kit): `Ctrl+Shift+P` → **CMake: Select a Kit** → выберите **Visual Studio Build Tools** (amd64).
3. Сконфигурируйте проект: `Ctrl+Shift+P` → **CMake: Configure**.
4. Соберите проект: `Ctrl+Shift+P` → **CMake: Build** (или нажмите `F7`).
5. Запустите или отладьте: выберите цель `GenCalculator` на нижней панели состояния и нажмите `F5` (отладка) или `Ctrl+F5` (запуск без отладки).

> **Важно:** Для корректной работы ANSI-последовательностей во встроенном терминале VS Code в файле `.vscode/launch.json` должен быть указан параметр `"console": "integratedTerminal"`.

### Из командной строки

```bash
mkdir build && cd build
cmake ..
cmake --build . --config Release
./GenCalculator   # или .\Release\GenCalculator.exe в Windows

---

Чтобы скомпилировать в Windows можно выполнить 
build.bat
