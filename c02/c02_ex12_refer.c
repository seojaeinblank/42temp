#include <stdio.h>

#include <unistd.h>

void	print_addr(unsigned long long cast_addr)
{
	unsigned char	addr_array[16];
	int				i;

	i = 0;
	while (cast_addr != 0)
	{
		if (0 <= (cast_addr % 16) && (cast_addr % 16) <= 9)
			addr_array[i] = cast_addr % 16 + 48;
		else if (10 <= (cast_addr % 16) && (cast_addr % 16) <= 15)
			addr_array[i] = cast_addr % 16 + 87;
		cast_addr = cast_addr / 16;
		i++;
	}
	while (i < 16)
	{
		addr_array[i] = 48;
		i++;
	}
	i--;
	while (0 <= i)
	{
		write(1, &addr_array[i], 1);
		i--;
	}
	write(1, ": ", 2);
}

void	write_hex_code(unsigned char *str)
{
	int value;
	int i;

	i = 2;
	while (i != 0)
	{
		if (i == 2)
			value = *str / 16;
		else
			value = *str % 16;
		if (0 <= value && value <= 9)
		{
			value = value + 48;
			write(1, &value, 1);
		}
		else if (10 <= value && value <= 15)
		{
			value = value + 87;
			write(1, &value, 1);
		}
		i--;
	}
}

void	print_16_hex(void *addr, unsigned int number, unsigned int size)
{
	int i;

	i = 0;
	while (i < 16)
	{
		if (i + number < size)
		{
			if (i % 2 == 0)
				write_hex_code((unsigned char *)(addr + number + i));
			else
			{
				write_hex_code((unsigned char *)(addr + number + i));
				write(1, " ", 1);
			}
		}
		else
		{
			if (i % 2 == 1)
				write(1, "   ", 3);
			else
				write(1, "  ", 2);
		}
		i++;
	}
}

void	print_16_char(void *addr, unsigned int number, unsigned int size)
{
	unsigned int		i;

	i = 0;
	while (i < 16)
	{
		if (i + number < size)
		{
			if (*(unsigned char *)(addr + number + i) < 32)
				write(1, ".", 1);
			else if (126 < *(unsigned char *)(addr + number + i))
				write(1, ".", 1);
			else
				write(1, (unsigned char *)(addr + number + i), 1);
		}
		i++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int		i;
	unsigned long long	cast_addr;

	i = 0;
	while (i < size)
	{
		cast_addr = (unsigned long long)(addr + i);
		print_addr(cast_addr);
		print_16_hex(addr, i, size);
		print_16_char(addr, i, size);
		i = i + 16;
		write(1, "\n", 1);
	}
	return (addr);
}


int main()
{
	char str[100];
	int i;
	for(i=0; i<100; i++)
	{
		ft_print_memory(str, i);
	}
	printf("%p\n", &str[0]);
	
	str[0] = 18;
	str[1] = 13;
	ft_print_memory(str, 33);
	printf("%p\n", &str[0]);
	printf("%p\n", &str[16]);
	printf("%p\n", &str[32]);
	
	return 0;
}
