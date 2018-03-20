#include <stdlib.h>
#include <stdio.h>

int isMultN(unsigned int n)
{
    if(n <= 7) {
        if ( (n == 7) || (n == 0) )    // return true if only 7 or 0 is left
            return 1;
        else    // return false if the number left is not 7 or 0
            return 0;
        //for number which is larger than 7
    } else n = (n >> 3) + (n & 7);


    /* Recursive call till you get 5 or less */
    return(isMultN(n));
}

int main()
{
    unsigned int a;

    while(1) {
        //printf("Please input a number : ");
        scanf(" %u", &a);

        if(isMultN(a) == 1)printf("%u 是7的倍數\n", a);
        else printf("%u 不是7的倍數\n", a);
    }

}