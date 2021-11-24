/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgamraou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 16:18:36 by sgamraou          #+#    #+#             */
/*   Updated: 2021/11/20 13:19:38 by sgamraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = ft_strlen((char *)s);
	if (!s)
		return (NULL);
	if (c >= 256)
		c -= 256;
	while (len > 0)
	{
		if (s[len] == c)
			return ((char *)s + len);
		len--;
	}
	if (s[len] == c)
		return ((char *)s + len);
	return (NULL);
}

// int main ()
// {
// 	char str2[] = "bonjour";
// 	// char *str = ft_strrchr(str2, 's');
// 	char *sttrrr = strrchr(str2, ' ');
// 	printf("strrchr %s\n", sttrrr);
// }
