/*
L1_1004 �ɼ�����

����n��ѧ����������ѧ�š��ɼ����ֱ�����ɼ���ߺͳɼ����ѧ����������ѧ�š�

�����ʽ��ÿ�������������1��������������ʽΪ

��1�У�������n
��2�У���1��ѧ�������� ѧ�� �ɼ�
��3�У���2��ѧ�������� ѧ�� �ɼ�
... ... ...
��n+1�У���n��ѧ�������� ѧ�� �ɼ�
����������ѧ�ž�Ϊ������10���ַ����ַ������ɼ�Ϊ0��100֮���һ�����������ﱣ֤��һ�����������û������ѧ���ĳɼ�����ͬ�ġ�
�����ʽ����ÿ�������������2�У���1���ǳɼ����ѧ����������ѧ�ţ���2���ǳɼ����ѧ����������ѧ�ţ��ַ�������1�ո�

����������
3
Joe Math990112 89
Mike CS991301 100
Mary EE990830 95
���������
Mike CS991301
Joe Math990112
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct data {
    char name[11];
    char ID_number[11];
    int grade;
} data;

int main(void) {
    int size;
    scanf("%d", &size);
    getchar();
    data *student = (data *) calloc(size, sizeof(data));
    for (int i = 0; i < size; i++) {
        scanf("%s", student[i].name);
        scanf("%s", student[i].ID_number);
        scanf("%d", &student[i].grade);
        //getchar();
    }
    data temp;
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (student[i].grade < student[j].grade) {
                temp = student[i];
                student[i] = student[j];
                student[j] = temp;
            }
        }
    }
    printf("%s %s\n", student[0].name, student[0].ID_number);
    printf("%s %s\n", student[size - 1].name, student[size - 1].ID_number);
    system("pause");
    return 0;
}