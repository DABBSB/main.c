//
// Created by DABB on 2022/9/23.
//
#include <stdio.h>

int main() {
    int a = 0x1234abcd, b = 200;
    int *p_3 = &a;
    int *p_1, *p_2;

//    printf("%d\n", p_1);
//    printf("%d\n", *p_1);
//    printf("%d\n", p_2);
    printf("%d\n", p_3);
    printf("%d\n", &a);

};
