#include<iostream>
#include<stdio.h>

using namespace std;

struct Reactangle 
{
    int length;
    int breadth;
};

void initialise(struct Reactangle *r, int l, int b)
{
    r->length=l;
    r->breadth=b;
}

int area(struct Reactangle r)
{
    return r.length*r.breadth;
}

int perimeter(Reactangle r)
{
    int p;
    p = 2*(r.length + r.breadth);
    return p;   
}

int main()
{
    Reactangle r={0,0};
    
    int l,b;
    printf("Enter length and breadth");
    cin>>l>>b;
    
    initialise(&r,l,b);
    
    int Area = area(r);
    int Perimeter = perimeter(r);
    
    printf("Area is %d\n perimeter is %d\n", Area,Perimeter);
    
}
