/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgamraou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 18:15:43 by sgamraou          #+#    #+#             */
/*   Updated: 2021/11/12 17:59:27 by sgamraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	lens;
	size_t	lend;
	size_t	i;

	if (!dst && src[0] == '\0' && dstsize == 0)
		return (0);
	lens = ft_strlen((char *)src);
	lend = ft_strlen((char *)dst);
	i = 0;
	if (dstsize <= lend || dstsize == 0)
		return (dstsize + lens);
	while (src[i] && i < dstsize - lend - 1)
	{
		dst[lend + i] = src[i];
		i++;
	}
	dst[lend + i] = '\0';
	return (lend + lens);
}
// int main()
// {
// 	printf("%lu", ft_strlcat(NULL, "", 0));
// }