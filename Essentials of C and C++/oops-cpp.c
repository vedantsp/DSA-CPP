#include<iostream>
#include<stdio.h>

using namespace std;

class Reactangle 
{
    public:
    int length;
    int breadth;

void initialise(int l, int b)
{
    length=l;
    breadth=b;
}

int area()
{
    return length*breadth;
}

int perimeter()
{
    int p;
    p = 2*(length + breadth);
    return p;   
}
};
int main()
{
    Reactangle r;
    
    int l,b;
    printf("Enter length and breadth");
    cin>>l>>b;
    
    r.initialise(l,b);
    
    int Area = r.area();
    int Perimeter = r.perimeter();
    
    printf("Area is %d\n perimeter is %d\n", Area,Perimeter);
    
}
