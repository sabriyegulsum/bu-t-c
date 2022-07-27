#include <stdio.h>
void fonk(void);
int gid = 287; // global int tanımlaması

int main (void)
{

    printf("deneme 1.c gid değişken değeri= %d\n",gid);

    fonk();
    return 0;
}
extern int gid;
void fonk (void)
{
    printf("deneme.2.gid değişken değeri=%d",gid);
}
