#include <unistd.h>

void     hidenp(char *str1, char *str2)
{
    while (*str2 != 0)
    {
        if (*str1 == *str2)
            str1++;
        str2++;
    }
    (*str1 == 0) ? write(1, "1", 1) : write(1, "0", 1);
}

int     main(int argc, char *argv[])
{
    if (argc != 3)
    {
        write(1, "\n", 1);
        return (0);
    }
    hidenp(argv[1], argv[2]);
    
    return (0);
}
