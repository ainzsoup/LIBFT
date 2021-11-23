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
	t_list	*temp;

	while (lst != NULL)
	{
		f(lst->content);
		temp = lst->next;
		lst = temp;
	}
	lst = NULL;
}

/*void	f(void *content)
{
	int i = 0;
	content = &i;
}

void	print(t_list *head)
{
	while(head)
	{
		printf("%d-->", *(int *)head->content);
		head = head->next;
	}
	printf("NULL\n");
}

int main()
{
	t_list	*list;

	int i, j, k;

	i = 0; j = 1; k = 2;

	t_list a, b, c;

	list = &a;
	a.next = &b;
	b.next = &c;
	c.next = NULL;

	a.content = &i;
	b.content = &j;
	c.content = &k;
	print (list);
	ft_lstiter(list, f);
	print (list);
	return 0;

}*/