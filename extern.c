#include <stdio.h>

extern int i = 10;// extern i mainin yukarısında tanımlayınca hata vermiyo

void fonk(void){

    printf("i= %d\n",i);// fonk üstte extern var onu kullanır
    }



int main(void)
{
    int i = 5;
    printf("i= %d\n",i);
    fonk();
    printf("i= %d",i);
    return 0;

}
