#include <stdio.h>
#include <stdlib.h>
//只是想验证打印次数,并无多大用处
int main()
{
    int a=1;
    int i=0;
    for(;i<10;i++)
    {
        printf("%d\n",a);
        a++;
    }
    return 0;
}
