//
//  ft_str_is_alpha.c
//  c02 practice
//
//  Created by toispre on 2020/10/21.
//  Copyright © 2020 toispre. All rights reserved.
//

int     ft_str_is_alpha(char *str)
{
    int i;
    
    i = 0;
    
    if (str[0] == '\0')
        return (1);
    else
    {
        while (str[i] != '\0')
        {
            if (str[i] >= 65 && str[i] <= 90)
                return (1);
            else if (str[i] >= 97 && str[i] <= 122)
                return (1);
            i++;
        }
        
    }
    return (0);
}
