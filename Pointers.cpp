#include<iostream>
using namespace std;
int main(){
    int firstvalue;
    int secondvalue;
    int* ppointer = nullptr;
    // assign pointer with address of firstvalue
    ppointer = &firstvalue;
    *ppointer = 10; //indirection
    //assign pointer with address of secondvalue
    ppointer = &secondvalue;
    *ppointer = 20; //indirection
    cout << "firstvalue is " << firstvalue << '\n';
    cout << "secondvalue is " << secondvalue << '\n';
    return 0;
}