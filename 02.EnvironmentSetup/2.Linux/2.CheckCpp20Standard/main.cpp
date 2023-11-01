#include <iostream>

int main (){
    // Use the three way comparison (spaceship operator) to check if c++20
    // standard is available.
    auto result = (10 <=> 20) > 0;
    std::cout << result << std::endl;

    return 0;
}