// https://school.programmers.co.kr/learn/courses/30/lessons/120826

#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string letter) {
    string answer = "";

    // 방법 1 : 단순 이중 for문
    for (int i = 0; i < my_string.size(); ++i) {
        bool isIn = false;
        for (int j = 0; j < letter.size(); ++j) {
            if (my_string[i] == letter[j]) {
                isIn = true;
            }
        }

        if (!isIn) {
            answer += my_string[i];
        }
    }

    // 방법 2 : Range-based for loop + STL
    for (char c : letter) {
        my_string.erase(remove(my_string.begin(), my_string.end(), c), my_string.end());
    }

    return answer;
}