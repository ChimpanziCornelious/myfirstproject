#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main(){
    int value = 0;
    string input;
    cout<<"Enter an integer value between 5 and 10"<<endl;
    while(true){
        cin >> input;
        stringstream ss(input);
        if(!(ss >> value)){
            cout<<"You entered an invalid number, please try again"<<endl;
        }
        else if(value<5 || value > 10){
            cout<< "You entered "<< value<< "please enter a number between 5 and 10."<<endl;
        }else{
            break;
        }
        }
        cout<< "Your input value(" << value <<")has been accepted."<<endl;
        return 0;
}
