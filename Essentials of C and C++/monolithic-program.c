#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int length=0, breadth=0;
    
    printf("Enter length and breadth");
    cin>>length>>breadth;
    
    int Area = length*breadth;
    int perimeter = 2*(length+breadth);
    
    printf("Area is %d\n perimeter is %d\n", Area,perimeter);
    
}
