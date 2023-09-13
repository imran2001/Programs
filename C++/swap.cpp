#include<iostream>
using namespace std;
int swap(int x, int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    return 0;
}
int main()
{
    
    int a,b;
    cout<<"Enter 1st Number: ";
    cin>>a;
    cout<<"\nEnter 2nd Number: ";
    cin>>b;

    cout<<"Beforte Swapping"<<endl;
    cout<<"1st Number: "<<a;
    cout<<"\n2nd Number: "<<b;

    swap(a,b);
    
    cout<<"\nAfter Swapping"<<endl;
    cout<<"1st Number: "<<a;
    cout<<"\n2nd Number: "<<b;
    return 0;
}