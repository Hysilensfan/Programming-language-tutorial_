#include <stdio.h>

int main()
{
    int d;
    scanf("%d", &d);
    if (d >= 50) {
        printf("搭計程車\n");
    }
    else if (d >= 25) {
        printf("搭公車\n");
    }
    else if (d >= 1) {
        printf("騎腳踏車\n");
    }
    else {
        printf("走路\n");
    }
    return 0;
}
