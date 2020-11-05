

#include <unistd.h>

unsigned char reverse_bits(unsigned char octet)
{
    octet = (octet & 0xF0) >> 4 | (octet & 0x0f) << 4; //0110 0010
    octet = (octet & 0xCC) >> 2 | (octet & 0x33) << 2; // 1001  1000
   // octet = (octet & 0xAA) >> 1 | (octet & 0x55) << 1; // 0110  0100
    
    return octet;
}

int	main(void)
{
	unsigned char c;

	c = '&';
	write(1, &c, 1);
	write(1, "\n", 1);
	c = reverse_bits(c);
	write(1, &c, 1);
	write(1, "\n", 1);
	return (0);
}
