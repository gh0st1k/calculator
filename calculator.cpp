#include<iostream>
#include<cstring>
using namespace std;
class Calculator {
private:
	bool number1Number2(int number1, int number2) {
		if (number1 >= number2)
			return true;
		else
			return false;
	}

	int action(char action, int number1, int number2) {
		switch (action) {
		case '+':
			return number1 + number2;
		case '-':
			if (number1Number2(number1, number2)) {
				return number1 - number2;
			}
			else {
				return number2 - number1;
			}
		case '/':
			if (number1Number2(number1, number2) && number2 != 0) {
				return number1 / number2;
			}
			else {
				cout << "It is impossible to divide by zero!" << endl;
				return 0;
			}
		case '*':
			return number1 * number2;
		default:
			cout << "Oh... You action is invalid!" << endl;
			return 0;
		}
	}
public:
	Calculator(char action, int number1, int number2) {
		auto result = Calculator::action(action, number1, number2);
		cout << "Your result: ";
		cout << result << endl;
	}
};

int main() {
	while (true) {
		char action;
		int number1, number2;
		cout << "Hello! What action you want do?\n1.+\n2.-\n3.*\n4./" << endl;
		cin >> action;
		cout << "Okey, what numbers?" << endl;
		cin >> number1;
		cin >> number2;
		Calculator calc(action, number1, number2);
	}
}
