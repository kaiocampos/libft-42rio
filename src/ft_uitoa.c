#include "libft.h"

static size_t	count_digits(size_t n)
{
	unsigned int	digits;

	if (n == 0)
		return (1);
	digits = 0;
	while (n > 0)
	{
		digits++;
		n /= 10;
	}
	return (digits);
}

char	*ft_uitoa(unsigned int n)
{
	char			*result;
	unsigned int	digits;

	digits = count_digits(n);
	result = (char *)malloc(digits + 1);
	if (result == NULL)
		return (NULL);
	result[digits] = '\0';
	while (digits > 0)
	{
		result[(digits - 1)] = (n % 10) + '0';
		n /= 10;
		digits--;
	}
	return (result);
}
