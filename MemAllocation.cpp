#include<iostream>
using namespace std;
int main(){
    int numberofelements = 0;
    int* dynamicArray = nullptr;
    cout << "How many numbers would you like to type? ";
    cin >> numberofelements;
    dynamicArray = new int[numberofelements];
    if(dynamicArray == nullptr){
        cout << "error: memory could not be allocated";
    }else{
        for (int i = 0; i < numberofelements; i++){
            cout << "Enter number: ";
            cin >> dynamicArray[i];
        }
        cout << "You have entered: ";
        for (int j = 0; j < numberofelements; j++){
            cout << dynamicArray[j] << ", ";
        }
        delete[] dynamicArray;
    }
    return 0;
}