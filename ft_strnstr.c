/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgamraou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 18:53:21 by sgamraou          #+#    #+#             */
/*   Updated: 2021/11/11 16:37:33 by sgamraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	len2;

	if (!s1 && !len)
		return (NULL);
	if (*s2 == '\0')
		return ((char *)s1);
	len2 = ft_strlen((char *)s2);
	while (*s1 != '\0' && len >= len2)
	{
		if (ft_strncmp(s1, s2, len2) == 0)
			return ((char *)s1);
		s1++;
		len--;
	}
	return (NULL);
}

// int main()
// 
// 	char *str = ft_strnstr(0, "fake", 0);
// 	// char *str2 = strnstr(0, "fake", 0);
// 	// printf("%s\n", str2);
// 	printf("%s", str);
// }