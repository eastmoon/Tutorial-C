/*
system call filesystem, it is linux system library.
ref : File descriptor, https://zh.wikipedia.org/zh-tw/%E6%96%87%E4%BB%B6%E6%8F%8F%E8%BF%B0%E7%AC%A6
ref : https://www.delftstack.com/zh-tw/howto/c/open-vs-fopen-in-c/

fcntl.h : https://man7.org/linux/man-pages/man0/fcntl.h.0p.html
  creat : https://man7.org/linux/man-pages/man3/creat.3p.html
  open : https://man7.org/linux/man-pages/man2/open.2.html
  write : https://man7.org/linux/man-pages/man2/write.2.html
  read : https://man7.org/linux/man-pages/man2/read.2.html
  fcntl : https://man7.org/linux/man-pages/man2/fcntl.2.html

unistd.h : https://man7.org/linux/man-pages/man0/unistd.h.0p.html

*/
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>

// Declare global variable
const char* filename = "cfile";

int file_create(int _flags = O_CREAT) {
    // Open file and execute function
    int fd = open(filename, _flags, S_IRWXU);
    if (fd == -1) {
        printf("[file_open] File not created! \n");
    }
    return fd;
}

void file_write(const char* msg) {
    int fd = file_create(O_CREAT | O_WRONLY | O_APPEND);
    // write message to file, it need to know message size
    write(fd, msg, strlen(msg));
    // close file descriptor
    close(fd);

}

void file_read() {
    int fd = file_create(O_RDONLY);
    // buffer for read bytes
    int c;
    // 0 signals is EOF
    while (read(fd, &c, 1) > 0) {
        // write one byte to the standard output
        write(STDOUT_FILENO, &c, 1);
    }
    // close file descriptor
    close(fd);
}

int main() {
    file_create();
    file_write("It is write stream test 1\n");
    file_write("It is write stream test 2\n");
    file_read();
    return 0;
}
