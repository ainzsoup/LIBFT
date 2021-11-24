/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgamraou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 21:04:33 by sgamraou          #+#    #+#             */
/*   Updated: 2021/11/19 16:41:08 by sgamraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst)
	{
		del(lst->content);
		free (lst);
	}
}

/*void print_list(t_list *list)
{
	printf("the content of our list: ");
	while (list)
	{
		printf("|%s| ", list->content);
		list = list->next;
	}
	printf("\n");
}
void ft_del(void *content)
{
	free (content);
}

int main()
{
	t_list *list;
	char	*f;
	f = malloc(7);
	ft_strlcpy(f, "first", 7);
	list = NULL;
	ft_lstadd_back(&list, ft_lstnew(f));
	print_list(list);
	ft_lstdelone(list, &ft_del);
	print_list(list);
}*/