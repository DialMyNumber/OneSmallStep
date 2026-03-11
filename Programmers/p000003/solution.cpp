// https://school.programmers.co.kr/learn/courses/30/lessons/120809
// Double each element of the array
// Use Vector

#include <vector>
#include <iostream>
#include <sstream>

 
std::vector<int> solution(std::vector<int> numbers) {
    std::vector<int> answer;

    for(int n : answer) {
        answer.push_back(n * 2);
    }
    return answer;
}

int main(void) {
    std::vector<int> arr;
    std::string str;
  
    /*
    int element;
    while (std::cin >> element) {
        arr.push_back(element);
    }   // Ctrl + D ( non-Windows ), Ctrl + Z ( Windows )
    */
  
    std::getline(std::cin, str);

    std::stringstream ss(str);

    int i;
    while (ss >> i) {
        arr.push_back(i);
    }

    std::vector<int> result = solution(arr);

    for (int i : result) {
        std::cout << i << " ";
    }

    return 0;
}
