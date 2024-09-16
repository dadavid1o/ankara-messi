//
// Created by Arutunyan David on 15.09.2024.
//
#include "std__array.hpp"
#include <iostream>

int main(){
    Array<int, 5> mrr;
    mrr[3] = 25;
    std::cout << mrr[3] << std::endl;
    std::cout << mrr.at(3) << std::endl;

    mrr.fill(10);
    for(int i = 0; i < 5; i++) {
        std::cout << mrr[i] << " ";
    }
    std::cout << std::endl;

    std::cout << mrr.max_size() << std::endl;

    std::cout << mrr.size() << std::endl;
    std::cout << mrr.back() << std::endl;
    return 0;
}
