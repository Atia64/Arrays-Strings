#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Element number of array:";
    cin>>n;
    int arr[n],i;
    cout<<"Enter "<<n<<" element :"<<endl;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    bool palindromeis=true;
    for(i=0;i<n/2;i++){
        if(arr[i]!=arr[n-i-1])
        bool palindromeis=false;
        break;
    }
if(palindromeis){
    cout<<"This array is palindrome"<<endl;
}
else{
    cout<<"Array is not palindrome"<<endl;
}
return 0;
}
