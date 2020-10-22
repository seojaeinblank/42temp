//
//  ft_strlowcase.c
//  c02 practice
//
//  Created by toispre on 2020/10/21.
//  Copyright © 2020 toispre. All rights reserved.
//



char     *ft_strlowcase(char *str)
{
    int i;
    
    i = 0;
    
    while (str[i] != '\0')
        {
        if (str[i] >= 65 && str[i] <= 90)
            str[i] = str[i] + 32;
        i++;
        }
        
    
    return (str);
}
