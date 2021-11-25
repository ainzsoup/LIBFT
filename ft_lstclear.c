/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgamraou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 21:05:28 by sgamraou          #+#    #+#             */
/*   Updated: 2021/11/19 16:40:30 by sgamraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	while (*lst != NULL)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
}

/*void ft_del(void *content)
{
	free (content);
}

void print_list(t_list *list)
{
	printf("the content of our list: ");
	while (list)
	{
		printf("|%s| ", list->content);
		list = list->next;
	}
	printf("\n");
}

int	main()
{
	t_list *list;
	char	*f;
	char	*s;
	char	*t;

	f = malloc(7);
	s = malloc(7);
	t = malloc (7);

	ft_strlcpy(f, "first", 7);
	ft_strlcpy(s, "second", 7);
	ft_strlcpy(t, "third", 7);

	list = NULL;
	ft_lstadd_back(&list, ft_lstnew(f));
	ft_lstadd_back(&list, ft_lstnew(s));
	ft_lstadd_back(&list, ft_lstnew(t));
	print_list(list);
	ft_lstclear(&list, &ft_del);
	print_list(list);
}*/