#include <iostream>
#include <fstream>

#include "FileManager.h"

using namespace std;

int fileManager() {
    int command;
    string file;
    cout << "What would you like to do?\n1: Create or Write to File\n2: Open File\n3: Exit";
    cin >> command;
    switch (command)
    {
    case 1: {
        cout << "Type the directory of the file to create or write to: ";
        cin >> file;
        ofstream MyFile(file);
    }
    case 2:
        cout << "Opening File";
    case 3:
        return 0;
    default:
        return 0;
    }
    // Create and open a text file
    ofstream MyFile("filename.txt");

    // Write to the file
    MyFile << "Files can be tricky, but it is fun enough!";

    // Close the file
    MyFile.close();
}