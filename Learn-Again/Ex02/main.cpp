// Check Leap year

#include <iostream>

bool is_leap(int y) {
    if (y % 400 == 0) {
        return true;
    }
    else if(y % 100 == 0) {
        return false;
    }

    if (y % 4 == 0) {
        return true;
    }
    else { return false; }
}

int main() {
    std::cout << std::boolalpha << is_leap(2000) << " " << is_leap(1900) << " " << is_leap(2024) << std::endl; 
    // true false true
}
