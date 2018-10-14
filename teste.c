/* This is a training program
 * I will learn C language and test my skill
 * On files like this one.
 */

#include <stdio.h>

void skip(char *msg)
{
    puts(msg +6);
}


int main(void)
{
    char *msg = "Don't call me";
    skip(msg);

    return 0;
}

