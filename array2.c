#include <stdio.h>

void main() {
    char data[3][100];
    int i;

    for (i = 0; i < 3; i++) {
        printf("%d ��° ���ڿ�:", i + 1);
        gets(data[i]);
    }
    printf("\n-�Է°� �ݴ�� ���(�������迭)-\n");
    for (i = 2; i >= 0; i--) {
        printf("%d:%s\n", i + 1, data[i]);

    }
}
