#include <iostream>

std::string get_str(int num) {
    std::string str;
    
    for (int i = 0; i < num; i++) {
        str += std::to_string(i);
        
        if (i != (num - 1)) {
            str += ' ';
        }
    }
 
    return str;
}

void test_get_str() {
    int num = 5;
    std::string result = "0 1 2 3 4";
    
    std::string str = get_str(num);
    
    bool passed = true;
    if (str.size() == result.size()) {
        for (size_t i = 0; i < str.size(); i++) {
            if (str[i] != result[i]) {
                passed = false;
                break;
            }
        }
    } else {
        passed = false;
    }
    
    if (passed) {
        std::cout << "Тест пройден" << std::endl;
    } else {
        std::cout << "Тест не пройден" << std::endl;
    }
}

int main() {
    int num = 5;
    std::string str = get_str(num);
    
    for (auto i : str) {
        std::cout << i;
    }
    std::cout << std::endl;
    
    test_get_str();
    
    return 0;
}
