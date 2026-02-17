#include <stdio.h>

int main() {
    float diem;
    printf("Nhap diem:");
    scanf("%f", &diem);

    if (diem >= 4.0) {
        //neu diem 4.0 tro len
        printf("Qua mon roi con vk\n");
    } else {
        // Neu diem nho hon 4.0
        printf("Hoc lai chet me may di thang lon!\n");

    }
    return 0;
}
