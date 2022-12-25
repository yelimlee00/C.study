#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
    typedef struct _person {
        char name[10];
        int age;
        union _id {
            char phone[15];
            char jumin[15];
        } id;
    }person;

    person p1;


    printf("이름->");
    scanf("%s", p1.name);
    printf("전화번호 혹은 주민번호->");
    scanf("%s", p1.id.jumin);
    printf("나이->");
    scanf("%d", &p1.age);
    printf("-------------");
    printf("이름==>%s\n", p1.name);
    printf("전화번호/주민번호==>%s\n", p1.id.jumin);
    printf("나이==>%d\n", p1.age);

}