#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
    struct student {
        int stu_id;
        char name[10];
        int year;
        char department[20];
        char sch_name[15];
        int kor, eng;
        float avg;

    };

    struct student lyl;


    printf("�̸�:");
    scanf_s("%s", lyl.name, 9);

    printf("��������:");
    scanf_s("%d", &lyl.kor);

    printf("��������:");
    scanf_s("%d", &lyl.eng);

    lyl.avg = (lyl.kor + lyl.eng) / 2.0f;

    printf("\n");
    printf("�л��̸�==>%s\n", lyl.name);
    printf("��������-==>%d\n", lyl.kor);
    printf("��������-==>%d\n", lyl.eng);
    printf("�������-==>%5.1f\n", lyl.avg);
}