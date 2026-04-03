// Make Rectangle class
// Using dynamic memory allocation as member variable
// Proper memory deallocation in destructor

#include <iostream>

class Rect {
private:
    int width;
    int height;
    std::string* Data;

public:
    Rect(int w, int h)
        : width(w)
        , height(h)
        , Data(nullptr) // Initializer List
    {
        std::cout << "Rectangle Constructor called" << std::endl;
    }

    void setData(const std::string& str) {
        if(Data == nullptr) {
            Data = new std::string(str);
        }
        else {
            delete Data;
            Data = new std::string(str);
        }
    }

    ~Rect() {
        std::cout << "Rectangle Destructor called" << std::endl;
        if(Data != nullptr) {
            delete Data;
            Data = nullptr;
        }
    }

    void printData() const {
        if(Data != nullptr) {
            std::cout << "Data : " + *Data << std::endl;
        }
        else {
            std::cout << "Data is null" << std::endl;
        }
    }

    int area() const {
        return getWidth()*getHeight();
    }

    void setWidth(int w) {
        if (w < 0) {
            width = 0;
            return;
        }
        width = w;
    }

    void setHeight(int h) {
        if (h < 0) {
            height = 0;
            return;
        }
        height = h;
    }

    int getWidth() const {
        return width;
    }

    int getHeight() const {
        return height;
    }
};

int main() {
    Rect r(3, 4);
    std::cout << r.area() << std::endl; // 12
    r.setWidth(-5); 
    r.setHeight(2);
    std::cout << r.area() << std::endl; // 0
    r.setData("Hello, world!");
    r.printData();
}
