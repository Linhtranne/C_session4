#include <stdio.h>

int main() {
    float luong_co_ban, ngay_cong_thuc_te;
    float luong, ngay_cong = 26.0;

    printf("Nhap luong co ban: ");
    scanf("%f", &luong_co_ban);

    printf("Nhap ngay cong thuc te: ");
    scanf("%f", &ngay_cong_thuc_te);

    if (ngay_cong_thuc_te <= ngay_cong) {
        luong = luong_co_ban * (ngay_cong_thuc_te / ngay_cong);
    } else {
        luong = luong_co_ban * (ngay_cong / ngay_cong) + luong_co_ban * 1.5 * ((ngay_cong_thuc_te - ngay_cong) / ngay_cong);
    }

    printf("Luong cua nhan vien la: %.2f\n", luong);

    return 0;
}