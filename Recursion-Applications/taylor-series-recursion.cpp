#include <iostream>
using namespace std;

int taylor(int x, int n)
{
    static int p=1, f=1;
    int r;
    if(n==0)
    return 1;
 
    r=taylor(x,n-1);
    p= p*x;
    f= f*n;
    return r+p/f;
    
}

int main()
{
    cout<<taylor(4,10)<<endl;
    return 0;
}
