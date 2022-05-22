/*
C stand library filesystem
https://www.programiz.com/c-programming/c-file-input-output

stdio.h : https://www.cplusplus.com/reference/cstdio/
  fopen : https://www.cplusplus.com/reference/cstdio/fopen/
  fclose : hhttps://www.cplusplus.com/reference/cstdio/fclose/
  fwrite : https://www.cplusplus.com/reference/cstdio/fwrite/
  fread : https://www.cplusplus.com/reference/cstdio/fread/
  fprintf : https://www.cplusplus.com/reference/cstdio/fprintf/

Try to find character '\n' and mark one line.
But it will have unknown problem ( Segmentation fault ), maybe is fseek, fread will read error memory block, or printf will have call wrong memory block.
*/
#include <stdio.h>
#include <string.h>
#include <unistd.h>

// Declare global variable
const char* filename = "c.csv";

FILE* file_create(const char* _flags = "w") {
    // Open file and execute function
    FILE* fptr = fopen(filename, _flags);
    if (fptr == NULL) {
        printf("[file_open] File not created! \n");
    }
    return fptr;
}

void file_read() {
    FILE* fptr = file_create("r");
    // read message with file pointer
    // buffer for read bytes
    char* tmp;
    int t = 0;
    fseek(fptr, 0, SEEK_SET);
    while ( !feof(fptr) ) {
        fread(&tmp, sizeof(char), 1, fptr);
        t++;
        printf("%c", tmp);
    }
    printf("total : %d", t);
    // close file pointer
    fclose(fptr);
}

void file_block(int startpoc, int offset) {
    FILE* fptr = file_create("r");
    char* tmp;
    int newline = 0;
    fseek(fptr, startpoc * sizeof(char), SEEK_SET);
    fread(tmp, sizeof(char), offset, fptr);
    for( int i = 0 ; i < offset ; i++ ) {
        printf("%c", tmp[i]);
    }
    // close file pointer
    fclose(fptr);
}

int main() {
    file_read();
    printf("\n");
    file_block(0, 10);
    return 0;
}
