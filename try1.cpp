#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;

int swaptwo()
{
    int a, b;
    cout<<"Enter the numbers a and b = ";
    cin>>a>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"a = "<<a<<"   b = "<<b;
    return 0;
}

int swaptmp()
{
    int a,b,tmp;
    cout<<"Enter the number a and b = ";
    cin>>a>>b;
    tmp=a;
    a=b;
    b=tmp;
    cout<<"a = "<<a<<"   b = "<<b;
    return 0;

}

int main()
{
    int x,y=1;
    while (y)
    {   cout<<"\n2for continue press 1 ";
        cin>>y;
        cout<<"for swap 1 and 2 = ";
        cin>>x;
        switch (x)
    {
    case 2: swaptwo();
    break;
    case 3: swaptmp();
    break;
    
    default:
        break;
    }
        /* code */
    }
    
    return 0;   


}