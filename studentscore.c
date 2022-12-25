#include <stdio.h>

void main() {
   union student {
      int tot;
      char grade;
   };

   union student u;

   u.tot = 300;
   printf("총점==>%d\n", u.tot);


   u.grade = 'A';
   printf("등급==>%c\n", u.grade);

   printf("총점 주소==>%p\n", u.tot);
   printf("등급 주소==>%p\n", u.grade);
}