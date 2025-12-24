#include <stdio.h>

int main(){

    float kilo;
    float boy;
    float VKI;

    printf("----------------VKI HESAPLAYICI----------------\n\n");

    printf("Kilonuzu Giriniz: ");
    scanf("%f", &kilo);

    printf("Boyunuzu Giriniz: ");
    scanf("%f", &boy);
    printf("--------------------------\n");

    VKI = kilo / (boy * boy);

     if (VKI > 0 && VKI < 18.5) {
        printf("Saglik Durumunuz: ZAYIF\n");
        printf("--------------------------");
    }else if (VKI >= 18.5 && VKI < 24.9) {
        printf("Saglik Durumunuz: SAGLIKLI\n");
        printf("--------------------------");
    }else if (VKI >= 25 && VKI < 29.9) {
        printf("Saglik Durumunuz: SİSMAN\n");
        printf("--------------------------");
    }else if (VKI >= 30 && VKI < 39.9) {
        printf("Saglik Durumunuz: OBEZ\n");
        printf("--------------------------");
    }else if (VKI >= 40) {
        printf("Saglik Durumunuz: ASIRI OBEZ\n");
        printf("--------------------------");
    } else {
        printf("Lutfen gecerli bir boy ve kilo orani giriniz\n");
        printf("---------------------------------------------");
    }

    //Kilogram örn: 60
    //Boy örn: 1.80

    return 0;
}
