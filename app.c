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
    if ( fp == NULL )  // 空檔案
       printf("檔案開啟失敗! \n");
    else{
        printf("檔案開啟成功! \n");
        if (fgets(content, sizeof(content), fp) != NULL)  // fp 是用於讀取文件的文件指針
            printf("%s", content);
        fclose(fp);  // 關閉檔案
    }
    return 0;
}
