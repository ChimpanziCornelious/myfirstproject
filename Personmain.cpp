#include <iostream>
#include "Person.h"
int main(){
    Person jane = Person("jane", 60.0f);
    Person john = Person("john", 75.0f);
    float totalWeight = jane + john;
    cout << "total weight: " << totalWeight << endl;
    if(jane==john){
        cout<<"this is the same person"<<endl;
    }
    if(jane != john){
        cout << "this is not the same person"<<endl;
    }
    if(jane < john){
        cout << "jane is younger than john"<<endl;
    }
    if(john > jane){
        cout << "john is older than jane"<<endl;
    }
    int johnAge = john;
    cout<<"johns age: " <<johnAge<<endl;
    string janeFirstName = jane;
    cout << "jane' weight"<< janeweight << endl;
    return 0;
}