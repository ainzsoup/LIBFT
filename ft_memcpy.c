/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgamraou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 13:49:29 by sgamraou          #+#    #+#             */
/*   Updated: 2021/11/09 20:19:51 by sgamraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*dest;
	char	*source;

	i = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	dest = (char *)dst;
	source = (char *)src;
	while (i < n)
	{
		dest[i] = source[i];
		i++;
	}
	return (dst);
}
// int main()
// {
// 	int src[] = {-12, 89, 45, 98, 73, 13};
// 	int dst[] = {1, 1, 1, 1, 1, 1};
// 	ft_memcpy(dst, src, 12);
// 	int i = 0;
// 	while (i < 6)
// 		printf("[%d]	", dst[i++]);
// 	return 0;
// }