#include <deps/memory/memory.h>
#include <deps/math/math.h>
#include <deps/window/window.h>
#include <iostream>
#include <inttypes.h>

bool show_menu = false;

int main() {
    SetConsoleTitle(L"External Cheat Base");
    if (!memory->attach_to_process(L"cs2.exe"))
        return false;

    printf("[+] Found client.dll - 0x%" PRIXPTR "\n", memory->get_module_address());
    c_overlay overlay;
    if (!overlay.create()) {
        printf("[!] Failed to make overlay window\n");
        std::cin.get();
        return false;
    }

    overlay.set_click_through(true);

    while (overlay.running) {
        if (GetAsyncKeyState(VK_INSERT) & 1) {
            show_menu = !show_menu;
            overlay.set_click_through(!show_menu);
        }

        overlay.start();

        if (show_menu) {
            ImGui::SetNextWindowSize({ 500, 500 });
            ImGui::Begin("External Cheat Base by Yazz");

            ImGui::End();
        }

        overlay.end();
    }
}