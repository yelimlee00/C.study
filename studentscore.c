#include <stdio.h>

void main() {
   union student {
      int tot;
      char grade;
   };

   union student u;

   u.tot = 300;
   printf("����==>%d\n", u.tot);


   u.grade = 'A';
   printf("���==>%c\n", u.grade);

   printf("���� �ּ�==>%p\n", u.tot);
   printf("��� �ּ�==>%p\n", u.grade);
}