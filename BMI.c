#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <float.h>




void sales(double stock, double unit_cost);

void main() {

    double input, unit_cost, stock;

    while (1) {
        printf("�����Կ� Ű�� �Է��ϼ���.");

        scanf_s("1f1f", &input, &unit_cost);

        stock = input;
        double m = 0;
        double f = 0;
        int a;
        printf("�����̸� 1 �����̸� 2");
        scanf_s("%d", &a);
        if (a == 1) {
            sales(stock, unit_cost);
            m = ((float)7 * input) - 128 * (input / unit_cost);
        }
        else if (m > 23) {
            printf("��ü���Դϴ�.");
        }
        else {
            printf("����ü���Դϴ�.");
        }

        if (a == 2) {
            sales(stock, unit_cost);
            f = (1.1 * input) - 128 * (input / unit_cost);
        }
        else if (m > 23) {
            printf("��ü���Դϴ�.");
        }
        else {
            printf("����ü���Դϴ�.");
            return;
        }
    }
}

