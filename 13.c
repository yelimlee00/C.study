#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>

void main() {
   struct student {
      char name[10];
      int age;
   };
   struct student *s;

   int cnt, i;

   printf("입력할 학생 수:");
   scanf_s("%d", &cnt);

   s = (struct student*)malloc((sizeof(struct student))*cnt);

   for (i = 0;i < cnt;i++)
   {
      printf("이름과 나이 입력:\n");
      scanf("%s %d", s[i].name, &s[i].age);
   }
   printf("\n---------학생명단---------\n\n");
   for (i = 0;i < cnt;i++)
      printf("이름:%s\n나이:%d\n", s[i].name, s[i].age);

   free(s);
}