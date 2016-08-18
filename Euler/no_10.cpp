//
// Created by zhaoxiaodong on 16-8-14.
//
#include <iostream>
#include <vector>

using namespace std;

void euler_10() {
    long long sum = 0;
    vector<int> prime;
    prime.push_back(2);
    for (int i = 3; i < 2000000; i++) {
        int flag = 1;
        for (int x : prime) {
            if (i % x == 0) {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
            prime.push_back(i);
    }
    for (int i : prime) {
        sum += i;
    }
    cout << sum << endl;
}
