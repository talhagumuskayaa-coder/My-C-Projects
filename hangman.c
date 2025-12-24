#include <string.h>
#include <stdio.h>
#include <ctype.h>

int main() {
//Değişkenleri Hazırla
    char gizliKelime[] = "YAZILIM";
    int kelimeUzunlugu = strlen(gizliKelime);

    // Görünen kelimeyi tutacak dizi (Kelime uzunluğu + 1 karakter - bitiş karakteri için)
    char gorunenKelime[20];

    int can = 5;
    int i;
    int oyunBitti = 0; //0: Devam , 1: Kazandı

        //Görünen kelimeyi * ile doldur
    for (i = 0; i < kelimeUzunlugu; i++) {
        gorunenKelime[i] = '*'; 
    }
    gorunenKelime[kelimeUzunlugu] = '\0'; //C'de metinlerin sonuna mutlaka bu konur!

    printf("\n---ADAM ASMACA ---\n");

//Oyun Döngüsü
    while (can > 0 && oyunBitti == 0) {
        printf("\nKelime: %s\n", gorunenKelime);
        printf("Kalan Can: %d\n",can);
        printf("Harf Giriniz: ");
        
        char tahmin;
        scanf(" %c", &tahmin);
        tahmin = toupper(tahmin); //Girilen harfi büyüt (kucuk harf girilse bile)

        int bildiMi = 0; //Bu turda doğru bildi mi kontrolü


    //Harfi dizide ara
        for (i = 0; i < kelimeUzunlugu; i++) {
            if (gizliKelime[i] == tahmin) {
                //Eğer harf daha önce açılmamışsa güncelle
                if (gorunenKelime[i] == '*') {
                    gorunenKelime[i] = tahmin;
                    bildiMi = 1;
                }
            }
        }

        if (bildiMi == 1) {
            printf("Dogru Tahmin!\n");
        } else {
            printf("Yanlis Tahmin!\n");
            can--;
        }

        //Kazanma kontrolü
        //'strcmp'iki metni karşılaştırır. 0 dönerse metinler aynıdır.
        if (strcmp(gizliKelime, gorunenKelime) == 0) {
            oyunBitti = 1;
        }
    }

    //Sonuç Ekranı
    if (oyunBitti == 1) {
        printf("Tebrikler! Kelime: %s\n", gizliKelime);
    } else {
        printf("Kaybettiniz! Kelime su idi: %s\n", gizliKelime);
    }

    return 0;
}
