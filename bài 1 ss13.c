#include <stdio.h>
#include <string.h>

// Hàm in menu
void inMenu() {
    printf("\nMENU:\n");
    printf("1. Nhap chuoi ky tu\n");
    printf("2. In ra do dai chuoi va noi dung chuoi vua nhap\n");
    printf("3. In ra chuoi dao nguoc\n");
    printf("4. In ra so luong chu cai trong chuoi\n");
    printf("5. In ra so luong chu so trong chuoi\n");
    printf("6. In ra so luong ky tu dac biet trong chuoi\n");
    printf("7. Thoat\n");
}

int main() {
    char chuoi[100];
    int choice;

    do {
        inMenu(); // Hien thi menu

        printf("Chon chuc nang (1-7): ");
        scanf("%d", &choice);

        // Thuc hien các chuc nang tuong ung voi lua chon
        switch (choice) {
            case 1:
                // Chuc nang 1: Nhap chuoi ki tu 
                printf("Nhap chuoi ky tu: ");
                scanf("%s", chuoi);
                break;
            case 2:
                // Chuc nang 2: In ra do dài chuoi và noi dung chuoi vua nhap
                printf("Do dai cua chuoi: %lu\n", strlen(chuoi));
                printf("Noi dung chuoi: %s\n", chuoi);
                break;
            case 3:
                // Chuc nãng 3: In ra chuoi doo nguoc
                printf("Chuoi dao nguoc: ");
                for (int i = strlen(chuoi) - 1; i >= 0; i--) {
                    printf("%c", chuoi[i]);
                }
                printf("\n");
                break;
            case 4:
                // Chuc nang 4: In ra so luong chu cái trong chuoi
                {
                    int count = 0;
                    for (int i = 0; i < strlen(chuoi); i++) {
                        if (isalpha(chuoi[i])) {
                            count++;
                        }
                    }
                    printf("So luong chu cai trong chuoi: %d\n", count);
                }
                break;
            case 5: 
                // Chuc nang 5: In ra so luong chu so trong chuoi
                {
                    int count = 0;
                    for (int i = 0; i < strlen(chuoi); i++) {
                        if (isdigit(chuoi[i])) {
                            count++;
                        }
                    }
                    printf("So luong chu so trong chuoi: %d\n", count);
                }
                break;
            case 6:
                // Chuc nang 6: In ra so luong ki tu dac biet trong chuoi
                {
                    int count = 0;
                    for (int i = 0; i < strlen(chuoi); i++) {
                        if (!isalnum(chuoi[i])) {
                            count++;
                        }
                    }
                    printf("So luong ky tu dac biet trong chuoi: %d\n", count);
                }
                break;
            case 7:
                // Chuc nang 7: Thoát
                printf("Ket thuc chuong trinh.\n");
                break;
            default:
                // Lua chon không hop le 
                printf("Lua chon khong hop le. Vui long chon lai.\n");
                break;
        }

    } while (choice != 7);

    return 0;
}

