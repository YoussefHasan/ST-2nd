
#include <stdio.h>
#include "func.h"

int main( int argc, char *argv[] )
{
    int user_number;
    printf("Enter your number: \n");
    scanf("%d", &user_number);
    int res = multiply(user_number);
    printf("Multiplied number: %d\n", res);

    return 0;
}
