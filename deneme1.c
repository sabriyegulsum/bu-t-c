#include <stdio.h>

void fonk(void);
int gid = 287; //global int tanımlaması

int main(void)
{
    printf("deneme1.c gid değişken değeri = %d",gid);
    fonk();
    return 0;
}
extern int gid;
void fonk(void)
{
    printf("deneme2.c gid değişken değeri = %d",gid);
}