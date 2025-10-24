#include<iostream>
using namespace std;
int main(){
int n,i;
cout<<"Enter number of element:";
cin>>n;
int arr[n];
cout<<"Enter "<<n<<" element:"<<endl;
for(i=0;i<n;i++){
    cin>>arr[i];
}
int minIndex;
for(i=0;i<n-1;i++){
    minIndex=i;
    for(int j=i+1;j<n;j++){
       if(arr[j]<arr[minIndex]){
        minIndex=j;
    }
}
int temp=arr[i];
   arr[i]=arr[minIndex];
   arr[minIndex]=temp;
}
cout<<"Sorted array: ";
for(i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
return 0;
}
