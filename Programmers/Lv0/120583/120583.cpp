// https://school.programmers.co.kr/learn/courses/30/lessons/120583

#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array, int n) {
    int answer = 0;

    // 1. 단순 반복문
    for (int i = 0; i < array.size(); ++i) {
        if (array[i] == n) {
            ++answer;
        }
    }

    answer = 0;

    // 2. Range-based
    for (int i : array) {
        if (i == n) {
            ++answer;
        }
    }

    answer = 0;

    // 3. STL
    answer = count(array.begin(), array.end(), n);

    return answer;
}