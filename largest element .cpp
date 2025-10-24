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
int largest=arr[0];
int smallest=arr[0];
for(i=1;i<n;i++){
    if(arr[i]>largest)
        largest=arr[i];
    else if(arr[i]<smallest)
        smallest=arr[i];
}
cout<<"Largest Element = "<<largest<<endl;
cout<<"Smallest Element = "<<smallest<<endl;
return 0;
}
