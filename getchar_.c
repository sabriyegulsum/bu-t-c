#include <stdio.h>
int main()
{
    char a ;
    printf("bir karakter giriniz: ");
    a=getchar_unlocked();   //getche yerine bunu kullanıyor.... getche hem alır hemde basar...hem sever hem döver :)))
    printf("girdiğiniz karekter: ");
    putchar(a);
    return 0;
    
}