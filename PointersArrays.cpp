#include<iostream>
using namespace std;
int main (){
    int numbersarray[5];
    int* ppointer = nullptr;
    // assign the address to the first element to the pointer
    ppointer = numbersarray;
    *ppointer = 10; //assign a value to the first element
    /*increment the pointer using pointer arithmetic to assign the address of the second element to the pointer*/
    ppointer++;
    *ppointer = 20;//assign a value to the second element
    //assign the address of the third element to the pointer
    ppointer = &numbersarray[2];
    *ppointer = 30; //assign value to third element
    /*assign the address of the fourth element to the pointer */
    ppointer = numbersarray + 3;
    *ppointer = 40; //assign a avalue to the fourth element
    //assign the address to the first element to the pointer 
    ppointer = numbersarray;
    /*assign a value to the fifth element using indirection and pointer arithmetic*/
    *(numbersarray+4)= 50;
    //iterate and output all the elements in the array
    for(int n = 0; n < 5; n++){
        cout << numbersarray[n] << ", ";
    }
    return 0;
}