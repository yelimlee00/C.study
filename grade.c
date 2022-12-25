/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
void main() {
   char name[3][10];
   int kor[3];
   int eng[3];
   float avg[3];

   int i;

   strcpy(name[0], "kim");
   kor[0] = 90;
   eng[0] = 80;
   avg[0] = (kor[0] + eng[0]) / 2.0f;

   strcpy(name[1], "Lee");
   kor[1] = 70;
   eng[1] = 60;
   avg[1] = (kor[1] + eng[1]) / 2.0f;

   strcpy(name[2], "Park");
   kor[2] = 50;
   eng[2] = 40;
   avg[2] = (kor[2] + eng[2]) / 2.0f;

   for (i = 0;i < 3;i++) {
      printf("학생이름==>%s\n", name[i]);
      printf("국어점수==>%d\n", kor[i]);
      printf("영어점수==>%d\n", eng[i]);
      printf("평균점수==>%5.1f\n", avg[i]);
      printf("\n");
   }
   printf("구조체배열name[0]==>%p\n", &name[0]);
   printf("구조체배열kor[0]==>%p\n", &kor[0]);
   printf("구조체배열eng[0]==>%p\n", &eng[0]);

}*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
void main() {

    struct student {
        char name[10];
        int kor;
        int eng;
        float avg;
        float hap;
    };

    struct student inbo[4];


    int i;

    strcpy(inbo[0].name, "KMJ");
    inbo[0].kor = 90;
    inbo[0].eng = 80;
    inbo[0].hap = inbo[0].kor + inbo[0].eng;
    inbo[0].avg = inbo[0].hap / 2.0f;

    strcpy(inbo[1].name, "LDS");
    inbo[1].kor = 70;
    inbo[1].eng = 60;
    inbo[1].hap = inbo[1].kor + inbo[1].eng;
    inbo[1].avg = inbo[1].hap / 2.0f;

    strcpy(inbo[2].name, "PYS");
    inbo[2].kor = 50;
    inbo[2].eng = 40;
    inbo[2].hap = inbo[2].kor + inbo[2].eng;
    inbo[2].avg = inbo[2].hap / 2.0f;

    strcpy(inbo[3].name, "JMS");
    inbo[3].kor = 80;
    inbo[3].eng = 75;
    inbo[3].hap = inbo[3].kor + inbo[3].eng;
    inbo[3].avg = inbo[3].hap / 2.0f;

    for (i = 0; i < 4; i++) {
        printf("학생이름==>%s\n", inbo[i].name);
        printf("국어점수==>%d\n", inbo[i].kor);
        printf("영어점수==>%d\n", inbo[i].eng);
        printf("합계==>%2.1f\n", inbo[i].hap);
        printf("평균점수==>%5.1f\n", inbo[i].avg);
        printf("\n");

    }

    printf("구조체배열mjc[0]==>%p\n", &inbo[0]);
    printf("구조체배열mjc[1]==>%p\n", &inbo[1]);
    printf("구조체배열mjc[2]==>%p\n", &inbo[2]);
    printf("구조체배열mjc[3]==>%p\n", &inbo[3]);

}

