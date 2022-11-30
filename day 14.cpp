#include<iostream>
using namespace std;
int main()
{
    int rev=0,n,i,a;
    cout<<"enter any no. = ";
    cin>>n;
    while(n>0)
    {
        a=n%10;
        rev=rev*10+a;
        n=n/10;
    }
    cout<<"reverse no = "<<rev;
}
