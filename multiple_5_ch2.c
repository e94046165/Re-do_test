#include <stdlib.h>
#include <stdio.h>

int isMultN(unsigned int n)
{
    if ( (n == 5) || (n == 0) )    // return true if only 5 is left
        return 1;
    if ( (n >> 2) < (n & 3) )    // return false if the number left is less than 5
        return 0;
    //for number which is larger than 5

    n = (n >> 2) - (n & 3);

    /* Recursive call till you get 5 or less */
    return(isMultN(n));
}

int main()
{
    unsigned int a;

    while(1) {
        //printf("Please input a number : ");
        scanf(" %u", &a);

        if(isMultN(a) == 1)printf("%u 是5的倍數\n", a);
        else printf("%u 不是5的倍數\n", a);
    }

}