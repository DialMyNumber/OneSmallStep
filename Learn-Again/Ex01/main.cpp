// sum of all elements in an integer vector

#include <iostream>
#include <vector>

long long sum(const vector<int>& v) {
    long long sum = 0;
    if (v.size() == 0) {
        return 0;
    }
    for (int i = 0; i < v.size(); ++i) {
        sum += v[i];
    }
    return sum;
}

int main() {
    std::vector<int> v{ 3, 6, 7, 9 };
    std::cout << sum(v) << std::endl;
}
