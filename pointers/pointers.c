#include <stdio.h>

/*
    Given a character pointer x (that points to an array of chars), and a
    character pointer y, copies the character contents of y over to x. Pointer
    arithmetic is necessary here. Also, make sure x points to a null terminator
    at its end to terminate it properly. 

    Example call:

    char buffer[1024];

    string_copy(buffer, "Hello!");
    printf("%s", buffer); // Prints "Hello!"
*/
void string_copy(char *x, char *y)
{
    for (int i = 0; y[i] != '\0'; i++) {
        x[i] = y[i];
    }

}

/*
    Searches the input string `str` for the first instance of the 
    character `c` (an unsigned char). This function returns a pointer
    that points to the first instance of the character `c` in the
    input string `str`.

    Do not use the `strchr` function from the standard library.
*/
char *find_char(char *str, int c)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == c) {
            return str + i;
        }
    }
    return NULL;
}

/*
    Searches the input string `haystack` for the first instance of
    the string `needle`. This function returns a pointer that points
    to the first instance of the string `needle` in the input
    string `haystack`. 

    Do not use the `strstr` function from the standard library.
*/
char *find_string(char *haystack, char *needle)
{
    for (int i = 0; haystack[i] != '\0'; i++) {
        for (int z = 0; needle[z] != '\0'; z++) {
            if (haystack[i + z] == needle[z]) {
                // printf("FOUND: %c\n", needle[z]);
                if (needle[z+1] == '\0') {
                    // printf("FOUND OUR SUBSTRING\n");
                    return haystack + i;
                }
            }
            else {
                break;
            }
        }
    }
    return NULL;
}

#ifndef TESTING
int main(void)
{
    char *found_char = find_char(hello, 'e');
    char *found_string = find_string(world, "or");

    printf("Found char: %s\n", found_char);
    printf("Found string: %s\n", found_string);

    return 0;
}
#endif
