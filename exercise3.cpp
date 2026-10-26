#include<iostream>
#include<string>
using namespace std;
int main(){
    string content[] ={"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};
    int size = sizeof(content)/sizeof(content[0]);
    for(int i =0; i < size; i++){
        if(content[i][0]== 'B'){
            cout << content[i] <<endl;
        }
    }
    return 0;
}