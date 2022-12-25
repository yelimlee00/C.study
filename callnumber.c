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
    puts("###����ó ���� �� ###");

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
        default:printf("\n�߸��Է��߾��. �ٽ� �����ϼ���.");
        }
    }
    return;
}
void print_menu() {
    printf("\n\n");
    printf("1. ����ó ���\n");
    printf("2. ����ó ���\n");
    printf("3. ����ó ����\n");
    printf("4. ��\n");
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
        puts("\n\n**����ó ���Ͽ� ��ȣ�� �ϳ��� �����.\n");

    fclose(rfp);

}
void add_juso()
{
    struct address adr = { "","","" };
    char wstr[200] = "";
    FILE* wfp;

    wfp = fopen(fname, "a");

    printf("�̸��� �Է�==>");
    gets(adr.name);
    printf("���̸� �Է�==>");
    gets(adr.age);
    printf("��ȭ��ȣ�� �Է�==>");
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
        puts("\n ����ó ������ �����ϴ�.\n");
        return;
    }
    printf("\n������ �� ��ȣ��?");
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
            printf("%d ���� �����Ǿ����ϴ�.\n", del_line);

        if (feof(rfp))
            break;
    }
    fclose(rfp);

    wfp = fopen(fname, "w");

    for (i = 0; i < count; i++)
        fputs(read_str[i], wfp);

    fclose(wfp);
}