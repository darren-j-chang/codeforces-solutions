//
// Created by Darren Chang on 8/14/25.
//
#include <iostream>
#include <string>

int main() {
    int n;
    std::cin >> n;

    int result = 0;

    for (int i = 1; i <= n; i++) {
        std::string mainString;
        std::cin >> mainString;

        if (mainString.find("++") != std::string::npos) {
            result++;
        } else if (mainString.find("--") != std::string::npos) {
            result--;
        }
    }

    std::cout << result << std::endl;

    return 0;
}
