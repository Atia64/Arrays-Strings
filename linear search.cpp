#include<iostream>
using namespace std;
int main(){
int arr[5]={10,20,30,40,50};
int target;
int found=-1;
int n=5;
cout<<"Enter any element of target:";
cin>>target;
for(int i=0;i<n;i++){
    if(arr[i]==target){
        found=i;
        break;
    }
}
if(found != -1){
    cout<<"found at index = "<<found<<endl;
}else{
cout<<"Not found"<<endl;
}
return 0;
}

