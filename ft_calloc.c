/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgamraou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 20:43:53 by sgamraou          #+#    #+#             */
/*   Updated: 2021/11/09 14:09:45 by sgamraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, size * count);
	return (ptr);
}

// int main()
// {
// 	int	*ptr;
// 	int n = 3;
// 	ptr = (int *)ft_calloc(n, sizeof(int));

// 	if (ptr == NULL)
// 	{
// 		printf("Memory not allocated.\n");
// 		return 0;
// 	}
// 	else 
// 	{
// 		printf("Memory successfully allocated lesgoooo!! \n");
// 		for (int i = 0; i < n; i++)
// 			ptr[i] = i + 1;		
// 		for (int i = 0; i < n; i++)
// 			printf("[%d]	", ptr[i]);
// 	}
// 	return 0;
// }
