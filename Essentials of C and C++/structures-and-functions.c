#include<iostream>
#include<stdio.h>

using namespace std;

struct Rectangle {
    int length;
    int breadth;
};

void initialize(struct Rectangle *r, int l, int b){
    r->length=l;
    r->breadth=b;
}

int area(struct Rectangle r)
{
    return r.length*r.breadth;
}

void ChangeLength(struct Rectangle *r, int l)
{
    r->length = l;
}

int main()
{
    struct Rectangle r;
    
    initialize(&r, 10, 5);
    cout<<r.length<<endl;
    area (r);
    ChangeLength(&r, 20);
    cout<<r.length<<endl;
    cout<<area(r)<<endl;

}
