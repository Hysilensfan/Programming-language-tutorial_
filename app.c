#include <stdio.h>
#include <stdlib.h>

int main()
{
    int recursion = 1, click_trig = 1;
    char content[65535];
    
    while (recursion){
        if (click_trig){
            recursion = 1;
        }
        else{
            recursion = 0;
        }
        printf("(waiting u click specific link...)");
        scanf("%d", &click_trig);
    }
    // flag in the comment:) or else diretory
    return 0;
}
