#include<iostream>
using namespace std;
 
int main()
  {
   int i,a[20],n,no,pos;
   cout<<"Enter size of array:";
   cin>>n;
   cout<<"Enter the array elements in ascending order:\n";
   for(i=0;i<n;i++)
   {
    cin>>a[i];
   }
   cout<<"\n\nStored Data in array:  ";
   for(i=0;i<n;i++)
   {
    cout<<a[i]<<" ";
   }
   cout<<"\n\nEnter poss. of element to delete: ";
   cin>>pos;
   if(pos>n)
   {
   cout<<"\n\nThis value is out of range: ";
   }
   else
   {
   --pos;
   for(i=pos;i<=n;i++)
   {
    a[i]=a[i+1];
   }
   cout<<"\n\nNew data in array: ";
   for(i=0;i<n-1;i++)
   {
    cout<<a[i]<<" ";
  }
  }
   return 0;
 }

