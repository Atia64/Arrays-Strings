#include<iostream>
#include<string>
#include<cctype>//tolower
using namespace std;
int main(){
string str;//for many character
int vowels=0,consonants=0;
cout<<"Enter string :";
getline(cin,str);//For read full line input
for(int i=0;i<str.length();i++){
    char ch=tolower(str[i]);// All character convert to lower
    if(ch>='a'&& ch<='z'){
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
            vowels++;
        }
        else{
            consonants++;
        }
    }
}
cout<<"Number of vowel:"<<vowels<<endl;
cout<<"Number of consonant:"<<consonants;
return 0;
}
