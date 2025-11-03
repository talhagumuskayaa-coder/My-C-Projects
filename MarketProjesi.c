#include <stdio.h>

int main(){

    //Kahvaltılar:

    float ekmek;
    float yumurta;
    float peynir;
    float sut;
    float domates;
    float salatalik;
    float sucuk;
    float bal;
    float tahin;
    float helva;

    //Ürünler için bir adet fiyatı belirleyelim:

    float ekmekAdet= 15.25;
    float yumurtaAdet = 8.50;
    float peynirAdet = 30;
    float sutAdet = 25.50;
    float domatesAdet = 10;
    float salatalikAdet = 10;
    float sucukAdet = 80;
    float balAdet = 100;
    float tahinAdet = 75.50;
    float helvaAdet = 60;

        printf("Kac adet ekmek aldiniz?\n");
        scanf("%f", &ekmek);
         printf("Kac adet yumurta aldiniz?\n");
        scanf("%f", &yumurta);
         printf("Kac adet peynir aldiniz?\n");
        scanf("%f", &peynir);
         printf("Kac adet sut aldiniz?\n");
        scanf("%f", &sut);
         printf("Kac adet domates aldiniz?\n");
        scanf("%f", &domates);
         printf("Kac adet salatalik aldiniz?\n");
        scanf("%f", &salatalik);
         printf("Kac adet sucuk aldiniz?\n");
        scanf("%f", &sucuk);
         printf("Kac adet bal aldiniz?\n");
        scanf("%f", &bal);
         printf("Kac adet tahin aldiniz?\n");
        scanf("%f", &tahin);
         printf("Kac adet helva aldiniz?\n");
        scanf("%f", &helva);

        //Burda ise fiyatları adet başına göre hesap edip fişe yazdırıcam:

        float ekmekFiyat = ekmek * ekmekAdet;
        float yumurtaFiyat = yumurta * yumurtaAdet;
        float peynirFiyat = peynir * peynirAdet;
        float sutFiyat = sut * sutAdet;
        float domatesFiyat = domates * domatesAdet;
        float salatalikFiyat = salatalik * salatalikAdet;
        float sucukFiyat = sucuk * sucukAdet;
        float balFiyat = bal * balAdet;
        float tahinFiyat = tahin * tahinAdet;
        float helvaFiyat = helva * helvaAdet;

            //Burda kasa kısmına geçiyoruz:

        printf("-----------HOSGELDINIZ-----------\n\n");
        printf("-----------ALISVERIS FISI-----------\n\n");
        printf("Urun Adi\t\tAdet\t\tFiyat\n");
        printf("-----------------------------------------------\n");

        printf("Ekmek\t\t\t%.0f\t\t%.2f\n", ekmek, ekmekFiyat);
        printf("Yumurta\t\t\t%.0f\t\t%.2f\n", yumurta, yumurtaFiyat);
        printf("Peynir\t\t\t%.0f\t\t%.2f\n", peynir, peynirFiyat);
        printf("Sut\t\t\t%.0f\t\t%.2f\n", sut, sutFiyat);
        printf("Domates\t\t\t%.0f\t\t%.2f\n", domates, domatesFiyat);
        printf("Salatalik\t\t%.0f\t\t%.2f\n", salatalik, salatalikFiyat);
        printf("Sucuk\t\t\t%.0f\t\t%.2f\n", sucuk, sucukFiyat);
        printf("Bal\t\t\t%.0f\t\t%.2f\n", bal, balFiyat);
        printf("Tahin\t\t\t%.0f\t\t%.2f\n", tahin, tahinFiyat);
        printf("Helva\t\t\t%.0f\t\t%.2f\n", helva, helvaFiyat);

        printf("-----------------------------------------------\n");
        
        float toplamFiyat = ekmekFiyat + yumurtaFiyat + peynirFiyat + sutFiyat + domatesFiyat + salatalikFiyat + sucukFiyat + balFiyat + tahinFiyat + helvaFiyat;

        printf("GENEL TOPLAM:\t\t\t\t%.2f\n", toplamFiyat);
        printf("-----------------------------------------------\n\n");
        printf("-----------IYI GUNLER DILERIZ :)-----------");

    
    return 0;
}

/* ÖRNEK 
-----------HOSGELDINIZ-----------

-----------ALISVERIS FISI-----------

Urun Adi                Adet            Fiyat
-----------------------------------------------
Ekmek                   1               15.25
Yumurta                 1               8.50
Peynir                  1               30.00
Sut                     1               25.50
Domates                 1               10.00
Salatalik               1               10.00
Sucuk                   1               80.00
Bal                     1               100.00
Tahin                   1               75.50
Helva                   1               60.00
-----------------------------------------------
GENEL TOPLAM:                           414.75
-----------------------------------------------

-----------IYI GUNLER DILERIZ :)-----------
*/
