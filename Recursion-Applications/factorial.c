#include <stdio.h>


int fact (int n)
{
    if (n==0)
    return 1;
    else
    return fact(n-1)*n;
}

int main()
{
    int r;
    r=5;
    fact(r);
    printf("%d",fact(r));
}
