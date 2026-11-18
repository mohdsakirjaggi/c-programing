#include <stdio.h>
#include <stdlib.h>

int main()
{
    // 1. Open the text file safely           "sample.txt" is the name of the file.
    FILE *file = fopen("sample.txt", "r"); // fopen=file open,"r" means read mode.
    if (file == NULL)
    {
        perror("Error opening file"); // perror() prints an error message.
        return EXIT_FAILURE;          // EXIT_FAILURE means the program terminated because something went wrong.
    }

    // 2. Setup initial dynamic memory allocation
    size_t buffer_size = 256; // Start with a small buffer
    size_t content_length = 0;
    char *buffer = malloc(buffer_size * sizeof(char));

    if (buffer == NULL)
    {
        perror("Initial memory allocation failed");
        fclose(file);
        return EXIT_FAILURE;
    }

    // 3. Read file character by character and scale memory dynamically

    // fgetc()  =  all possible character values plus EOF
    int ch;
    while ((ch = fgetc(file)) != EOF)
    {
        // If buffer is full, double its capacity
        if (content_length + 1 >= buffer_size)
        {
            buffer_size *= 2;
            char *temp = realloc(buffer, buffer_size * sizeof(char));

            if (temp == NULL)
            {
                perror("Memory reallocation failed");
                free(buffer); // Clean up previously allocated memory
                fclose(file);
                return EXIT_FAILURE;
            }
            buffer = temp; // Reassignment is safe after checking NULL
        }
        buffer[content_length++] = (char)ch;
    }

    // 4. Null-terminate the buffer to treat it safely as a C string
    buffer[content_length] = '\0';

    // 5. Output the results to the console
    printf("--- File Content Loaded to Memory (%zu bytes) ---\n", content_length);
    printf("%s\n", buffer);
    printf("------------------------------------------------\n");

    // 6. Mandatory Resource Cleanup
    free(buffer); // Free the heap memory
    fclose(file); // Close the system file stream

    return EXIT_SUCCESS;
}