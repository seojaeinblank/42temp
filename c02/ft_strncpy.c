//
//  ft_strncpy.c
//  c02 practice
//
//  Created by toispre on 2020/10/21.
//  Copyright © 2020 toispre. All rights reserved.
//


char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
    int i;
    
    i = 0;
    
    while (i < n)
    {
        dest[i] = src[i];
        i++;
    }
    return (dest);
}
