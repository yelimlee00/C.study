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


    printf("�̸�->");
    scanf("%s", p1.name);
    printf("��ȭ��ȣ Ȥ�� �ֹι�ȣ->");
    scanf("%s", p1.id.jumin);
    printf("����->");
    scanf("%d", &p1.age);
    printf("-------------");
    printf("�̸�==>%s\n", p1.name);
    printf("��ȭ��ȣ/�ֹι�ȣ==>%s\n", p1.id.jumin);
    printf("����==>%d\n", p1.age);

}