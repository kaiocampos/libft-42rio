#include "libft.h"

char	*ft_append_char(char *str, char c)
{
	char	*new_str;
	int		str_size;
	int		i;

	i = -1;
	if (str)
		str_size = ft_strlen(str);
	else
		str_size = 0;
	new_str = malloc((str_size + 2) * sizeof(char));
	while (++i < str_size)
		new_str[i] = str[i];
	new_str[str_size] = c;
	new_str[str_size + 1] = '\0';
	ft_free_ptr((void *)&str);
	return (new_str);
}
