#include "helper.h"
#include <locale>
#include <chrono>

using hlp::ccolor;

int main(int, char **)
{
    std::setlocale(LC_ALL, "ru_RU.UTF-8");
    hlp::enable_virtal_console();

    hlp::color_println("Запускаю Skype -- первую сессию...", ccolor::green);
    WinExec("Skype.exe", SW_SHOWDEFAULT);

    std::this_thread::sleep_for(std::chrono::milliseconds(2000));

    hlp::color_println("Запускаю Skype -- вторую сессию...", ccolor::green);
    system("Skype.exe --secondary --datapath \"%appdata%\\Microsoft\\Skype for Desktop\\profile1");

    return 0;
}
