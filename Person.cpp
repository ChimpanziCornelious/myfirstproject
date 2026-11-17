#include "Person.h"
#include <iostream>
using namespace std;
Person:: Person(){
    mFirstname = "";
    mWeight = 0.0f;
    mAge = 0;
}
Person:: Person(float newWeight){
    mWeight = newWeight;
    mFirstName = "";
    mAge = 0;
}
Person::~Person(){

}
float Person::operator + (const Person& otherPerson){
    return this->mWeight + otherPerson.mWeight;
}