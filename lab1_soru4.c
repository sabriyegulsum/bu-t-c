#include <stdio.h>

void func(void);
void func_sta(void);

int main(void)
{
    func();
    func_sta();
    putchar('\n');
    func();
    func_sta();
    return 0;
}

void func (void)
{
     int id = 1;
    printf("func id değişken değeri: %d\n",id);
    id+=21;
    printf("func id değişken değeri: %d\n",id);
}

void func_sta (void)
{
    static int id = 1;
    printf("func_sta id değeri: %d\n",id);
    id+=21;
    printf("func_sta id değeri: %d\n",id);

}