#include <stdio.h>
#include <math.h>
#include <Windows.h>
#define _CRT_SECURE_NO_WARNINGS


int isDigitMy(char c) {
    if (c >= '0' && c <= '9') return 1;
    return 0;
}

int toUpperAll(int c) {
    int new_c = c;
    if (c >= 'a' && c <= 'z') {
        new_c = 'A' + (c - 'a');
    }
    if (c >= '�' && c <= '�') {
        new_c = '�' + (c - '�');
    }
    if (c >= '�' && c <= '�') {
        new_c = '�' + (c - '�');
    }
    if (c == '�') {
        new_c = '�';
    }
    return new_c;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    //������ 1
    /*char name[12];
    printf("������� ���� ���: ");
    fgets(name, 11, stdin);
    printf("����������� ����, %s\n", name);*/

    //������ 2
    /*printf("������� ������ = ");
    int ch = getchar();

    for (int c = ch; c <= ch + 19; c++) {
        printf("'%c' (%d)\n", c, c);
    }
    printf("\n\n\n");*/

    //������ 3
    /*printf("������� ������ = ");
    int ch = getchar();

    for (int c = ch; c >= ch - 29; c--) {
        printf("'%c' (%d)\n", c, c);
    }
    printf("\n\n\n");*/

    //������ 4
    /*char s[80];
    printf("������� ������: ");
    fgets(s, 79, stdin);

    printf("\n�� ����� ������ s = %s", s);

    int cnt = 0;
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] == ' ') cnt++;
    }

    printf("\n� ��� %d ������.\n", cnt);*/

    //������ 5
    /*char s[100];
    printf("������� ������: ");
    fgets(s, sizeof(s), stdin);
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == ' ') {
            s[i] = '#';
        }
    }
    printf("������������ ������: %s", s);*/

    //������ 6
    /*char str[100];
    printf("������� ������: ");
    fgets(str, 100, stdin);
    printf("��������: %s", str);
    for (int i = 0; i < strlen(str); i++) {
        if (isDigitMy(str[i])) {
            str[i] = "$";
        }
    }
    printf("��������: %s", str);*/

    //������ 7
    //char str[100];
    //printf("������� ������: ");
    //fgets(str, 100, stdin);
    //printf("��������: %s", str);
    //for (int i = 0; i < strlen(str); i++) {
    //    str[i] = toUpperAll(str[i]);
    //}
    //printf("��������: %s", str);


    //������ 8
    char str[100];
    printf("������� ������: ");
    fgets(str, 100, stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 'a' + 'A';
        }
    }

    printf("���������: %s\n", str);
}



