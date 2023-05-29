#include<stdio.h>

int pow(int m, int n)
{
    if(n==0)
    return 1;
    else
    return pow(m,n-1)*m;
}

int main()
{
    int r,f,d;
    d=pow(3,2);
    printf("%d",d);
}
