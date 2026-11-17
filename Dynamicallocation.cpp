#include<iostream>
#include<string>
using namespace std;
int main (){
int* dynamicInteger = new int;
string* dynamicString = new string;
cout << "enter integer: ";
cin >> *dynamicInteger ;
cin.ignore();
cout << "enter value of string: " <<endl;
getline(cin, *dynamicString) ;
cout << "the value of dynamically allocated integer: "<< *dynamicInteger << endl;
cout << "the value of dynamically allocated string: "<< *dynamicString<<endl;
delete dynamicInteger;
delete dynamicString;
return 0;
}