//
// Created by Darren Chang on 8/20/25.
//
#include <iostream>
#include <vector>

int main() {
    int n;
    int k;
    std::cin >> n >> k;

    std::vector<int> arr(n);
    // Read each element individually
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    int result = k;
    int cutoff = arr[k-1];  // k-th element (1-indexed)

	if (cutoff == 0) {
		std::cout << result << std::endl;
		return 0;
	}

    for (int i = k; i < n; i++) {  // Start from k (0-indexed)
        if (arr[i] >= cutoff && arr[i] > 0) {  // Common condition in contests
            result += 1;
        }
    }

    std::cout << result << std::endl;

    return 0;
}
