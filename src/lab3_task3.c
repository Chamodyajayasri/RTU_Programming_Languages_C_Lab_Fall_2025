/*
 * Lab 3, Task 3
 * Student Name-Kakulandala Liyanage Don Chamodya Jayasri, Student ID-243AEB012
 *
 * Implement basic string handling functions.
 * Write your own versions of:
 *   - my_strlen (finds string length)
 *   - my_strcpy (copies string from src to dest)
 *
 * Rules:
 *   - Do not use <string.h> functions for strlen/strcpy.
 *   - Use loops and manual pointer/array access.
 *
 * Example:
 *   char s[] = "hello";
 *   int len = my_strlen(s);   // should return 5
 *
 *   char buffer[100];
 *   my_strcpy(buffer, s);     // buffer now contains "hello"
 */

#include <stdio.h>

// Function prototypes
int my_strlen(const char *str);
void my_strcpy(char *dest, const char *src);

int main(void) {
    // Test the functions
    char text[] = "hello";
    int len = my_strlen(text);
    printf("Length: %d\n", len);

    char buffer[100];
    my_strcpy(buffer, text);
    printf("Copy: %s\n", buffer);

    // Test with another string
    char test2[] = "Programming";
    printf("Length of '%s': %d\n", test2, my_strlen(test2));

    char buffer2[100];
    my_strcpy(buffer2, test2);
    printf("Copied: %s\n", buffer2);

    return 0;
}

// Count characters until null terminator
int my_strlen(const char *str) {
    int count = 0;
    while (str[count] != '\0') {
        count++;
    }
    return count;
}

// Copy string from src to dest
void my_strcpy(char *dest, const char *src) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0'; // Add null terminator at the end
}
