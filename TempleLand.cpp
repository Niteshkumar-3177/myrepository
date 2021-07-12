#include<iostream>
using namespace std;

int main() {
int s;
cin>>s;
while(s–){
int n,max=0,indexofmax;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
int x;
cin>>x;
if(x>max){
max=x;
indexofmax=i;

}
arr[i]=x;
}
if(valid(arr,n,max,indexofmax)){
cout<<“yes”<<“\n”;
}
else{
cout<<“no”<<“\n”;
}

}
return 0;
}

Second : We will  create a function that applies the past rules  and checks if the strip is valid or not. as follows :

bool valid(int arr[],int n,int max,int indexofmax)
{
int mid=n/2 ;    // get the mid of the parts.
if(n%2!=1)             //  if the numbers of the parts is even .which means there is no center.
{
return false;
}
else if(arr[0]!=1&& arr[n-1]!=1)  // if the first index and the last index are not equal 1.
{
return false;
}
else if(arr[mid]!=max)      // the max element is not  the center .
{
return false;
}
else {
for(int i=1;i<=mid;i++)
//Check if each elements increases by one from left to center and decreases by one from //the right to the center.
{
int rigthValue=arr[indexofmax+i];
int leftValue=arr[indexofmax-i];
if(rigthValue!=leftValue||rigthValue!=arr[mid]-i)   // If the right and the left are not //equals  and the value on this index is equal mid-i.
{
return false;
}
}
return true;
}
}
