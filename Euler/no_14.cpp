//
// Created by zhaoxiaodong on 16-8-17.
// Longest Collatz sequence
//
#include <iostream>

using namespace std;

void euler_14() {
    // C(40,20)
    double result = 1;
    for (int i = 40; i > 20; i--) {
        result *= i;
        result /= (i - 20);
    }
    cout << result;
}
