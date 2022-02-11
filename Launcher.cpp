// Launcher.cpp

#include <iostream>
#include <cstring>

#include "Calculator.h"

using namespace std;

int launcher()
{
    int command;
    string program;
    cout << "Vocab words:\nNONE\n\n" << "Welcome to the launcher. What do you want to do?\n1: Open A Program\n2: Open Calculator\n3: File Manager\n\n";
    cin >> command;
    try {
        //Block of code to try
        switch (command)
        {
        case 1:
            cout << "Type the program to open: ";
            cin >> program;
            cout << "Opening " << program << "\n\n";
            system(program.c_str());
            break;
        case 2:
            cout << "Opening Calculator\n\n";
            CalculatorProgram();
            break;
        case 3:
            cout << "Running File Manager\n\n";
            //Run file manager here
            break;
        default:
            throw 10; //Throw an exception when a problem arise
            launcher();
        }
    }
    catch (int errorCode) {
        //Block of code to handle errors
        cout << "Error: " << errorCode;
        
    }
    
    return 0;
}