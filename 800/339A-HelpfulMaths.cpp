//
// Created by Darren Chang on 6/29/26.
//
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	string sum;
	cin >> sum;

	sum.erase(remove(sum.begin(), sum.end(), '+'), sum.end());
	sort(sum.begin(), sum.end());

	cout << sum[0];
	for (size_t i = 1; i < sum.size(); ++i)
		cout << '+' << sum[i];

	return 0;
}
