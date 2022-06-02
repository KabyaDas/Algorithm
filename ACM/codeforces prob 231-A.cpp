#include<iostream>
using namespace std;

int main()
{
    int t;

    cin>>t;
    int n=0;

    while(t--)
    {
       int count;
       int sum = 0;
        for(int i =1;i<=3;i++)
        {
            cin>>count;
            sum = sum + count;
        }


    if(sum>=2)
    {


        n++;
    }
    }
   cout<<n;

}

