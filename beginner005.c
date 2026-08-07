#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char target[65535];
    int x = 0, y = 0, index = 0, walking = 0, target_[3];
    fgets(target, 65534, stdin);
    char *p = strtok(target, "(, )");
    while (p != NULL){
        target_[index] = atoi(p);
        index++;
        p = strtok(NULL, "(, )");
    }
    while (x < target_[0] && y > target_[1]){
        x++;
        y--;
        walking++;
    }
    printf("%d", walking);
    return 0;
}

/*
Once you understand the robot's movement pattern, you can implement it using the code below:

char target[65535];
scanf("%s", target);
printf("%d", atoi(target + 1));

*/
