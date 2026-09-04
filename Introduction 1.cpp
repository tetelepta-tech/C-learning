#include <iostream>
#include <string>
#include <cctype> //isalnum library (is alphanumeric). Alphanumeric is like A-Z, 0-9, and not a special characther.

using namespace std;

int main (){
    string name;

    cout << "Hello world\n";
    cout << "How are u?\n";
    cout << "What's ur name?\n";

    cin >> name;

    bool isValid = true;

    for(char c : name){
        if(!isalnum(c)){
            isValid = false;
            break;
        }
    }

    if(isValid){
        cout << "Welcome to the groub!\n";
    } else {
        cout << "That's the wrong input bro\n";
    }

    cout << "So, do u want to setup a password?\n";

    string decision;

    cin >> decision;
    if(decision == "Yes"){
        cout << "Input ur password\n";
    } else if (decision == "No"){
        cout << "Okay buddy\n";
    }

// pemasukan password
    
    string password;

    do {
    cout << "Let's make ur password\n";    
    cin >> password;

    isValid = true;
    for(char c : password){
        if(!isdigit(c)) {
            isValid = false;
            break;
        }
    }
        if(!isValid) cout << "Password must be a number bruh\n";
} while (!isValid);
    
    cout << "\nRegistrasi Berhasil bos";
    return 0;
}