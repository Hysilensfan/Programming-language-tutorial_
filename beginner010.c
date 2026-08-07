#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    int g;
    scanf("%s\n%d", s, &g);
    if (strlen(s) != g){
        printf("False");
    }
    else{
        printf("True");
    }
    return 0;
}
