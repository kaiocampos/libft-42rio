#include "libft.h"

void	ft_free_arr(void ***arr)
{
	int	i;

	i = -1;
	if (*arr != NULL)
	{
		while ((*arr)[++i])
		{
			ft_free_ptr((void *)&(*arr)[i]);
			(*arr)[i] = NULL;
		}
		free(*arr);
	}
}
