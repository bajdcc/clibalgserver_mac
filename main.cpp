#include <iostream>
#include "cparser/cgui.h"

int main() {
    using namespace std;
    using namespace clib;
    using namespace std::chrono;
    using namespace std::literals::chrono_literals;
    cgui gui;
    gui.set_main(R"(
#include "/include/io"
int main() {
  put_string("Hello world!");
}
)");
    auto now = std::chrono::system_clock::now();
    auto last_clock = std::chrono::system_clock::now();
    auto dt = std::chrono::duration_cast<std::chrono::seconds>(now - last_clock);
    while (gui.is_running() && dt < 2s) {
        gui.draw(false, 30.0);
        now = std::chrono::system_clock::now();
        dt = std::chrono::duration_cast<std::chrono::seconds>(now - last_clock);
    }
    auto run = gui.is_running();
    auto output = gui.output();
    if (run)
        output += "\n[ERROR] Running time out.";
    cout << "<< OUTPUT >>" << endl;
    cout << output << endl;
    gui.reset();
}