#include <stdio.h>

// Rehberdeki kişi için bir kalıp (Struct) oluşturuyoruz
struct Kisi {
    char ad[50];
    char tel[50];
};

void kisiEkle() {
     // Dosya işaretçisi (File Pointer) oluştur
    FILE *dosya;
    struct Kisi yeniKisi;

        //Dosyayı "EKLEME" (append - "a") modunda aç
    dosya = fopen("rehber.txt", "a");

    if (dosya == NULL) {
        printf("Dosya acilmadi!\n");
        return;
    }

     // Kullanıcıdan bilgileri al
    printf("Isim (Bosluksuz Girin): ");
    scanf("%s", yeniKisi.ad);

    printf("Telefon: ");
    scanf("%s", yeniKisi.tel);

//Dosyaya yaz (fprintf)
    fprintf(dosya, "%s, %s\n", yeniKisi.ad, yeniKisi.tel);

    //Dosyayı kapat (Çok önemli! Yoksa kaydedilmez)
    fclose(dosya);
    printf("Kisi rehbere kaydedildi!\n");
}

void rehberiListele() {
    FILE *dosya;
    struct Kisi okunanKisi;

        //Dosyayı "OKUMA" (read - "r") modunda aç
    dosya = fopen("rehber.txt", "r");

    if (dosya == NULL) {
        printf("Henuz kimse kaydedilmemis veya dosya yok!\n");
        return;
    }

        printf("\n--- REHBER LISTESI ---\n");

        //Dosyanın sonuna (End Of File - EOF) gelene kadar oku
    while(fscanf(dosya, "%s %s", okunanKisi.ad, okunanKisi.tel) != EOF) { // fscanf dosyadan veriyi çeker.
        printf("Isim: %s \t Tel: %s\n", okunanKisi.ad, okunanKisi.tel);
    }

    fclose(dosya);
    printf("----------------------\n");

    //Dosyayı kapat
}

int main() {
    int secim;

    while(1) {
        printf("\n1. Kisi Ekle\n");
        printf("2. Rehberi Listele\n");
        printf("3. Cikis\n");
        printf("Secim: ");
        scanf("%d", &secim);

                switch (secim) {
            case 1:
                kisiEkle();
                break;
            case 2:
                rehberiListele();
                break;
            case 3:
                printf("Cikis Yapiliyor...\n");
                return 0;
            default:
                printf("Gecerli Bir Secim Yapiniz!\n");
        }
    }
}
