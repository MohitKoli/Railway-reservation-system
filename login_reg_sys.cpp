#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string.h>
using namespace std;

int login()
{   string id,pass;
    int x;
    cout<<"Enter your login id"<<endl;
    cin>>id;
    cout<<"Enter your password"<<endl;
    cin>>pass;
    if(id=="1234123")
    {
        if(pass=="abc123@")
        {
            x=1;
            cout<<"You have successfully login";
        }
    }
    if(x!=1)
    cout<<"You entered wrong id or password!!!!";


    return 0;
}

int main()
{
    login();


    return 0;
}