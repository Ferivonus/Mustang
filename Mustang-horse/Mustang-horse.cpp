#include <iostream>
#include <thread>
#include <chrono>

// This function prints characters to the terminal one by one
void typeWriter(const std::string& text, int delay_ms) {
    for (char c : text) {
        std::cout << c << std::flush;
        std::this_thread::sleep_for(std::chrono::milliseconds(delay_ms));
    }
}

int main()
{
    // Green color
    std::cout << "\033[32m";
    std::cout << "                  /\\_" << std::endl;
    std::cout << "  .-.   _.-''-.  \\  '" << std::endl;
    std::cout << "  `  `''  .    `'  ) " << std::endl;
    std::cout << "   \\   `'-.   ._,  (" << std::endl;
    std::cout << "    `'-._  `''--'  `'._" << std::endl;

    // Reset color
    std::cout << "\033[0m";

    std::cout << "\n";

    // Yellow color
    std::cout << "\033[33m";
    typeWriter("Mustang-horse project is starting...", 50);
    std::cout << "\n";

    // Cyan color
    std::cout << "\033[36m";
    typeWriter("Code downloaded and running!", 50);
    std::cout << "\n";

    // Green color
    std::cout << "\033[32m";
    typeWriter("Success! The program is ready and running.", 50);
    std::cout << "\033[0m\n";

	system("pause");

    return 0;
}