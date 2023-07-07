#include<bits/stdc++.h>
using namespace std;

void getElements(int arr[], int n)
{
    if(n==0 || n==1)
        cout<<-1<<" "<<-1<<endl;
    sort(arr,arr+n);
    int secondSmall = arr[1];
    int secondLargest = arr[n-2];
    cout<<"Second smallest is : "<<secondSmall<<endl;
    cout<<"Second Largest is :  "<<secondLargest;
}
int main()
{
    int arr[] = {1,2,5,3,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    getElements(arr,n);
    return 0;
}
