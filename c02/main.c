//
//  main.c
//  c02 practice
//
//  Created by toispre on 2020/10/21.
//  Copyright © 2020 toispre. All rights reserved.
//

/* EX01
#include <unistd.h>

char    ft_strcpy(char *dest, char *src);

int main() {
    char dest[10];
    char src[9] = "test";
    ft_strcpy(dest, src);
    for (int i = 0; dest[i] != '\0'; i++)
        write(1, &dest[i], 1);
}
 */

/* EX02
#include <unistd.h>

char    ft_strcpy(char *dest, char *src);

int main() {
    char dest[10];
    char src[9] = "test";
    ft_strncpy(dest, src, 6);
    for (int i = 0; dest[i] != '\0'; i++)
        write(1, &dest[i], 1);
}
 */

//EX02


/*

int     ft_str_is_alpha(char *str);

int main()
{
    int  t;
    
    
    char test[4] = "!@51";
       t = ft_str_is_alpha(test);
       if(t == 0)
           write(1, "c", 1);
       else
           write(1, "d", 1);
       
    
      char test2[5];
      t = ft_str_is_alpha(test2);
       if(t == 0)
             write(1, "c", 1);
         else
             write(1, "d", 1);

    char test3[5] = "apple";
    t = ft_str_is_alpha(test3);
     if(t == 0)
           write(1, "c", 1);
    else
           write(1, "d", 1);
    
}

*/

/*
int     ft_str_is_numeric(char *str);

int main()
{
    int  t;
    
    
    char test[4] = "1551";
       t = ft_str_is_numeric(test);
       if(t == 0)
           write(1, "c", 1);
       else
           write(1, "d", 1);
       
    
      char test2[5];
      t = ft_str_is_numeric(test2);
       if(t == 0)
             write(1, "c", 1);
         else
             write(1, "d", 1);

    char test3[5] = "apple";
    t = ft_str_is_numeric(test3);
     if(t == 0)
           write(1, "c", 1);
    else
           write(1, "d", 1);
    
}

*/
/*
char    *ft_strupcase(char *str);
char    *ft_strlowcase(char *str);

int main()
{
    int i;
    char str[10] = "ap215ple";
    
    ft_strupcase(str);
    i = 0;
    while (str[i] != '\0')
    {
        write(1, &str[i], 1);
        i++;
    }
    
    ft_strlowcase(str);
    i = 0;
    while (str[i] != '\0')
    {
        write(1, &str[i], 1);
        i++;
    }
}
*/
// EX09
#include <unistd.h>
char    *ft_strcapitalize(char *str);

int main()
{
    int i;
    
    i = 0;
    
    char str[100] = "asklj! fdo+ DFASG DA+Ss+aS";
    
    ft_strcapitalize(str);
    while (str[i] != '\0')
    {
        write(1, &str[i], 1);
        i++;
    }
}

