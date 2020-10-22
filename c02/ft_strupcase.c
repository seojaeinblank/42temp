//
//  ft_strupcase.c
//  c02 practice
//
//  Created by toispre on 2020/10/21.
//  Copyright © 2020 toispre. All rights reserved.
//

char     *ft_strupcase(char *str)
{
    int i;
    
    i = 0;
    
    while (str[i] != '\0')
        {
        if (str[i] >= 97 && str[i] <= 122)
            str[i] = str[i] - 32;
        i++;
        }
        
    
    return (str);
}
