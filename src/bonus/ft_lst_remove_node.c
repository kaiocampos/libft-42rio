#include "libft.h"

void	ft_lst_remove_node(t_list **lst_head, t_list *node_to_delete)
{
	t_list	*pivot;

	pivot = *lst_head;
	if (pivot == node_to_delete)
	{
		*lst_head = (*lst_head)->next;
		ft_free_ptr((void *)&node_to_delete->content);
		free(node_to_delete);
		return ;
	}
	while (pivot)
	{
		if (pivot->next == node_to_delete)
		{
			pivot->next = node_to_delete->next;
			ft_free_ptr((void *)&node_to_delete->content);
			free(node_to_delete);
		}
		else
			pivot = pivot->next;
	}
	return ;
}
