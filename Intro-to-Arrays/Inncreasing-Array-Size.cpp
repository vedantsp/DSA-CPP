#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int *p, *q;
    int i;
    p=new int[5];
    p[0]=1;p[1]=2;p[2]=3;p[3]=4;p[4]=5;
    
    q=new int[10];
    
    for(i=0;i<=4;i++)
    q[i]=p[i];
    
    free(p);
    p=q;
    q=NULL;
    
    for(i=0; i<=4; i++)
    cout<<p[i];
    
   
    
    return 0;
}
