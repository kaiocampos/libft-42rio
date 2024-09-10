#include "libft.h"

static size_t	count_digits(size_t n, int base_length)
{
	unsigned int	digits;

	if (n == 0)
		return (1);
	digits = 0;
	while (n > 0)
	{
		digits++;
		n /= base_length;
	}
	return (digits);
}

char	*ft_uitohex(unsigned int n, char *base_str)
{
	unsigned int	int_to_hex;
	size_t			digits;
	int				base_length;
	char			*result;

	base_length = ft_strlen(base_str);
	int_to_hex = n;
	digits = count_digits(n, base_length);
	result = (char *)malloc(digits + 1);
	if (!result)
		return (0);
	result[digits--] = '\0';
	while (int_to_hex > 0)
	{
		result[digits--] = base_str[int_to_hex % base_length];
		int_to_hex /= base_length;
	}
	if (digits == 0 && result[1] == '\0')
		result[0] = '0';
	return (result);
}
