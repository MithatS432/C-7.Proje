#include <stdio.h>

int main() {
    int sayi, i = 0;

    printf("Bir sayi girin: ");
    scanf("%d", &sayi);

    // if-else if-else
    if (sayi > 0) {
        printf("Pozitif bir sayi girdiniz.\n");
    } else if (sayi < 0) {
        printf("Negatif bir sayi girdiniz.\n");
    } else {
        printf("Sifir girdiniz.\n");
    }

    // switch
    switch (sayi % 2) {
        case 0:
            printf("Sayi cifttir.\n");
            break;
        case 1:
        case -1:
            printf("Sayi tektir.\n");
            break;
        default:
            printf("Hata: switch kontrolu basarisiz.\n");
    }

    // for döngüsü
    printf("1'den 5'e kadar sayilar (for): ");
    for (int j = 1; j <= 5; j++) {
        printf("%d ", j);
    }
    printf("\n");

    // while döngüsü
    printf("1'den 5'e kadar sayilar (while): ");
    while (i < 5) {
        printf("%d ", ++i);
    }
    printf("\n");

    // do-while döngüsü
    int k = 0;
    printf("1'den 5'e kadar sayilar (do-while): ");
    do {
        printf("%d ", ++k);
    } while (k < 5);
    printf("\n");

    // break ve continue
    printf("Break ve continue ornegi:\n");
    for (int m = 1; m <= 10; m++) {
        if (m == 5) continue;  // 5 atlanýr
        if (m == 8) break;     // 8 olunca döngü biter
        printf("%d ", m);
    }
    printf("\n");

    return 0;
}
