// https://school.programmers.co.kr/learn/courses/30/lessons/120821

#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    for (int i = num_list.size() - 1; i >= 0; --i) {     // size() = 원소의 개수
        answer.push_back(num_list[i]);
    }
    return answer;
}