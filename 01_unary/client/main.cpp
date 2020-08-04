#include <iostream>

int main() {
    std::string em = u8"\U0001F39F";
    std::cout << "Hello, World! \u1F600" << u8"\U0001F910" << std::endl;
    return 0;
}
