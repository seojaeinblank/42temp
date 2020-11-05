#include <stdio.h>
int		ft_atoi(char *s)
{
	int sign;
	int result;

	result = 0;
	sign = 1;
	while (*s == 32 || (*s >= 9 && *s <= 13))
		s++;
	if (s[0] == '-' || s[0] == '+')
	{
		if (s[0] == '-')
			sign = -1;
		s++;
	}
	while(*s >= '0' && *s <= '9')
	{
		result = result * 10 + *s - '0';
		s++;
	}
	result *= sign;
	return result;
}

int		main(void)//
{//
	char a[] = "    \n\n\v\f\r\t -5234AAAgreghrsth";// -5234
	printf("%d\n",ft_atoi(a));//
}//

