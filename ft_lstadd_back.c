/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgamraou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 21:03:55 by sgamraou          #+#    #+#             */
/*   Updated: 2021/11/19 15:52:53 by sgamraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	new->next = NULL;
	if (! *lst)
		*lst = new;
	else
	{
		temp = *lst;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
}

// void	print(t_list *head)
// {
// 	while (head)
// 	{
// 		printf("%d-->", *(int *)head->content);
// 		head = head->next;
// 	}
// 	printf("NULL\n");
// }

// int main()
// {
// 	t_list	*lst;

// 	t_list a, b, c;
// 	lst = &a;
// 	a.next = &b;
// 	b.next = &c;
// 	c.next = NULL;

// 	int i, j, k, l;
// 	i = 1; 
// 	j = 2;
// 	k = 3;
// 	l = 4;

// 	a.content = &i;
// 	b.content = &j;
// 	c.content = &k;
// 	print(lst);

// 	t_list new;

// 	new.content = &l;
// 	ft_lstadd_back(&lst, &new);
// 	print(lst);
// 	return 0;
// }
