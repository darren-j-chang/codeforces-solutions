//
// Created by Darren Chang on 8/13/25.
//
#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int solvable_problems = 0;

    for (int i = 1; i <= n; i++) {
        int petya, vasya, tonya;
        std::cin >> petya >> vasya >> tonya;

        // Count how many friends are sure about the solution
        int sure_count = petya + vasya + tonya;

        // If at least 2 friends are sure, they will solve the problem
        if (sure_count >= 2) {
            solvable_problems++;
        }
    }

    std::cout << solvable_problems << std::endl;

    return 0;
}
