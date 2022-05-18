/*
file stream ref : https://www.guru99.com/cpp-file-read-write-open.html

ofstream : This class represents an output stream. It’s used for creating files and writing information to files.
ifstream : This class represents an input stream. It’s used for reading information from data files.
fstream : This class generally represents a file stream. It comes with ofstream/ifstream capabilities. This means it’s capable of creating files, writing to files, reading from data files.
*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void file_write(string msg) {
    // Create fstream object
    fstream cfile;
    // Open file and execute function
    cfile.open("cfile", ios::out);
    if (!cfile) {
        cout << "[file_wriet] File not created!" << endl;
    }
    else {
        // write a string to file
        cout << "[file_wriet] File created successfully!" << endl;
        cfile << msg;
        // close file stream
        cfile.close();
    }
}

void file_read() {
    // Create fstream object
    fstream cfile;
    // Open file and execute function
    cfile.open("cfile", ios::in);
    if (!cfile) {
        cout << "[file_read] File not exist!" << endl;
    }
    else {
        // start read loop
        cout << "[file_read] File content : " << endl;
        string str;
        while (std::getline(cfile, str)) {
            std::cout << str << endl;
        }
        // close file stream
        cfile.close();
    }
}

int main() {
    cout << "Single line :" << endl;
    file_write("It is write stream test 1");
    file_read();
    cout << endl;
    cout << "Multi line :" << endl;
    file_write("It is write stream test 1\nIt is write stream test 2");
    file_read();
    return 0;
}
