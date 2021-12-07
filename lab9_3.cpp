#include<iostream>
using namespace std;

int main(){

    string status;
    int age, ppt,height;
    cout << "Enter your age: ";
    cin >> age;

    if(age<=20){
        cout << "Enter your height: ";
        cin >> height;
        
        if(height<160){
            status = "UNFRIEND";

        }else if(height<175){
            status = "FRIEND";
            
        }else{
            cout << "Enter your property: "; 
            cin >> ppt;

            if(ppt>69000000){
                status = "MARRIED";

            }else{
                status = "ONE-NIGHT-STAND";
            }

        }    
                   
    }else{
        if(age<30){
            cout << "Enter your property: ";
            cin >> ppt;

            if(ppt>1000000){
                status = "BEST FRIEND";

            }else{
                status = "UNFRIEND";
            }

        }else{
            status = "UNFRIEND";
        }

    }

    cout << "Your status = " << status;

    return 0;
}
    