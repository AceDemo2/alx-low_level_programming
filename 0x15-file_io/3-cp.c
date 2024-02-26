#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

void print_error_and_exit(int exit_code, const char *message, const char *file_name) {
    dprintf(STDERR_FILENO, message, file_name);
    exit(exit_code);
}

int main(int argc, char *argv[]) {
    char *file_from, *file_to, buffer[BUFFER_SIZE];
    int fd_from, fd_to;
    ssize_t bytes_read, bytes_written;
	if (argc != 3) {
        print_error_and_exit(97, "Usage: cp file_from file_to\n", NULL);
    }

    file_from = argv[1];
    file_to = argv[2];

    fd_from = open(file_from, O_RDONLY);
    if (fd_from == -1) {
        print_error_and_exit(98, "Error: Can't read from file %s\n", file_from);
    }

    fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
    if (fd_to == -1) {
        close(fd_from);
        print_error_and_exit(99, "Error: Can't write to file %s\n", file_to);
    }


    while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0) {
        bytes_written = write(fd_to, buffer, bytes_read);
        if (bytes_written == -1) {
            close(fd_from);
            close(fd_to);
            print_error_and_exit(99, "Error: Can't write to file %s\n", file_to);
        }
    }

    if (bytes_read == -1) {
        close(fd_from);
        close(fd_to);
        print_error_and_exit(99, "Error: Can't read from file %s\n", file_from);
    }

    if (close(fd_from) == -1 || close(fd_to) == -1) {
        print_error_and_exit(100, "Error: Can't close file descriptor\n", NULL);
    }

    return 0;
}

