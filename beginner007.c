#include <stdio.h>
#include <string.h>

int main(){
    char rockyou[][20] = {
        "123456",
        "12345",
        "123456789",
        "password",
        "iloveyou",
        "princess",
        "1234567",
        "rockyou",
        "12345678",
        "abc123"}
        , input[100], *flag = "False";
/*
The flag stores the address of a string literal
So The pointer can be changed
But the string literal cannot be modified
*/
    scanf("%s", input);
    int len = sizeof(rockyou) / sizeof(rockyou[0]);  // Stores the number of strings in the array
    for (int i = 0;i < len;i++){
        if (strcmp(input, rockyou[i]) == 0){  // After compare, if same return 0
            flag = "True";
            break;
        }
    }
    printf("%s\n", flag);
    return 0;
}
