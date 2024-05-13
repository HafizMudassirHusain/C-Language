#include<iostream>
using namespace std;

int main()
{
int n;
cout<<"Enter Array Size : ";
cin >> n;
int arr[n];
int i;
cout<<"Enter array elements : ";
for(i = 0; i < n; i++)
{
cin >> arr[i];
}
int pos;
cout<<"At which position you want to insert (Enter index number) ? ";
cin >> pos;
int ele;
cout<<"Enter element to be insert : ";
cin >> ele;
if(pos > n)
cout << "Invalid Input";
else
{
for (i = n - 1; i >= pos - 1; i--)
arr[i+1] = arr[i];

arr[pos-1] = ele;

cout << "Array after insertion is:\n";

for (i = 0; i <= n; i++)
cout << arr[i] << " ";
}
return 0;
}

