#include <stdio.h>
#include <malloc.h>
#include <string.h>

void main(int id[]) {
    float* p;
    float avg;
    int i;
    float hap = 0;
    int cnt;


    while (1)
    {
        printf("�й��� �Է��ϼ���\n");
        scanf_s("%d", &id);
        if (id != 0) {
            printf("���� ������� �Է��Ͻÿ�\n");
            scanf_s("%d", &cnt);

            p = ((float*)malloc(sizeof(char) * cnt) + 1);
            for (i = 0; i < cnt; i++)
            {
                printf("%d��°  ����:", i + 1);
                scanf_s("%f", p + i);

            }
            for (i = 0; i < cnt; i++)
                hap = hap + *(p + i);

            for (i = 0; i < cnt; i++)
                avg = hap / (float)cnt;
            printf("����==>%.2f", hap);
            printf("���==>%.2f", avg);
            for (i = 0; i < cnt; i++) {
                for (int j = 0; j < cnt; j++) {
                    if (id[i] > id[j])
                        id[i]++;
                    else if (id[i] < id[j])
                        id[i]++;
                    printf("���� ���� �й��� %d�Դϴ�.", id[i]);
                }
            }

        }
        else {
            break;
        }

    }
    system("pause");
    return 0;
}