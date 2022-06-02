#include<iostream>
using namespace std;

int main()
{
int size,item,search,i;
cout<<"Enter the size: ";
    cin>>size;
int a[size];
 int flag = 0;
 cout<<"Enter input elements: ";
for(i=0;i<size;i++)
    {
        cin>>item;
        a[i]=item;
    }


cout<<"Enter the number which are you searching for: ";
cin>>search;
     for(i=0;i<size;i++)
     {
        if(a[i]== search)
        {
           cout<<"Found at index number "<<i<<endl;
          flag = 1;
           break;

        }

        else
        {

            continue;
        }
     }
     if(flag!=1)
     {
         cout<<"Not found";
     }
}
