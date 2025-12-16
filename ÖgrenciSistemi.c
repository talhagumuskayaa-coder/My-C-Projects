#include <stdio.h>
//Kendi veri tipimizi (Taslağımızı) oluşturuyoruz.
    struct Ogrenci {
        char ad[50];
        int numara;
        int vize;
        int final;
        float ortalama;
    };
    
    int main() {
//Bu taslağı kullanarak gerçek bir öğrenci değişkeni oluşturuyoruz.
        struct Ogrenci ogr1;

            printf("--- OGRENCI KAYIT SISTEMI ---\n");

            // Verileri alma (Nokta operatörüne dikkat!)
        printf("Ogrenci Adi: ");
        scanf("%s", ogr1.ad); // String olduğu için & işaretine gerek yok (dizi adı adrestir)

        printf("Ogrenci Numarasi: ");
        scanf("%d", &ogr1.numara); // Int olduğu için & gerekli

        printf("Vize Notu: ");
        scanf("%d", &ogr1.vize);

        printf("Final Notu: ");
        scanf("%d", &ogr1.final);

            ogr1.ortalama = (0.4 * ogr1.vize) + (0.6 * ogr1.final);


            //Karne Yazdırma
               printf("\n--- KARNE ---\n");
            printf("Sayin %s (%d), \n", ogr1.ad, ogr1.numara);
            printf("Vize Notunuz: %d, Final Notunuz: %d\n", ogr1.vize, ogr1.final);
            printf("Yil Sonu Ortalamaniz: %f\n", ogr1.ortalama);

            if (ogr1.ortalama >= 50) {
                printf("Gectiniz Tebrikler!\n");
            } else {
                printf("Durum: KALDI\n");
            }

            return 0;
    }
