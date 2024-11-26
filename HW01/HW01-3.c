#include <stdio.h>

int main() {
    char first[30], last[30] ;
    //input
    printf("Test case:\n") ;
    printf("    First Name:") ;
    scanf("%s", &first) ;
    printf("    Last Name:") ;
    scanf("%s", &last);

    //output
    printf("Output :\n") ;
    printf("%s %ss TC, RMUTL, Chiang Mai, Thailand", first, last) ;
    return 0 ;
}