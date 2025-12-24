#include <stdio.h>

int main() {

    char islem;
    double sayi1;
    double sayi2;
    double sonuc;
+
    printf("---------------HESAP MAKINESI---------------\n");
    printf("--------------------------------------------\n");

            printf("Lutfen yapmak istediginiz islem turunu seciniz: (+ - * /)\n");
            scanf("%c", &islem);

        printf("1: ");
        scanf("%lf", &sayi1);

        printf("2: ");
        scanf("%lf", &sayi2);

    switch (islem) {
        case '+':
            sonuc = sayi1 + sayi2;
             printf("SONUC: %.2lf",sonuc);
            break;
        case '-':
            sonuc = sayi1 - sayi2;
            printf("SONUC: %.2lf", sonuc);  
            break;
        case '*':
            sonuc = sayi1 * sayi2;
            printf("SONUC: %.2lf", sonuc);  
            break;
        case '/':
            sonuc = sayi1 / sayi2;
            printf("SONUC: %.2lf", sonuc);  
            break;
        default:
            printf("Lutfen gecerli bir operator giriniz.\n");
    }

    return 0;
}
