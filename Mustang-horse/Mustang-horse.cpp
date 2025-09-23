#include <iostream>
#include <thread>
#include <chrono>

// Bu fonksiyon, terminale karakterleri tek tek yazdýrýr
void typeWriter(const std::string& text, int delay_ms) {
    for (char c : text) {
        std::cout << c << std::flush;
        std::this_thread::sleep_for(std::chrono::milliseconds(delay_ms));
    }
}

int main()
{
    // Yeþil renk
    std::cout << "\033[32m";
    std::cout << "                  /\\_" << std::endl;
    std::cout << "  .-.   _.-''-.  \\  '" << std::endl;
    std::cout << "  `  `''  .    `'  ) " << std::endl;
    std::cout << "   \\   `'-.   ._,  (" << std::endl;
    std::cout << "    `'-._  `''--'  `'._" << std::endl;

    // Rengi sýfýrla
    std::cout << "\033[0m";

    std::cout << "\n";

    // Sarý renk
    std::cout << "\033[33m";
    typeWriter("Mustang-horse projesi baþlýyor...", 50);
    std::cout << "\n";

    // Cam göbeði rengi
    std::cout << "\033[36m";
    typeWriter("Kodlar indirildi ve çalýþtýrýlýyor!", 50);
    std::cout << "\n";

    // Yeþil renk
    std::cout << "\033[32m";
    typeWriter("Baþarýlý! Program hazýr ve çalýþýyor.", 50);
    std::cout << "\033[0m\n";

    return 0;
}