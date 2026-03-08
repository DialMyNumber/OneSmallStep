// https://school.programmers.co.kr/learn/courses/30/lessons/120808

#include <vector>
#include <iostream>

int mygcd(int numer, int denom); // Greatest Common Divisor

int mylcm(int num1, int num2); // Least Common Multiple

std::vector<int> my_solution(int numer1, int denom1, int numer2, int denom2) {
    std::vector<int> answer;

    int denom = mylcm(denom1, denom2);
    int numer = numer1 * (denom / denom1) + numer2 * (denom / denom2);
 
    int final_numer = numer / mygcd(numer, denom);
    int final_denom = denom / mygcd(numer, denom);
  
    answer.push_back(final_numer);
    answer.push_back(final_denom);
  
    return answer;
}

int main(void) {
    int numer1, denom1, numer2, denom2;
    std::cin >> numer1 >> denom1 >> numer2 >> denom2;
    std::vector<int> answer = my_solution(numer1, denom1, numer2, denom2);
  
    for (int i : answer) {
        std::cout << i << " ";
    }
  
    return 0;
}

int mygcd(int numer, int denom) {
    while (denom != 0) {
        int temp = denom;
        denom = numer % denom;
        numer = temp;
    }
    return numer;
}

int mylcm(int num1, int num2) const {
    return num1 * num2 / mygcd(num1, num2);
}
