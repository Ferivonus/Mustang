#include <iostream>
#include <thread>
#include <chrono>

// Bu fonksiyon, terminale karakterleri tek tek yazd�r�r
void typeWriter(const std::string& text, int delay_ms) {
    for (char c : text) {
        std::cout << c << std::flush;
        std::this_thread::sleep_for(std::chrono::milliseconds(delay_ms));
    }
}

int main()
{
    // Ye�il renk
    std::cout << "\033[32m";
    std::cout << "                  /\\_" << std::endl;
    std::cout << "  .-.   _.-''-.  \\  '" << std::endl;
    std::cout << "  `  `''  .    `'  ) " << std::endl;
    std::cout << "   \\   `'-.   ._,  (" << std::endl;
    std::cout << "    `'-._  `''--'  `'._" << std::endl;

    // Rengi s�f�rla
    std::cout << "\033[0m";

    std::cout << "\n";

    // Sar� renk
    std::cout << "\033[33m";
    typeWriter("Mustang-horse projesi ba�l�yor...", 50);
    std::cout << "\n";

    // Cam g�be�i rengi
    std::cout << "\033[36m";
    typeWriter("Kodlar indirildi ve �al��t�r�l�yor!", 50);
    std::cout << "\n";

    // Ye�il renk
    std::cout << "\033[32m";
    typeWriter("Ba�ar�l�! Program haz�r ve �al���yor.", 50);
    std::cout << "\033[0m\n";

    return 0;
}