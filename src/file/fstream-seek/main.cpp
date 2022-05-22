/*
C++ Files and Streams, https://www.tutorialspoint.com/cplusplus/cpp_files_streams.htm

Get Line :
  std::istream::getline, https://www.cplusplus.com/reference/istream/istream/getline/
  “c++ fstream getline” Code Answer’s, https://www.codegrepper.com/code-examples/cpp/c%2B%2B+fstream+getline
Seek :
  std::fstream, https://www.cplusplus.com/reference/fstream/fstream/
  std::basic_ifstream, https://en.cppreference.com/w/cpp/io/basic_ifstream
  std::istream::seekg, https://www.cplusplus.com/reference/istream/istream/seekg/
  Set position with seekg() in C++ language file handling, https://www.tutorialspoint.com/set-position-with-seekg-in-cplusplus-language-file-handling
*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Declare global variable
const string filename = "c.csv";

// Declare function
void file_read_line() {
    // Create fstream object
    fstream cfile;
    // Open file and execute function
    cfile.open(filename, ios::in);
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

void file_read_block(int startpoc, int offset) {
    // Create fstream object
    fstream cfile;
    // Open file and execute function
    cfile.open(filename, ios::in);
    if (!cfile) {
        cout << "[file_read] File not exist!" << endl;
    }
    else {
        // start read loop
        cfile.seekg(0, ios_base::end);
        int length = cfile.tellg();
        cout << "[file_read_block] file length " << length << endl;
        cout << "[file_read_block] read " << startpoc << " to " << offset << endl;
        cfile.seekg(startpoc, ios_base::beg);
        cout << "[file_read] File content : " << endl;
        char * buffer = new char [offset];
        cfile.read (buffer, offset);
        string str(buffer);
        cout << str << endl;
        // close file stream
        cfile.close();
        delete[] buffer;
    }
}

int main() {
    cout << "Single line :" << endl;
    file_read_line();
    cout << endl;
    cout << endl;
    cout << "Single block :" << endl;
    file_read_block(0, 5);
    file_read_block(10, 25);
    return 0;
}
