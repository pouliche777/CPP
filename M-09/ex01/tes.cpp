#include <iostream>
#include <sstream>
#include <iomanip>
#include <ctime>

int main() {
    std::time_t result = std::time(nullptr);
    std::tm *tm_ptr = std::localtime(&result);
    char date_str[11];
    std::strftime(date_str, sizeof(date_str), "%Y-%m-%d", tm_ptr);
    std::cout << date_str << std::endl;
    return 0;
}
