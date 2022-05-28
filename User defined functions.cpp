#include<iostream>
#include<math.h>
using namespace std;

int i,k;
void s()
{
    cout<<"Write an integer for s function: ";
    cin>>k;
    i= pow(k,2);
    cout<<"The result of s function: "<<i<<endl;
}
void f()
{
    k=0;
    for(i=1;i<=10;i++)
    {
        k=k+i;
    }
    cout<<"The result of f function: "<<k<<endl;
}
void g()
{
    int k = 0;
    for(i=1;i<=10;i++)
    {
        k= k+pow(i,2);
    }
    cout<<"The result of g function: "<<k<<endl;
}
void r()
{
    int k=0;
    for(i=1;i<=5;i++)
    {
       k=pow(i,2)+k+5;
    }
    cout<<"The result of r function: "<<k<<endl;
}
void q()
{
    int k = 1;
    for(i=3;i<=6;i++)
    {
       k= (i-2)*k;
    }
    cout<<"The result of q function: "<<k;
}
int main()
{
    s();
    f();
    g();
    r();
    q();
}


