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
        printf("���Է�:");
        scanf_s("%d", &mm);

        switch (mm) {
        case 1:
            printf("%d���� 1���Դϴ�.", mm);
            break;
        case 2:
            printf("%d���� 2���Դϴ�.", mm);
            break;
        case 3:
            printf("%d���� 3���Դϴ�.", mm);
            break;
        case 4:
            printf("%d���� 4���Դϴ�.", mm);
            break;
        case 5:
            printf("%d���� 5���Դϴ�.", mm);
            break;
        case 6:
            printf("%d���� 6���Դϴ�.", mm);
            break;
        case 7:
            printf("%d���� 7���Դϴ�.", mm);
            break;
        case 8:
            printf("%d���� 8���Դϴ�.", mm);
            break;
        case 9:
            printf("%d���� 9���Դϴ�.", mm);
            break;
        case 10:
            printf("%d���� 10���Դϴ�.", mm);
            break;
        case 11:
            printf("%d���� 11���Դϴ�.", mm);
            break;
        case 12:
            printf("%d���� 12���Դϴ�.", mm);
            break;
        default:
            printf("�ٽ��Է����ּ���");

        }


        printf("\n\n");
    }
}

#include <stdio.h>
void main(int argc, char* argv[]) {

    printf("argc �Ű�����==>%d\n", argc);

    for (int i = 0; i < argc; i++)
        printf("argc[%d] �Ű�����==>%s\n", i, argv[i]);
}