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

   printf("�Է��� �л� ��:");
   scanf_s("%d", &cnt);

   s = (struct student*)malloc((sizeof(struct student))*cnt);

   for (i = 0;i < cnt;i++)
   {
      printf("�̸��� ���� �Է�:\n");
      scanf("%s %d", s[i].name, &s[i].age);
   }
   printf("\n---------�л����---------\n\n");
   for (i = 0;i < cnt;i++)
      printf("�̸�:%s\n����:%d\n", s[i].name, s[i].age);

   free(s);
}