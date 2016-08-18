//
// Created by zhaoxiaodong on 16-8-14.
//
#include <iostream>

using namespace std;

int a[20][20];

int max_product(int x, int y);

void euler_11() {
    int x;
    int max = 0;
    for (int i = 0; i < 20; ++i) {
        for (int j = 0; j < 20; ++j) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < 20; ++i) {
        for (int j = 0; j < 20; ++j) {
            if (max_product(i, j) > max)
                max = max_product(i, j);
        }
    }
    cout << max;
}

int max_product(int x, int y) {
    int max = 0;
    int temp = 0;
    if (y - 3 >= 0 && x + 3 < 20) {
        temp = a[x][y] * a[x + 1][y - 1] * a[x + 2][y - 2] * a[x + 3][y - 3];
        if (temp > max)
            max = temp;
    }
    if (x + 3 < 20) {
        temp = a[x][y] * a[x + 1][y] * a[x + 2][y] * a[x + 3][y];
        if (temp > max)
            max = temp;
    }
    if (x + 3 < 20 && y + 3 < 20) {
        temp = a[x][y] * a[x + 1][y + 1] * a[x + 2][y + 2] * a[x + 3][y + 3];
        if (temp > max)
            max = temp;
    }
    if (y + 3 < 20) {
        temp = a[x][y] * a[x][y + 1] * a[x][y + 2] * a[x][y + 3];
        if (temp > max)
            max = temp;
    }
    return max;
}
