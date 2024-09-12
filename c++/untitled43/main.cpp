#include <iostream>
#include <array>
int main(){
    std::array<int, 5> mArray{[0] = 111, [1] = 3, [2] = 777};
    std::cout << mArray[0];
    return 0;
}
