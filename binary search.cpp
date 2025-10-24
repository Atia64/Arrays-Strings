#include<iostream>
using namespace std;
int main(){
int arr[5]={10,30,40,50,60};
int target;
int n=5;
cout<<"Enter number of target:";
cin>>target;
int low=0,high=n-1,mid;
int found=-1;
while(low<=high){
        mid=(low+high)/2;
if(arr[mid]==target){
    found=mid;
    break;
}
else if(arr[mid]<target){
    low=mid+1;
}
else{
    high=mid-1;
}
}
if(found!=-1){
    cout<<"Found at position = "<<found+1<<endl;
}
else{
    cout<<"Not found";
}
return 0;
}
