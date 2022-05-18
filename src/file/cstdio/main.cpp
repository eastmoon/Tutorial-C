/*
C stand library filesystem
https://www.programiz.com/c-programming/c-file-input-output

stdio.h : https://www.cplusplus.com/reference/cstdio/
  fopen : https://www.cplusplus.com/reference/cstdio/fopen/
  fclose : hhttps://www.cplusplus.com/reference/cstdio/fclose/
  fwrite : https://www.cplusplus.com/reference/cstdio/fwrite/
  fread : https://www.cplusplus.com/reference/cstdio/fread/
  fprintf : https://www.cplusplus.com/reference/cstdio/fprintf/
*/
#include <stdio.h>
#include <string.h>
#include <unistd.h>

// Declare global variable
const char* filename = "cfile";

FILE* file_create(const char* _flags = "w") {
    // Open file and execute function
    FILE* fptr = fopen(filename, _flags);
    if (fptr == NULL) {
        printf("[file_open] File not created! \n");
    }
    return fptr;
}

void file_write(const char* msg) {
    FILE* fptr = file_create("a+");
    // write message with file pointer
    fwrite (msg, sizeof(char), strlen(msg), fptr);
    // close file pointer
    fclose(fptr);
}

void file_read() {
    FILE* fptr = file_create("r");
    // read message with file pointer
    // buffer for read bytes
    char tmp[80];
    // 0 signals is EOF
    while ( fgets( tmp, 80, fptr) != NULL ) {
        // write one byte to the standard output
        printf("%s", tmp);
    }
    // close file pointer
    fclose(fptr);
}

int main() {
    file_create();
    file_write("It is write stream test 1\n");
    file_write("It is write stream test 2\n");
    file_read();
    return 0;
}
