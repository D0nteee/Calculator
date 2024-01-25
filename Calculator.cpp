#include <iostream>

int main() {
	char sign;
	double num1, num2, res;

	std::cout << "What operator are you using?\n";
	std::cin >> sign;

	std::cout << "What are your numbers?\n";
	std::cin >> num1 >> num2;

	switch (sign) {
	case '+':
		res = num1 + num2;
		break;
	case '-':
		res = num1 - num2;
		break;
	case '*':
		res = num1 * num2;
		break;
	case '/':
		res = num1 / num2;
		break;
	default:
		std::cout << "didnt work, Try '+,-,*, /' ";
	}
	std::cout << res;

}
