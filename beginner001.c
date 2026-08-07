#include <stdio.h>
#include <string.h>

int main()
{
    char s[100], result[52];
    fgets(s, 100, stdin);
    strncpy(result, &s[11], 41);
    printf("![image](%s)\n", result);
    return 0;
}
