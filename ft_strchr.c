/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgamraou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 19:30:22 by sgamraou          #+#    #+#             */
/*   Updated: 2021/11/12 18:04:51 by sgamraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)

{
	int		i;
	char	*str;

	i = 0;
	str = (char *)s;
	if (c >= 256)
		c = c - 256;
	while (str[i] != c)
	{
		if (!str[i])
			return (NULL);
		i++;
	}
	return (&str[i]);
}

// int main ()
// {
// 	printf("%s\n", ft_strchr("bconjour", 'r' + 256));
// 	printf("%s", strchr("bconjour", 'r' + 256));
// 	return 0;
// }
