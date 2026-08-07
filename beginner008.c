#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void memset_(char *c, char x, size_t y){  // You can use the memset function from string.h, but I implement my own version of it.
    for (int i = 0;i < y;i++){
        c[i] = x;
    }
}

void increase_end(char *c, int *d){
    if (c[2] != 0){
                c[3] = '\0';
            }
            else{
                c[2] = '\0';
            }
            unsigned int r = atoi(c);
            printf("%c", r);
            *d = 0;
}

int main()
{
    char c[4], a[] = "104,121,115,105,108,101,110,115,102,97,110,123,65,66,67,125";
    unsigned int d = 0;
    for (int u = 0;u < strlen(a);u++){
        if (a[u] != ','){  // If the character not the 
            c[d] = a[u];
            d++;
        }
        else{
            increase_end(c, &d);  // Print the converted character, then refresh d
            memset_(c, 0, sizeof(c));  // Clear the character array c
        }
    }
    increase_end(c, &d);  // Process the last character because it is not followed by a comma
    memset_(c, 0, sizeof(c));
    return 0;
}
/*
    char *token = strtok(a, ",");  // You can using strtok() to split the string:
    while (token != NULL) {
        unsigned int r = atoi(token);
        printf("%c", r);
        token = strtok(NULL, ",");  // Continue from the previous position
    }
*/
