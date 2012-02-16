#include <stdio.h>
#include <math.h>

int main()
{
    int a=1;
    for(;a<=100;a++)
    {
        printf("%d\t",a);
    }
    printf("\n");
    for(a=1;a<=100;a++)
    {
        printf("%d\t",(int)(sqrt(a)*10));
    }
    printf("\n");   
    return 0;
}
