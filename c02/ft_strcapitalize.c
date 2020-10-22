//
//  ft_strcapitalize.c
//  c02 practice
//
//  Created by toispre on 2020/10/21.
//  Copyright © 2020 toispre. All rights reserved.
//

char    *ft_strcapitalize(char *str)
{
    int i;
    
    i = 0;
    
    while (str[i] != '\0')
    {
        if (i == 0)
            if ((str[i] >= 97 && str[i] <= 122))
                str[i] = str[i] - 32;
        
        if ((str[i] >= 97 && str[i] <= 122))
        {
            if (!((str[i-1] >= 97 && str[i-1] <= 122) || (str[i-1] >= 65 && str[i-1] <= 90)))
                str[i] = str[i] - 32;
        }
        
        else if(str[i] >= 65 && str[i] <= 90)
        {
            if ((str[i-1] >= 97 && str[i-1] <= 122) || (str[i-1] >= 65 && str[i-1] <= 90))
                str[i] = str[i] + 32;
        }
        i++;
    }
    
    return (str);
}
