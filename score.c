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


    printf("이름:");
    scanf_s("%s", lyl.name, 9);

    printf("국어점수:");
    scanf_s("%d", &lyl.kor);

    printf("영어점수:");
    scanf_s("%d", &lyl.eng);

    lyl.avg = (lyl.kor + lyl.eng) / 2.0f;

    printf("\n");
    printf("학생이름==>%s\n", lyl.name);
    printf("국어점수-==>%d\n", lyl.kor);
    printf("영어점수-==>%d\n", lyl.eng);
    printf("평균점수-==>%5.1f\n", lyl.avg);
}