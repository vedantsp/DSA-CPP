#include<iostream>
#include<stdio.h>

using namespace std;


void swap(int &x, int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main()
{
    int num1=5,num2=10;
    swap(num1,num2);
    
    cout<<"First Number :"<<num1<<endl;
    cout<<"Second Number :"<<num2<<endl;
    
    return 0;
}
