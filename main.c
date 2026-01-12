#include <stdio.h>
//Atakan Korkmaz
//2420171028
// https://www.btkakademi.gov.tr/portal/certificate/validate?certificateId=zXztnvGb1y

void boloncuk_sirala(int dizi[], int n) {
    int i, j, gecici;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {

            if (dizi[j] > dizi[j + 1]) {
                gecici  = dizi[j];
                dizi[j] = dizi[j + 1];
                dizi[j + 1] = gecici;
            }
        }
    }
}

int ikili_arama(int dizi[], int n, int aranan) {
    int bas = 0;
    int son = n - 1;
    
    while (bas <= son) {

        int orta = bas + (son - bas) / 2;

        if (dizi[orta] == aranan)
            return orta;
        if (dizi[orta] < aranan)
            bas = orta + 1;
        else
            son = orta - 1;
    }
    return -1;
}

int main() {

    int sayilar[] = {10,28,35,42,34,73,49,22,72,81};
  
    int n = sizeof(sayilar) / sizeof(sayilar[0]);
    int i, arananSayi, sonuc;

    printf("Orijinal Dizi: \n");
    for (i = 0; i < n; i++) {
        printf("%d ", sayilar[i]);
    }
    printf("\n");

    boloncuk_sirala(sayilar, n);

    printf("Siralama sonrasi: \n");
    for (i = 0; i < n; i++) {
        printf("%d ", sayilar[i]);
    }
    printf("\n");

    printf("Dizide aramak istediginiz sayiyi girin: \n");
    scanf("%d", &arananSayi);

    sonuc = ikili_arama(sayilar, n, arananSayi);

    if (sonuc != -1) {
        printf("Basarili! %d sayisi dizinin %d. indeksinde bulundu. \n", arananSayi, sonuc);
    } else {
        printf("basarisis, %d sayisi dizide bulunamadi. \n", arananSayi);
    }

    return 0;
}