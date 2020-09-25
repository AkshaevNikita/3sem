#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
 
void copy(const int fd) {
    char str[4096];
    int n = read(fd, str, 4096), p = 0;
    if (n < 0) {
        perror("open failed");
        exit(1);
    }
    while (n > 0) {
        p = write(1, str, n);
        if (p < 0) {
            perror("open failed");
            exit(1);
        }
        n -= p;
    }
}

int main(int argc, char *argv[]){
    if (argc == 1) {
        while (1) 
            copy(0);
    }

    for (int i = 1; i < argc; i++) {
        int fd = open(argv[i], O_RDWR | O_EXCL);    
        copy(fd);
    }

    return 0;
} 
