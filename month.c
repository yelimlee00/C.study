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

}*/

#include <stdio.h>

void main() {
    enum month {
        Jan = 1, Feb, Mar, Apr,
        May, June, July, Aug,
        Sep, Oct, Nov, Dec
    };

    enum month mm;
    while (1) {
        printf("월입력:");
        scanf_s("%d", &mm);

        switch (mm) {
        case 1:
            printf("%d월은 1월입니다.", mm);
            break;
        case 2:
            printf("%d월은 2월입니다.", mm);
            break;
        case 3:
            printf("%d월은 3월입니다.", mm);
            break;
        case 4:
            printf("%d월은 4월입니다.", mm);
            break;
        case 5:
            printf("%d월은 5월입니다.", mm);
            break;
        case 6:
            printf("%d월은 6월입니다.", mm);
            break;
        case 7:
            printf("%d월은 7월입니다.", mm);
            break;
        case 8:
            printf("%d월은 8월입니다.", mm);
            break;
        case 9:
            printf("%d월은 9월입니다.", mm);
            break;
        case 10:
            printf("%d월은 10월입니다.", mm);
            break;
        case 11:
            printf("%d월은 11월입니다.", mm);
            break;
        case 12:
            printf("%d월은 12월입니다.", mm);
            break;
        default:
            printf("다시입력해주세요");

        }


        printf("\n\n");
    }
}

#include <stdio.h>
void main(int argc, char* argv[]) {

    printf("argc 매개변수==>%d\n", argc);

    for (int i = 0; i < argc; i++)
        printf("argc[%d] 매개변수==>%s\n", i, argv[i]);
}