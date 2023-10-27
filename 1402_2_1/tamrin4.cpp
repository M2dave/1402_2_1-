int main() {
	int number;
	cout << "ent num ";
	cin >> number;

	int reversedNumber = 0;
	while (number != 0) {
		int remainder = number % 10;
		reversedNumber = reversedNumber * 10 + remainder;
		number /= 10;
	}

	cout << "maakoos " << reversedNumber << endl;

	return 0;
}