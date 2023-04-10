#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * check97 - a func that checks for the correct number of arguments
 * @argc: number of arguments
 *
 * Return: void
 */
void check97(int argc)
{
	if (argc != 3)
	{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
	}
}

/**
 * check98 - a func that checks that file_from exists and can be read
 * @check: checks if true of false
 * @file: file_from name
 * @fd_from: file descriptor of file_from, or -1
 * @fd_to: file descriptor of file_to, or -1
 *
 * Return: void
 */
void check98(ssize_t check, char *file, int fd_from, int fd_to)
{
	if (check == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
	if (fd_from != -1)
	close(fd_from);
	if (fd_to != -1)
	close(fd_to);
	exit(98);
	}
}

/**
 * check99 - a func that checks that file_to was
 * created and/or can be written to
 * @check: checks if true of false
 * @file: file_to name
 * @fd_from: file descriptor of file_from, or -1
 * @fd_to: file descriptor of file_to, or -1
 *
 * Return: void
 */
void check99(ssize_t check, char *file, int fd_from, int fd_to)
{
	if (check == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
	if (fd_from != -1)
	close(fd_from);
	if (fd_to != -1)
	close(fd_to);
	exit(99);
	}
}

/**
 * check100 - a unc that checks that file descriptors were closed properly
 * @check: checks if true or false
 * @fd: file descriptor
 *
 * Return: void
 */
void check100(int check, int fd)
{
	if (check == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}
}

/**
 * main - a func that copies the content of a file to another file.
 * @argc: number of arguments passed
 * @argv: array of pointers to the arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int fp_from, fp_to, close_to, close_from;
	ssize_t lenr, lenw;
	char buffer[1024];
	mode_t file_perm;

	check97(argc);
	fp_from = open(argv[1], O_RDONLY);
	check98((ssize_t)fp_from, argv[1], -1, -1);
	file_perm = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	fp_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, file_perm);
	check99((ssize_t)fp_to, argv[2], fp_from, -1);
	lenr = 1024;
	while (lenr == 1024)
	{
	lenr = read(fp_from, buffer, 1024);
	check98(lenr, argv[1], fp_from, fp_to);
	lenw = write(fp_to, buffer, lenr);
	if (lenw != lenr)
	lenw = -1;
	check99(lenw, argv[2], fp_from, fp_to);
	}
	close_to = close(fp_to);
	close_from = close(fp_from);
	check100(close_to, fp_to);
	check100(close_from, fp_from);
	return (0);
}
