#include<iostream>
#include<string>
using namespace std;
int main(){
string str;
cout<<"Enter string:";
getline(cin,str);
int start=0;
int end=str.length()-1;
bool palindromeis=true;
while(start<end){
    if(str[start]!=str[end]){
      bool palindromeis=false;
        break;
    }
    start++;
    end--;
}
if(palindromeis){
cout<<"This string is a palindrome."<<endl;
}
else{
    cout<<"This string is not palindrome."<<endl;
}
return 0;
}

