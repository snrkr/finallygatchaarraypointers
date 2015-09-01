#include <stdio.h>

int main(int argc, char *argv[])
{
    char *c1[] = {"Hey","Hello"};
    char **c2 = c1;
    printf("%s\n",c2[1]);
    c2[1] = "ddsfsd";
    printf("%s\n",c2[1]);
        

    return 0;
}
