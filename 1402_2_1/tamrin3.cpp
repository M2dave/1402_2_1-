#include <iostream>

int main() {
	int grades[20];
	int sum = 0;
	for (int i = 0; i < 20; i++) {
		std::cout << "Enter grade for student " << i + 1 << ": ";
		std::cin >> grades[i];
		sum += grades[i];
	}
	float average = static_cast<float>(sum) / 20;
	std::cout << "Average grade: " << average << std::endl
	return 0;
}