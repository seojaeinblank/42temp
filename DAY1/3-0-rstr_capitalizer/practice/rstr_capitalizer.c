#include <unistd.h>

void    rstr_capitalizer (char *str)
{
    int i;
    i = 0;
    while (str[i] != 0)
    {
    if ((str[i] >= 'A' && str[i] <= 'Z'))
    {
        str[i] = str[i] + 32;
        i++;
    }
    else
        i++;
    }
    i = 0;
    while (str[i] != 0)
    {
    if(str[i] >= 'a' && str[i] <= 'z')
    {
        if(str[i+1] == ' ' || str[i+1] == 0)
            str[i] = str[i] - 32;
    }
        i++;
    }
}
void    putstr(char *str)
{
    int i;
    
    i = 0;
    while(str[i] != 0)
    {
        write(1, &str[i], 1);
        i++;
    }
    write(1, "\n", 1);
}

int main(int argc, char *argv[])
{
    int i = 0;
    if (argc == 1)
    {
        write (1, "\n", 1);
        return (0);
    }
    i++;
    while (argv[i] != 0)
    {
        rstr_capitalizer(argv[i]);
        putstr(argv[i]);
        i++;
    }
    return (0);
}
