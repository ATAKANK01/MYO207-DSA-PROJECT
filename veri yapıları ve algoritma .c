#include <stdio.h>
//Atakan Korkmaz
//2420171028
//BTK Akedemi SERTİFİKASI: https://www.btkakademi.gov.tr/api/service/v1/employee/certificates/issued/download/230397859?token=eyJhbGciOiJSUzI1NiJ9.eyJzdWIiOiIyMzk2MjE5IiwiZG9tYWluIjoiQlRLIiwiaXNzIjoiS0IiLCJwaWQiOjIzOTg2MTksIm9pZCI6NTEsImV4cCI6MTc3MDc0MzAwMiwidXVpZCI6IjdmMTljYTA5LTlkNGItNDNhOS1iZjcwLTAyMTIxZTQ1ZmY4MSIsImlhdCI6MTc2Mjk2NzAwMiwianRpIjoiNDgxZTdkMGMtMWU4NC00ZTljLThmMzEtZDVhYjQxNDBmNGFkIn0.KrITLqB8qYE1aTazbKafV4VIOLB5OvTTfk2pGXKghcXfpn4HbL59Ls1a9cWmB1dRwW9wc4SxoRvZTHf55PL5lCgy1AUlubpJYqUe3gBqGVFwFCPBw6iknHepdeUk5bhCMFh9c3W2dvH9UJWcCbPo2sXY8YcydqnlA496cJ71WNvRl6QgOUuXjViZWWiY3Hi2KgfQ2qZTpmI8NQ6ef9SiUHlM5Ao5Mk0ilWP3US24y2ubl8QSTbeq7eCY4b9zCrXhG3yiyGBlsB2nGu3xG025eKdkhQFFKHL3jVwGQ1XoS2N3dtQ8AeS0CIadyY5SQnCuIacNb8Zwzo1l7XK0HEHtzg

void bubbleSort(int dizi[], int n) {
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

int binarySearch(int dizi[], int n, int aranan) {
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

    int sayilar[] = {10,28,35,49,34,73,49,22,72,81};
  
    int n = sizeof(sayilar) / sizeof(sayilar[0]);
    int i, arananSayi, sonuc;

    printf("Orijinal Dizi: \n");
    for (i = 0; i < n; i++) {
        printf("%d ", sayilar[i]);
    }
    printf("\n");

    bubbleSort(sayilar, n);

    printf("Siralama sonrasi: \n");
    for (i = 0; i < n; i++) {
        printf("%d ", sayilar[i]);
    }
    printf("\n");

    printf("Dizide aramak istediginiz sayiyi girin: \n");
    scanf("%d", &arananSayi);

    sonuc = binarySearch(sayilar, n, arananSayi);

    if (sonuc != -1) {
        printf("Basarili! %d sayisi dizinin %d. indeksinde bulundu. \n", arananSayi, sonuc);
    } else {
        printf("basarisis, %d sayisi dizide bulunamadi. \n", arananSayi);
    }

    return 0;
}