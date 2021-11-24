/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgamraou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 17:36:00 by sgamraou          #+#    #+#             */
/*   Updated: 2021/11/09 16:07:23 by sgamraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sub;

	i = 0;
	if (!s)
		return (NULL);
	sub = (char *)malloc(sizeof(char) * len + 1);
	if (!sub)
		return (NULL);
	while (i < len && start <= (unsigned int)ft_strlen((char *)s))
		sub[i++] = s[start++];
	sub[i] = '\0';
	return (sub);
}

// int main()
// {
//     char src[] = "substr function Implementation";
//     char* dest = substr(src, 2, 2555555555555555);
//     printf("%s\n", dest);
//     return 0;
// }
