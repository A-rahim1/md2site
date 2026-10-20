#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    // 1. Check file path argument is provided
    if (argc < 2) {
        fprintf(stderr, "Usage: %s <filename>\n", argv[0]);
        return 1;
    }

    // 2. Open the file in read mode 
    FILE *file = fopen(argv[1], "r");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    // 3. Read the file line by line using a character buffer and fgets
    char buffer[1024];
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("%s", buffer);
    }

    // 4. Close the file
    fclose(file);

    return 0;
}