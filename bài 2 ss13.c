#include <stdio.h>
#include <string.h>

// Hàm in menu
void inMenu() {
    printf("\nMENU:\n");
    printf("1. Nhap chuoi ky tu\n");
    printf("2. In ra noi dung chuoi\n");
    printf("3. Nhap vao 1 ky tu, dem so lan xuat hien trong chuoi\n");
    printf("4. Nhap vao 2 ky tu, thay the ky tu thu 2 thanh ky tu thu 1 trong chuoi\n");
    printf("5. Nhap vao 1 ky tu, xoa bo cac ky tu trong chuoi\n");
    printf("6. Thoat\n");
}

int main() {
    char chuoi[100];
    int choice;
 
    do {
        inMenu(); // Hien thi menu

        printf("Chon chuc nang (1-6): ");
        scanf("%d", &choice);

        // Thuc hien các chuc nang tuong ung voi lua chon
        switch (choice) {
            case 1:
                // Chuc nang 1: Nhap chuoi ki tu 
                printf("Nhap chuoi ky tu: ");
                scanf("%s", chuoi);
                break;
            case 2:
                // Chuc nang 2: In ra noi dung chuoi
                printf("Noi dung chuoi: %s\n", chuoi);
                break;
            case 3:
                // Chuc nang 3: Nhap vào 1 ki tu, dem so lan xuat hien ki tu trong chuoi
                {
                    char kyTu;
                    printf("Nhap vao 1 ky tu: ");
                    scanf(" %c", &kyTu);

                    int count = 0;
                    for (int i = 0; i < strlen(chuoi); i++) {
                        if (chuoi[i] == kyTu) {
                            count++;
                        }
                    }

                    printf("So lan xuat hien cua ky tu %c trong chuoi la: %d\n", kyTu, count);
                }
                break;
            case 4:
                // Chuc nang 4: Nhap vào 2 ki tu, thay the các ki tu thu 2 trong chuoi thành ki tu thu 1
                {
                    char kyTu1, kyTu2;
                    printf("Nhap vao 2 ky tu: ");
                    scanf(" %c %c", &kyTu1, &kyTu2);

                    for (int i = 0; i < strlen(chuoi); i++) {
                        if (chuoi[i] == kyTu2) {
                            chuoi[i] = kyTu1;
                        }
                    }

                    printf("Chuoi sau khi thay the: %s\n", chuoi);
                }
                break;
            case 5:
                // Chuc nang 5: Nhap vào 1 ki tu, xóa bo các ki tu trong chuoi
                {
                    char kyTuXoa;
                    printf("Nhap vao 1 ky tu: ");
                    scanf(" %c", &kyTuXoa);

                    int j = 0;
                    for (int i = 0; i < strlen(chuoi); i++) {
                        if (chuoi[i] != kyTuXoa) {
                            chuoi[j++] = chuoi[i];
                        }
                    }
                    chuoi[j] = '\0';

                    printf("Chuoi sau khi xoa bo ky tu %c: %s\n", kyTuXoa, chuoi);
                }
                break;
            case 6:
                // Chuc nang 6: Thoát
                printf("Ket thuc chuong trinh.\n");
                break;
            default:
                // Lua chon không hop le 
                printf("Lua chon khong hop le. Vui long chon lai.\n");
                break;
        }

    } while (choice != 6);

    return 0;
}

