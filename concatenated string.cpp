#include<iostream>
#include<string>
using namespace std;
int main(){
string str1,str2;
int i,j;
cout<<"Enter first string:";
getline(cin,str1);
cout<<"Enter second string:";
getline(cin,str2);
for(i=0;str1[i]!='\0';i++);
    for(j=0;str2[j]!='\0';j++){
            str1[i] = str2[j];
             i++;
}
str1[i]='\0';
cout<<"concatenated string:"<<str1<<endl;
return 0;
}
