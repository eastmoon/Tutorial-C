/*
Binary Files with C++, https://www.eecs.umich.edu/courses/eecs380/HANDOUTS/cppBinaryFileIO-2.html
C++ Binary File I/O, https://courses.cs.vt.edu/cs2604/spring03/binio.html
二進位輸出檔案 ( Microsoft Docs ), https://docs.microsoft.com/zh-tw/cpp/standard-library/binary-output-files?view=msvc-170
二進位檔案 I/O example code, https://openhome.cc/Gossip/CppGossip/BinaryFileIO.html
*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void file_write() {
    // Declare variable
    int arr[5] = {1, 2, 3, 4, 5};
    // Create fstream object
    fstream cfile;
    // Open file and execute function
    cfile.open("cfile", ios::out | ios::binary);
    if (!cfile) {
        cout << "[file_wriet] File not created!" << endl;
    }
    else {
        // write a string to file
        cout << "[file_wriet] File created successfully!" << endl;
        cfile.write(reinterpret_cast<char*>(arr), sizeof(arr));
        // close file stream
        cfile.close();
    }
}

void file_read() {
    // Declare variable
    int arr[5];
    // Create fstream object
    fstream cfile;
    // Open file and execute function
    cfile.open("cfile", ios::in | ios::binary);
    if (!cfile) {
        cout << "[file_read] File not exist!" << endl;
    }
    else {
        // start read loop
        cout << "[file_read] File content : " << endl;
        cfile.read(reinterpret_cast<char*>(arr), sizeof(arr));
        for(int i = 0; i < 5; i++) {
            cout << arr[i] << ' ';
        }
        // close file stream
        cfile.close();
    }
}

int main() {
    cout << "Single line :" << endl;
    file_write();
    file_read();
    cout << endl;
    return 0;
}
