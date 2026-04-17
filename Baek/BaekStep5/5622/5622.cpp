// https://www.acmicpc.net/problem/5622

#include <iostream>

int main(void) {
	std::string input;
	std::cin >> input;

	int sum = 0;
	for (int i = 0; i < input.length(); ++i) {
		int ASCII = (int)(input[i] - 'A');
		if (ASCII <= 2) {	// 0, 1, 2 = A B C
			sum += 3;
		}
		else if (ASCII <= 5) { // D E F
			sum += 4;
		}
		else if (ASCII <= 8) { // G H I
			sum += 5;
		}
		else if (ASCII <= 11) { // J K L
			sum += 6;
		}
		else if (ASCII <= 14) { // M N O
			sum += 7;
		}
		else if (ASCII <= 18) { // P Q R S
			sum += 8;
		}
		else if (ASCII <= 21) { // T U V
			sum += 9;
		}
		else if (ASCII <= 25) { // W X Y Z
			sum += 10;
		}
	}

	std::cout << sum;

	return 0;
}