//
// Created by Darren Chang on 3/9/26.
//
#include <iostream>
#include <string>
#include <set>

int main() {
	std::string username;
	std::cin >> username;

	std::set<char> unique_chars;

	for (char c : username) {
		unique_chars.insert(c);
	}

	if (unique_chars.size() % 2 == 1) {
		std::cout << "IGNORE HIM!";
	} else {
		std::cout << "CHAT WITH HER!";
	}
}