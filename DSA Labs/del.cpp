// Deletion_ELEMENT_ARRAY
#include<iostream>
using namespace std;

int main()
{
int array[100], position, c, n;

cout << "Enter the number of elements of the array : ";
cin >> n;

cout << "\nInput the array elements : ";

for (c = 0; c < n; c++)
cin >> array[c];

cout << "\nEnter the position : ";
cin >> position;

if (position >= n+1)
cout << "\nDeletion not possible.\n";
else
{
for (c = position - 1; c < n - 1; c++)
array[c] = array[c+1];

cout << "\nArray after deletion : ";

for (c = 0; c < n - 1; c++)
cout << array[c] << " ";
}
cout << endl;
return 0;
}

