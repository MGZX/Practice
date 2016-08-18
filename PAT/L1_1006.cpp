/*
 2016/8/3 ZXD

 1006. ������ʽ������� (15)

 ����������ĸB����ʾ���١�����ĸS��ʾ��ʮ�����á�12...n������ʾ��λ����n��<10����������ʽ�������һ��������3λ��������������234Ӧ�ñ����ΪBBSSS1234����Ϊ����2�����١���3����ʮ�����Լ���λ��4��

 �����ʽ��ÿ�������������1����������������������n��<1000����

 �����ʽ��ÿ���������������ռһ�У��ù涨�ĸ�ʽ���n��

 ��������1��
 234
 �������1��
 BBSSS1234
 ��������2��
 23
 �������2��
 SS123
*/

#include <iostream>

using namespace std;

int main(void) {
    int n_i;
    cin >> n_i;
    int temp = n_i;
    int digit_G = temp % 10;
    temp /= 10;
    int digit_S = temp % 10;
    temp /= 10;
    int digit_B = temp;
    for (int i = 0; i < digit_B; i++)
        cout << 'B';
    for (int i = 0; i < digit_S; i++)
        cout << 'S';
    for (int i = 1; i <= digit_G; i++)
        cout << i;
    cout << endl;
    cin.get();
    cin.get();
    return 0;
}
