#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number;
    int k;
    int m;
    k = 7;
    printf("----HOSGELDINIZ----\n");
    printf("1 ile 100 arasinda bir sayi tuttuk.\n");
    printf("Dogru sayiyi tahmin etmek icin 7 hakkiniz var !!!\n");
    srand(time(NULL));
    number = rand() % 100 +1;

    while(k>=1)
    {
        printf("%d hakkin kaldi\n",k);
        printf("Sence sayi kac ? ");
        scanf("%d",&m);
        if(m == number)
        {
            printf("\nTEBRIKLER KAZANDIN !");
            return 0;
        }
        else if(number >= m && k != 1)
            printf("ARTTIIIRR !\n");
        else if(number <= m && k != 1)
            printf("AZALLLT !\n");
        k--;
    }
    printf("\nHAK BITTI ! KAYBETTIN !");
    return 0;
}
