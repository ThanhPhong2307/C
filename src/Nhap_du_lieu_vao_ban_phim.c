#include <stdio.h>

int main() {
    float giaitich, vldc1, diemtrungbinh;
    printf("Nhap diem giai tich: ");
    scanf("%f", &giaitich);

    printf("Nhap diem vldc1");
    scanf("%f", &vldc1);
    diemtrungbinh = (giaitich + vldc1)/2;
    printf("---------------------------\n");
    printf("Diem trung binh du kien: %.2f\n", diemtrungbinh);

    return 0;
}
