#include <time.h> // time() fonksiyonunu entegre edebilmek için
#include <stdlib.h> 
#include <stdio.h>

int main() {
    //Gerekli Değişkenleri Atayarak Başlıyorum.
    int tahmin, rastgeleSayi;

    srand(time(NULL));

//Burda Rastgele Tutulması İstenilcek Sayımızın 1 ve 100 Arasında Olmasını Sağlıyorum.
    rastgeleSayi = (rand() % 100) + 1;

        printf("\n--- SAYI TAHMIN OYUNU ---\n");
        printf("--------------------------------\n");

        printf("1 ve 100 arası bir sayı tuttum bakalım bulabilicek misin...\n");
    printf("********************************************************\n");


        // do-while Döngüsü Tahmin Doğru Sayıya Eşit Olmadığı Sürece Loop'u Aktif Halde Kullanıcak.

    do {
        printf("Lutfen Bir Sayi Tahmininde Bulunun: ");
        scanf("%d", &tahmin);

            //Burda İse Tahminin Bulunması İçin İf-Else Mekanizması ile Kullanıcıya Yardımcı Oluyoruz.

        if (tahmin < rastgeleSayi) {
            printf("Tahmininiz Sayidan Kucuk!\n");
        } else if (tahmin > rastgeleSayi) {
            printf("Tahmininiz Sayidan Buyuk\n");
        } else {
            printf("Tebrikler! Dogru Sayiyi Buldunuz.\n");
        }

    } while (tahmin != rastgeleSayi); // Doğru Sayıya Eşit Olmadığı Sürece Döngü Devam Etsin.

    return 0;
}
