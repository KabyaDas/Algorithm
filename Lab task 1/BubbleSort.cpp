#include<iostream>
#include<stdlib.h>
using namespace std;


void random(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
          a[i]=rand();
    }
}

void bubbleSort(int a[],int n)
{

    for(int j=0;j<n-1;j++)
    {
       for(int i=0;i<n-1-j;i++)
    {

      if(a[i]>a[i+1])
      {

          swap(a[i+1],a[i]);


      }

    }
    }
}
void display(int a[], int n) {
   for(int k = 0; k<n; k++)
   {

       cout << a[k] << endl;
   }
}

int main()
{

  int x=10000;
  int arr[x];
 random(arr,x);
  bubbleSort(arr,x);
  display(arr,x);
}


