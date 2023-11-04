#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *store;
	int filestore;
	ssize_t bytes_read, bytes_written;

	if (!filename)
		return 0;

	filestore = open(filename, O_RDONLY);
	if (filestore == -1)
		return (0);
	store = malloc(sizeof(char) * letters);
	if (!store)
		return (0);
	bytes_read = read(filestore, store, letters);
	bytes_written = write(STDOUT_FILENO, store, bytes_read);
	close(filestore);
	free(store);

	return (bytes_written);
}
