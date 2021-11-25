/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgamraou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 16:59:39 by sgamraou          #+#    #+#             */
/*   Updated: 2021/11/19 16:41:56 by sgamraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/*void	ft_f(void *content)
{
	int i = 0;
	char *s;
	s = (char *)(content);
	while (s[i])
	{
		s[i] = ft_toupper(s[i]);
		i++;
	}
}

void print(t_list *list)
{
	while (list)
	{
		printf("[%s]-->", list->content);
		list = list->next;
	}
	printf("NULL\n");
}

int main()
{
	t_list	*list;

	char	f[8] = "first";
	char	s[8] = "second";
	char 	t[8] = "third";

	list = NULL;

	ft_lstadd_back(&list, ft_lstnew(f));
	ft_lstadd_back(&list, ft_lstnew(s));
	ft_lstadd_back(&list, ft_lstnew(t));
	print(list);
	ft_lstiter(list, &ft_f);
	print(list);
	return 0;
}*/