#include <stdio.h>
#include <stdlib.h>
/*该程序的作用是验证操作符的优先级，>>的优先级小于+号*/
int main()
{
    int a=8>>1+3;
    int b=8>>1+1;
    int c=1;
    int d=1;
    c=c+d<<2;
    printf("a is %d,b is %d,c is %d\n",a,b,c);
    return 0;
}
