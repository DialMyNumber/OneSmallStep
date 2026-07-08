#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<int> array) {
    unordered_map<int, int> count;

    for (int i : array) {
        count[i]++;
    }

    int mostFreq = 0;
    int key = 0;

    for (const pair<const int, int>& p : count) {
        if (p.second > mostFreq) {
            mostFreq = p.second;
            key = p.first;
        }
    }

    int mostFreqCount = 0;

    for (const auto& p : count) {
        if (p.second == mostFreq) {
            ++mostFreqCount;
        }
    }

    if (mostFreqCount == 1) {
        return key;
    }
    else {
        return -1;
    }
}