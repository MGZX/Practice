/*
 2016/8/7 ZXD

 Largest product in a series
 Problem 8

 The four adjacent digits in the 1000-digit number that have the greatest product are 9 �� 9 �� 8 �� 9 = 5832.

 73167176531330624919225119674426574742355349194934
 96983520312774506326239578318016984801869478851843
 85861560789112949495459501737958331952853208805511
 12540698747158523863050715693290963295227443043557
 66896648950445244523161731856403098711121722383113
 62229893423380308135336276614282806444486645238749
 30358907296290491560440772390713810515859307960866
 70172427121883998797908792274921901699720888093776
 65727333001053367881220235421809751254540594752243
 52584907711670556013604839586446706324415722155397
 53697817977846174064955149290862569321978468622482
 83972241375657056057490261407972968652414535100474
 82166370484403199890008895243450658541227588666881
 16427171479924442928230863465674813919123162824586
 17866458359124566529476545682848912883142607690042
 24219022671055626321111109370544217506941658960408
 07198403850962455444362981230987879927244284909188
 84580156166097919133875499200524063689912560717606
 05886116467109405077541002256983155200055935729725
 71636269561882670428252483600823257530420752963450

 Find the thirteen adjacent digits in the 1000-digit number that have the greatest product. What is the value of this product?
*/

#include <iostream>

using namespace std;

int main(void) {
#if 1
    long long a1 = getchar() - '0';
    long long a2 = getchar() - '0';
    long long a3 = getchar() - '0';
    long long a4 = getchar() - '0';
    long long a5 = getchar() - '0';
    long long a6 = getchar() - '0';
    long long a7 = getchar() - '0';
    long long a8 = getchar() - '0';
    long long a9 = getchar() - '0';
    long long a10 = getchar() - '0';
    long long a11 = getchar() - '0';
    long long a12 = getchar() - '0';
    long long a13 = getchar() - '0';
    char t;
    long long max = a1 * a2 * a3 * a4 * a5 * a6 * a7 * a8 * a9 * a10 * a11 * a12 * a13;
    long long temp_product;
    while ((t = getchar()) != 'z') {
        if (t == '\n' || t == ' ' || t == '\r')
            continue;
        a1 = a2;
        a2 = a3;
        a3 = a4;
        a4 = a5;
        a5 = a6;
        a6 = a7;
        a7 = a8;
        a8 = a9;
        a9 = a10;
        a10 = a11;
        a11 = a12;
        a12 = a13;
        a13 = t - '0';
        temp_product = a1 * a2 * a3 * a4 * a5 * a6 * a7 * a8 * a9 * a10 * a11 * a12 * a13;
        if (temp_product > max)
            max = temp_product;
    }
    cout << max << endl;

#endif
    system("pause");
    return 0;
}
