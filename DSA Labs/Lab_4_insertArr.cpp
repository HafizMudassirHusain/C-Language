
// INSERTION_SORT
#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"Enter the number of elements in array: ";
cin >> n;
int arr[n];
int i;
for(i = 0; i < n; i++)
{
    cout << "Element " << (i+1) << ": ";
cin >> arr[i];
}
int pos;
    cout << "Enter the position : ";
cin >> pos;
int ele;
cout << "Enter element to be inserted at given position :";
cin >> ele;
if(pos > n)
cout <<"Invalid Input";
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

