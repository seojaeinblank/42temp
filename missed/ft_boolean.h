

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments.\n"
# define SUCCESS 0
# define TRUE 1
# define FALSE 0

# define EVEN is_even

typedef char	t_bool;

t_bool	is_even(int n)
{
	return (n % 2 == 0 ? TRUE : FALSE);
}

#endif
