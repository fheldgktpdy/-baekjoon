#include <iostream>
int main() {
	int k;
	std::cin >> k;
	for (int i = 1; i <= k; i++) {
		for (int s = i; s < k; s++)
			std::cout << " ";
		for (int z = 1; z <= i; z++)
			std::cout << "* ";
		std::cout << "\n";
	}
}