#include<fstream>
#include<iostream>
#include "Filemanage.h"
using namespace std;
int WriteIntoFile(){
    char data[100]; 

    ofstream writeText;
    writeText.open("basic.txt");
    
    cout<<"Writing into the file....."<<endl;
    cout<<"enter your name: ";
    cin.getline(data, 100);
    writeText<<data<<endl;

    cout<<"Enter your age: ";
    cin.ignore();
    writeText<<data<<endl;
    writeText.close();
    return 0;
}
int ShowInFile(){
    char sw[100];
    ifstream inFile;
    inFile.open("basic.txt");
    cout<<endl<<"Reading From file....."<<endl;
    inFile>>sw;
    cout<<sw<<endl;
    inFile>>sw;
    cout<<sw<<endl;
    inFile.close();
    return 0;
}

