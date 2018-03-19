#include <stdlib.h>
#include <stdio.h>

int isMultN(unsigned int n)
{
    int odd_c = 0, even_c = 0; /* variables to count odd and even SET bits */
    if (n == 0)    // return true if difference is 0.
        return 1;
    if (n == 1)    // return false if the difference is not 0.
        return 0;

    while (n) {
        if (n & 1)   // odd bit is SET, increment odd_C
            odd_c++;
        n >>= 1;

        if (n & 1)   // even bit is SET, increment even_c
            even_c++;
        n = n >> 1;
    }
    //printf("odd_c : %d even_c :%d\n", odd_c, even_c);
    /* Recursive call till you get 0/1 */
    return(isMultN(abs(odd_c - even_c)));
}

int main()
{
    unsigned int a;

    while(1) {
        //printf("Please input a number : ");
        scanf(" %u", &a);

        if(isMultN(a) == 1)printf("%u 是三的倍數\n", a);
        else printf("%u 不是三的倍數\n", a);
    }

}
