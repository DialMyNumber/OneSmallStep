#include "oversize.h"
#include <stack>
#include <queue>
#include <string>
#include <cmath>

int isCarry(int a, int b, int Indigit);

std::string oversize::Calc(const oversize& num1, const oversize& num2, size_t digit) {
    std::stack<int> stack1;
    std::stack<int> stack2;
    std::queue<int> result;

    size_t num1start = num1.value.length() % digit;
    size_t num2start = num2.value.length() % digit;

    // num1
    if (num1start != 0) {
        int sub = std::stoll(num1.value.substr(0, num1start));
        stack1.push(sub);
    }
    for (size_t i = 0; i < num1.value.length() / digit; ++i) {
        int sub = std::stoll(num1.value.substr(i * digit + num1start, digit));
        stack1.push(sub);
    }

    // num2
    if (num2start != 0) {
        int sub = std::stoll(num2.value.substr(0, num2start));
        stack2.push(sub);
    }
    for (size_t i = 0; i < num2.value.length() / digit; ++i) {
        int sub = std::stoll(num2.value.substr(i * digit + num2start, digit));
        stack2.push(sub);
    }

    int carry = 0;
    size_t pow10digit = 1;
    for (size_t i = 0; i < digit; ++i) {
        pow10digit *= 10;
    }

    // 두 Stack에 숫자가 남아있는 동안
    while (!stack1.empty() || !stack2.empty()) {
        int a = 0, b = 0;
        if (!stack1.empty()) { a = stack1.top(); stack1.pop(); }
        if (!stack2.empty()) { b = stack2.top(); stack2.pop(); }

        int sum = a + b + carry;
        carry = sum / pow10digit;
        int remainder = sum % pow10digit;

        result.push(remainder);
    }

    if (carry != 0) result.push(carry);

    // 결과를 문자열로 변환
    std::string finalResult;
    while (!result.empty()) {
        int val = result.front();
        result.pop();
        std::string s = std::to_string(val);

        // 맨 앞자리 처리
        if (!finalResult.empty() && s.length() < digit) {
            s = std::string(digit - s.length(), '0') + s;
        }
        finalResult += s;
    }

    return finalResult;
}

int isCarry(int a, int b, int Indigit) {
    int carry = 0;
    int pow10digit = 1;
    for (int i = 0; i < Indigit; ++i) pow10digit *= 10;
    if (a + b >= pow10digit) carry = 1;
    return carry;
}