#include <stdio.h>
#include <string.h>
int main() {
    char chuoi[100];
    printf("Nhap chuoi ky tu: ");
    scanf("%s", chuoi);
    // Khoi tao mang luu so lan xuat hien cua moi ki tu 
    int soLanXuatHien[256] = {0}; // Mang có 256 phan tu tuong ung voi bang ma ASCII
    // Duyet qua chuoi và tãng so lan xuat hien cua moi ki tu 
    for (int i = 0; i < strlen(chuoi); i++) {
        char kyTu = chuoi[i];
        soLanXuatHien[kyTu]++;
    }
    // In ra so lan xuat hien cua moi ki tu 
    printf("Ket qua:\n");
    for (int i = 0; i < 256; i++) {
        if (soLanXuatHien[i] > 0) {
            printf("%c: %d\n", i, soLanXuatHien[i]);
        }
    }
    return 0;
}

