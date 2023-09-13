#include<iostream>
using namespace std;

int palindrome(int a)
{
    int reverse=0,temp,digit;
    temp=a;
    do{
        digit=a%10;
        reverse=(reverse*10)+digit;
        a=a/10;

    }while(a!=0);
    if(reverse==temp)
    cout<<temp<<" is a palindrome number"<<endl;
    else
    cout<<temp<<" is not a palindrome number"<<endl;
    return 0;
}
int main()
{
    int number;
    cout<<"Enter a Number: ";
    cin>>number;
    if(number<10)
    cout<<number<<" is a single digit"<<endl;
    else
    palindrome(number);
    return 0;
}