#include<iostream>
using namespace std;
 
int main()
{
    int n,i,f,f1=0,f2=1;
    
     
    cout<<"  Enter The Number:";
    cin>>n;
     
    cout<<"  The Fibonacci Series is:";
    cout<<"  \n"<<f1<<"  \n"<<f2;
     
    for(i=2;i<n;i++)
    {
        f=f1+f2;
        f1=f2;
        f2=f;
        cout<<"  \n"<<f;
    }
    
}

    