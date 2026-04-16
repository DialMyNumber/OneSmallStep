// https://www.acmicpc.net/problem/2908

#include <iostream>
#include <string>

int main(void) {
	std::string num1, num2;
	std::cin >> num1 >> num2;
	
	std::string newn1, newn2;

	for (int i = num1.length()-1; i >= 0; --i) {
		newn1 += num1[i];
	}
	// std::reverse(num1.begin(), num1.end());


	for (int i = num2.length()-1; i >= 0; --i) {
		newn2 += num2[i];
	}
	// std::reverse(num2.begin(), num2.end());

	int n1, n2;
	n1 = std::stoi(newn1);
	n2 = std::stoi(newn2);

	std::cout << (n1 > n2 ? n1 : n2);

	return 0;
}