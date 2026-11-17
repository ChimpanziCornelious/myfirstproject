#include<iostream>
using namespace std;
int main(){
    //null pointer
    int* ppointer = nullptr;
    int numbersarray[3] = {10, 20, 30};
    //assign address of first element to pointer
    ppointer = numbersarray;
    //output the address of the first element
    cout << "address at ppointer: "<< ppointer << endl;
    cout << "address of numbersarray[0]: "<< numbersarray << endl;
    //output the value of the first element using the pointer and indirection
    cout <<"value at ppointer: "<< *ppointer <<endl;
    //this outputs the value of the second element
    cout <<"value at ++ppointer: " << *(++ppointer) <<endl;
    //asssign address of first element to pointer
    ppointer = numbersarray;
    //this outputs the value of the first element
    cout << "value at ppointer++: " << *(ppointer++) << endl;
    return 0;
}