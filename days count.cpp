#include<iostream>
#include<string>
using namespace std;
int main(){
int today;
cout<<"Enter today index of array:";
cin>>today;
int days;
cout<<"Enter number of days:";
cin>>days;
int result;
result=(today+days)%7;
string week[7]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
cout<<"After "<<days<<" days,it will be = "<<week[result];
return 0;
}
