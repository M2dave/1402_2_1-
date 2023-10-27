#include <iostream>

int main() {
	for (int i = 50; i <= 200; i++) {
		if (i % 2 == 0) {
			std::cout << i << " ";
		}
	}

	return 0;
}