#include <stdio.h>
//1. Khai báo biến
int main() {
    int SoTinChi = 5; //số nguyên
    float DiemTrungBinh = 3.6; //số thực
    char XepLoai = 'A'; //ký tự (Phải để trong nháy đơn)
//2. Xuất giá trị của biến ra màn hình
//Dùng ký hiệu % để giữ chỗ cho biến.
printf("Tong so tin chi: %d\n", SoTinChi);
printf("Muc Tieu diem mon giai tich: %.1f\n", DiemTrungBinh); //%.1f để lấy 1 chữ số sau dấu phẩy
printf("Xep loai: %c\n", XepLoai);

return 0;
}