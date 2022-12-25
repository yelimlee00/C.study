#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <float.h>




void sales(double stock, double unit_cost);

void main() {

    double input, unit_cost, stock;

    while (1) {
        printf("몸무게와 키를 입력하세요.");

        scanf_s("1f1f", &input, &unit_cost);

        stock = input;
        double m = 0;
        double f = 0;
        int a;
        printf("여성이면 1 남성이면 2");
        scanf_s("%d", &a);
        if (a == 1) {
            sales(stock, unit_cost);
            m = ((float)7 * input) - 128 * (input / unit_cost);
        }
        else if (m > 23) {
            printf("과체중입니다.");
        }
        else {
            printf("정상체중입니다.");
        }

        if (a == 2) {
            sales(stock, unit_cost);
            f = (1.1 * input) - 128 * (input / unit_cost);
        }
        else if (m > 23) {
            printf("과체중입니다.");
        }
        else {
            printf("정상체중입니다.");
            return;
        }
    }
}

