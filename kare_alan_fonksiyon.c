#include <stdio.h>
float kare (float a)
{
    return a*a;
}


int main()
{
    int sayi;
    for(sayi=1; sayi<=10; sayi++)
    {
        printf("%d sayısının karesi: %f\n",sayi,kare(sayi));

    }
    printf("\n%.2f",kare(4.5));
    return 0;
}
