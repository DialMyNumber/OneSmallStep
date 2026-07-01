// https://school.programmers.co.kr/learn/courses/30/lessons/120585

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> array, int height) {
    int answer = 0;
    // 기본적으로 정렬이 되어있지 않기 때문에 처음부터 끝까지 순회 필요
    for (int i : array) {
        if (i > height) {
            ++answer;
        }
    }
    // return answer;

    answer = 0;
    sort(array.begin(), array.end()); // 정렬이 되어있다면 다양한 STL 사용 가능, #include <algorithm> 필요
    answer = array.size();
    // answer -= upper_bound(array.begin(), array.end(), height);    // 불가능 --> iterator가 반환됨
    // upper_bound는 height보다 큰 값이 최초로 등장하는 ❗iterator❗ 반환
    // lower_bound는 height와 같거나 큰 값이 최초로 등장하는 ❗iterator❗ 반환
    // upper_bound() - lower_bound = 해당 원소의 개수 (정렬일때만)

    answer -= upper_bound(array.begin(), array.end(), height) - array.begin();
    // iterator 처리를 위해 


    return answer;
}