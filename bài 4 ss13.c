#include <stdio.h>
#include <string.h>
int main() {
    char chuoi[100];
    printf("Nhap chuoi ky tu: ");
    scanf("%s", chuoi);
    int doDaiLonNhat = 0; // Ðo dài cua chuoi ki tu phân biet lon nhat
    int batDauChuoiPhanBiet = 0; // Vi trí bat dau cua chuoi ki tu phân biet lon nhat
    for (int i = 0; i < strlen(chuoi); i++) {
        int doDaiHienTai = 1; // Ðo dài cua chuoi ki tu phân biet hien tai
        for (int j = i - 1; j >= 0; j--) {
            if (chuoi[i] == chuoi[j]) {
                break; // Neu ki tu trùng, thoát vong lap
            }
            doDaiHienTai++; // Neu không trùng, tang do dài
        }
        if (doDaiHienTai > doDaiLonNhat) {
            doDaiLonNhat = doDaiHienTai;
            batDauChuoiPhanBiet = i - doDaiHienTai + 1; // Cap nhat vi trí bat dau
        }
    }
    printf("Chuoi phan biet co do dai lon nhat la %d: ", doDaiLonNhat);
    for (int i = batDauChuoiPhanBiet; i < batDauChuoiPhanBiet + doDaiLonNhat; i++) {
        printf("%c", chuoi[i]);
    }
    printf("\n");
    return 0;
}

