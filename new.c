#include <stdio.h>
int main() {
    char  rows=5;
    char A;
    for (char i = 'A'; i <= rows; i++) {
        for (char j = 'A'; j <= i; j++) {
            printf("%c",j);
        }
        printf("\n");
    }
    return 0;
}