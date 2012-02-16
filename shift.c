#include <stdio.h>
#include <stdlib.h>

//该函数的作用是通过移位操作获得变量的不同位

int main()
{
    int a=0x2c3d4e5f;
    printf("a:%x\n",a);
    printf("1-2:%x\n",a>>24);
    printf("3-4:%x\n",(a<<8)>>24);
    printf("5-6:%x\n",(a<<16)>>24);
    printf("7-8:%x\n",(a<<24)>>24);
    return 0;
}
