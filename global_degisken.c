#include <stdio.h>
int a;//global değişken

int fonk1(void)
{
    a = 20;
    printf("%d",a);
    return a;
}


int main()
{
    int a = 10;//int olmadığı için direk globaldaki a yı değiştiri
    printf("%d\n",a);
    fonk1();
    printf("%d\n",a);// a 20 oldu

    printf("%d",a);// global de değişmiş oldu !!!DİKKAT!!!
    return 0;
    
}