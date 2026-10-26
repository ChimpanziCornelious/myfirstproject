#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main (){
    srand(time(0));
    int DaysUntilExpiration = rand () % 12;
        if (DaysUntilExpiration == 0){
            cout << "Your subscription has expired."<<endl;
        }else if (DaysUntilExpiration == 1){
            cout<< "Your subscription expires within a day!"<<endl;
            cout<< "Renew now and save 20%"<<endl;
        }else if (DaysUntilExpiration <= 5){
            cout<<"Your subscription expires in "<<DaysUntilExpiration<< "days"<<endl;
            cout<< "Renew now and save 10%!"<<endl;
        }else if (DaysUntilExpiration <= 10){
            cout<< "Your subscription will expire soon renew now!"<<endl;
        }else{
            cout<<"You have an active subscription."<<endl;
        }
        return 0;
}