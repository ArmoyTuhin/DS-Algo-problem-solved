#include<bits/stdc++.h>
using namespace std;


void reversearray(int arr[], int n)
{
int start =0 , enda = n-1 ;
while(start<enda)
{
int temp = arr[start];
    arr[start] = arr[enda];
    arr[enda] = temp ;
    start++;
    enda--;

}
}


void printArray(int arr[],int n)
{
for(int i=0 ; i<n ; i++)
{
cout<<arr[i]<<" ";
}
cout<<endl;
}



int main()
{
int t;
int arr[] = {1, 2, 3, 4, 5, 6};
int n = sizeof(arr)/sizeof(arr[0]);
reversearray(arr,n);
printArray(arr,n);


}

