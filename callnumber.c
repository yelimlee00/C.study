#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct address {
    char name[30];
    char age[5];
    char phone[15];
};

void print_menu();
void view_juso();
void add_juso();
void delete_juso();

const char* fname = "C:\\Temp\\lee_juso.txt";

void main() {
    char select = 0;
    puts("###연락처 관리 툴 ###");

    while (select != 4)
    {
        print_menu();
        select = getch();

        switch (select)
        {
        case '1':view_juso();
            break;
        case '2':add_juso();
            break;
        case '3':delete_juso();
            break;
        case '4':return;
            break;
        default:printf("\n잘못입력했어요. 다시 선택하세요.");
        }
    }
    return;
}
void print_menu() {
    printf("\n\n");
    printf("1. 연락처 출력\n");
    printf("2. 연락처 등록\n");
    printf("3. 연락처 삭제\n");
    printf("4. 끝\n");
}

void view_juso()
{
    char str[200] = "";
    FILE* rfp, * wfp;
    int i;

    rfp = fopen(fname, "r");

    if (rfp == NULL)
    {
        wfp = fopen(fname, "w");
        fclose(wfp);
        rfp = fopen(fname, "r");
    }
    for (i = 1;; i++) {
        fgets(str, 200, rfp);

        if (feof(rfp))
            break;
        printf("%2d: %s", i, str);
    }

    if (i == 1)
        puts("\n\n**연락처 파일에 번호가 하나도 없어요.\n");

    fclose(rfp);

}
void add_juso()
{
    struct address adr = { "","","" };
    char wstr[200] = "";
    FILE* wfp;

    wfp = fopen(fname, "a");

    printf("이름을 입력==>");
    gets(adr.name);
    printf("나이를 입력==>");
    gets(adr.age);
    printf("전화번호를 입력==>");
    gets(adr.phone);

    strcat(wstr, adr.name);
    strcat(wstr, "\t");
    strcat(wstr, adr.age);
    strcat(wstr, "\t");
    strcat(wstr, adr.phone);
    strcat(wstr, "\t");

    fputs(wstr, wfp);

    fclose(wfp);
}

void delete_juso()
{
    char read_str[50][200] = { "", };

    char str[200] = "";
    FILE* rfp, * wfp;
    int del_line, i, count = 0;

    rfp = fopen(fname, "r");

    if (rfp == NULL) {
        puts("\n 연락처 파일이 없습니다.\n");
        return;
    }
    printf("\n삭제할 행 번호는?");
    scanf_s("%d", &del_line);

    for (i = 0; i < 50; i++)
    {
        strcpy(str, "");
        fgets(str, 200, rfp);

        if (i + 1 != del_line)
        {
            strcpy(read_str[i], str);
            count++;
        }
        else
            printf("%d 행이 삭제되었습니다.\n", del_line);

        if (feof(rfp))
            break;
    }
    fclose(rfp);

    wfp = fopen(fname, "w");

    for (i = 0; i < count; i++)
        fputs(read_str[i], wfp);

    fclose(wfp);
}