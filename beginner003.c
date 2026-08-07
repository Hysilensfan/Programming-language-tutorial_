#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char n[65535];
    fgets(n, 65534, stdin);  // Don't use scanf() because it cannot handle empty input
    n[strcspn(n, "\n")] = '\0';  // Find the first occurrence of \n and replace it
    int g = strlen(n), d = atoi(n);
    if (g != 0 &&  g >= 10 && d != 0){
        printf("True\n");
    }
    else{
        printf("False\n");
    }
    return 0;
}
