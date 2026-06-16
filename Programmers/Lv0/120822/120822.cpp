// https://school.programmers.co.kr/learn/courses/30/lessons/120822

#include <string>
#include <vector>
#include <algorithm>        // std::reverse(.begin(), .end())

using namespace std;

string solution(string my_string) {
    string answer = "";
    for (int i = my_string.size() - 1; i >= 0; --i) {
        answer += my_string[i];
    }
    return answer;

    // std::reverse(.begin(), .end())
    string newanswer = my_string;
    reverse(newanswer.begin(), newanswer.end());
    return newanswer;
}