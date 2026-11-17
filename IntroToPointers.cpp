#include<iostream>
using namespace std;
int main(){
    // declare pointer and initialize it so that it doesnt store a random address
    int* ppointer = nullptr;
    int integervar = 5;
    //assign pointer to address of object
    ppointer = &integervar;
    //output the value of integervar
    cout << "integervar: "<< integervar << endl;
    // output the address of integervar
    cout <<"address of integervar: "<< &integervar << endl;
    //output the address assigned to ppointer
    cout << "address of ppointer: " << &ppointer << endl;
    return 0;
}