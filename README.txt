dotnet nuget locals all --clear


git clone https://github.com/Smecce/GenCalc-Builder.git


https://github.com/microsoft/VisualStudioUninstaller/releases/download/v1.4/TotalUninstaller.zip



- VSCode
- in VSCode setup GIT
- git clone https://github.com/Smecce/GenCalc-Builder.git
- открываем папку в VSCode
- extensions.json указывает, что должно быть установлено
- рекомендации по установке Microsoft Visual C++ (MSVC) compiler:
	Install a C++ compiler on Windows
	If you're doing C++ development for Windows, we recommend installing the Microsoft Visual C++ (MSVC) compiler.

	To install MSVC, open the VS Code terminal (CTRL + `) and paste in the following command:

-->>		winget install Microsoft.VisualStudio.2022.BuildTools --force --override "--wait --passive --add Microsoft.VisualStudio.Workload.VCTools --add Microsoft.VisualStudio.Component.VC.Tools.x86.x64 --add Microsoft.VisualStudio.Component.Windows10SDK.19041"
(или так:)     	winget install Microsoft.VisualStudio.2022.BuildTools --source winget --force --override "--wait --passive --add Microsoft.VisualStudio.Workload.VCTools --includeRecommended"

	Note: You can use the C++ toolset from Visual Studio Build Tools along with Visual Studio Code to compile, build, and verify 
	any C++ codebase as long as you also have a valid Visual Studio license (either Community, Pro, or Enterprise) that you are actively using to develop that C++ codebase.

	Verifying the compiler installation
	Open the Developer Command Prompt for VS by typing "developer" in the Windows Start menu.

	Check your MSVC installation by typing cl into the Developer Command Prompt for VS. You should see a copyright message with the version and basic usage description.

	Other compiler options
		If you're targeting Linux from Windows, check out Using C++ and Windows Subsystem for Linux (WSL) in VS Code. Or, you could install GCC on Windows with MinGW.

- если нужны другие компилятры, делаем так, как тут сказано (устанавливаем  MSYS2):
	https://code.visualstudio.com/docs/cpp/config-mingw


- ещё этот пакт для работы в С++
ms-vscode.cpptools-extension-pack
====================================================

:: Как склонировать проект из GitHub через VSCode:

Нажмите Ctrl+Shift+P (палитра команд).

Начните вводить Git: Clone и выберите этот пункт.

Вставьте ссылку: https://github.com/Smecce/GenCalc-Builder.git и нажмите Enter.

Выберите папку на компьютере, куда скачать проект.

VS Code спросит: "Would you like to open the cloned repository?" — нажмите Open (Открыть).
---------------------------
Что сделать после скачивания?

Ctrl+Shift+P -> CMake: Select a Kit (выбрать Visual Studio Build Tools).

Ctrl+Shift+P -> CMake: Configure (настроить проект).

Ctrl+Shift+P -> CMake: Build (собрать проект).

Нажать F5 для запуска.
F7 - собрать (билдить) проект
====================================================
Этими командами указываем системе, сто все Git будут с этими именем и майлом:
git config --global user.name "Ваше Имя"
git config --global user.email "ваш-email@example.com"


























