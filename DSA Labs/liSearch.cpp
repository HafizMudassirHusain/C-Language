#include<iostream>
using namespace std;
int main(){
    int array[20],n,index = 0,srch;
    cout<<"Enter the size of an array: ";  cin>>n;
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    cout<<"Enter value you found in array"; cin>>srch;
    for(int i=0;i<n;i++){
        if (array[i]==srch){
           index = i;
           }
    }
      if(index != 0){     
            cout<< "\nElement found at position : " << index+1 ;
        }
        else{
            cout<<"\nValue not present\n";
        }
    return 0;
}