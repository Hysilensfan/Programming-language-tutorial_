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
    
    FILE *fp = fopen("flag.txt","r");
    if ( fp == NULL )  // to check aren't it a null file
       printf("Failed to open file.!\n");
    else{
        printf("Success to open file!\n");
        if (fgets(content, sizeof(content), fp) != NULL)  // fp use to read the object's point
            printf("%s", content);
        fclose(fp);  // close the file
    }
    return 0;
}
