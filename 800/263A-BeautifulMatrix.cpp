//
// Created by Darren Chang on 3/6/26.
//
#include <iostream>

int main() {
	int x;

	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= 5; j++) {
			std::cin >> x;

			if (x == 1) {
				int moves = abs(i - 3) + abs(j - 3);
				std::cout << moves;
				return 0;
			}
		}
	}
}