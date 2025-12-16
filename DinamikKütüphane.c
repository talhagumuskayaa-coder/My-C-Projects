#include <stdio.h>
#include <stdlib.h> // malloc ve free için ŞART!

struct Kitap {
    char ad[30];
    int sayfaSayisi;
};

int main() {
    struct Kitap *kutuphane; // Bu bir dizi değil, bir İŞARETÇİ (Pointer).
    int kitapSayisi, i;

        printf("\n--- DINAMIK KUTUPHANE ---\n");
        printf("Kac adet kitap gireceksiniz?: ");
        scanf("%d", &kitapSayisi);

    //"Bana (kitapSayisi * Bir Kitabın Boyutu) kadar yer ayır."
        kutuphane = (struct Kitap*) malloc(kitapSayisi * sizeof(struct Kitap));

            //Ya RAM dolduysa?
        if (kutuphane == NULL) {
            printf("Yetersiz bellek! Program kapatiliyor...\n");
            return 1;
        }   

        //Pointerları da normal dizi gibi [] ile kullanabiliriz.
        for (i = 0; i < kitapSayisi; i++) {
            printf("\n%d. Kitabin Adi: ", i + 1);
            scanf("%s", kutuphane[i].ad);

            printf("Sayfa Sayisi: ");
            scanf("%d", &kutuphane[i].sayfaSayisi);
        }
        //Listeleme
            printf("\n--- KITAP LISTESI ---\n");
        for (i = 0; i < kitapSayisi; i++) {
            printf("%d. Kitap: %s (%d sayfa)\n", i + 1, kutuphane[i].ad, kutuphane[i].sayfaSayisi);
        }
// Bunu yapmazsan o alan RAM'de kilitli kalır.
        free(kutuphane);
        printf("\nBellek temizlendi! Program kapatiliyor.\n");

        return 0;
     }
