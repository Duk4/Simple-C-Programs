#include <stdio.h>

int main(int argc, char **argv)
{
    printf("argc: %d\n", argc);
    printf("argv: %s\n", argv[3]);
    return 0;
};

// gcc args.c -o args
// When running the input was -> 'args 4 5 6 4.0 run'