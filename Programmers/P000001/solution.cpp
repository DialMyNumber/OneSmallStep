// https://school.programmers.co.kr/learn/courses/30/lessons/120803

class MyCalculator {
public:
	int Add(int num1, int num2) const {
		return num1 + num2;
	}
	int Subtract(int num1, int num2) const {
		return num1 - num2;
	}
	int Multiply(int num1, int num2) const {
		return num1 * num2;
	double Divide(int num1, int num2) const {
		if(num2 == 0) {
			return 0.0;
		}
		else {
			return (double)num1 / num2;
		}
	}
};

int solution(int num1, int num2) {
	MyCalculator calc;
	return calc.Subtract(num1, num2);
}
