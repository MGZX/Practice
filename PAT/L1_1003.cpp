/*
1003. ��Ҫͨ����(20)

������ȷ�����Զ�����ϵͳ�����������˻�ϲ�Ļظ�����������PAT�ġ�����ȷ�������� ���� ֻҪ������ַ�����������������ϵͳ�����������ȷ��������������𰸴��󡱡�

�õ�������ȷ���������ǣ�

1. �ַ����б������P, A, T�������ַ��������԰��������ַ���
2. �������� xPATx ���ַ��������Ի�á�����ȷ�������� x �����ǿ��ַ����������ǽ�����ĸ A ��ɵ��ַ�����
3. ��� aPbTc ����ȷ�ģ���ô aPbATca Ҳ����ȷ�ģ����� a, b, c �������ǿ��ַ����������ǽ�����ĸ A ��ɵ��ַ�����

���ھ�����ΪPATдһ���Զ����г����ж���Щ�ַ����ǿ��Ի�á�����ȷ���ġ�
�����ʽ�� ÿ�������������1��������������1�и���һ����Ȼ��n (<10)������Ҫ�����ַ���������������ÿ���ַ���ռһ�У��ַ������Ȳ�����100���Ҳ������ո�

�����ʽ��ÿ���ַ����ļ����ռһ�У�������ַ������Ի�á�����ȷ���������YES���������NO��

����������
8
PAT
PAAT
AAPATAA
AAPAATAAAA
xPATx
PT
Whatever
APAAATAA
���������
YES
YES
YES
YES
NO
NO
NO
NO
�ύ����
*/
#include <stdio.h>
#include <stdlib.h>

int judge(void);

int main(void) {
    int num = 0;
    scanf("%d", &num);
    getchar();
    for (int i = 0; i < num; i++) {
        if (judge() == 1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    //system("pause");
    return 0;
}

int judge(void) {
    char ch = 0;
    int ret = 1;
    int P_flag = 0;
    int T_flag = 0;
    int P_index = -1;
    int T_index = -1;
    int index = 0;
    while ((ch = getchar()) != '\n') {
        if (ch != 'A') {
            if (ch == 'P') {
                P_flag++;
                P_index = index;
            }
            else if (ch == 'T') {
                T_flag++;
                T_index = index;
            }
            else
                ret = 0;
        }
        index++;
    }
    if (!(P_flag == 1 && T_flag == 1 && T_index - P_index > 1))
        ret = 0;
    return ret;
}