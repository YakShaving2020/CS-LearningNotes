#include <stdio.h>

/* This is a comment. */
int main(int argc, char *argv[])
{
    int distance = 100;

    // this is also a comment
    printf("You are %d miles away.\n", distance);

    puts("Hello world\n");

    // 查看puts() 函数
    puts("===== man 3 puts =====");
    puts("\nLinux Programmer's Manual");
    puts("\tSYNOPSIS\n\t\tint puts(const char *s)");
    puts("\tDESCRIPTION\n\t\tputs() writes the string s and a trailing newline to stdout.");
    puts("\tRETURN VALUE\n\t\tputs() and fputs() return a nonnegative number on success, or EOF on error.");

    return 0;
}
