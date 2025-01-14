#include <stdio.h>

int main()
{
    int sayi, i;

    printf("Bir sayi girin: \n");
    scanf("%d", &sayi);

    printf("%d sayisinin carpim tablosu\n", sayi);
    for (i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", sayi, i, sayi * i);
    }

    return 0;
}