/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgamraou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 11:42:13 by sgamraou          #+#    #+#             */
/*   Updated: 2021/11/09 14:23:18 by sgamraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	int		i;

	i = 0;
	str = (char *)s;
	while (n > 0)
	{
		if (str[i] == c)
			return (&str[i]);
		i++;
		n--;
	}
	return (NULL);
}

/*int main ()
{
	const char str[] = "sohaib is dumb";
	int c = 'd';
	char	*ret;
	ret = ft_memchr(str, c, 11);
    char *ret2 = memchr(str, c, 11);

	printf("%s\n%s", ret, ret2);
	return 0;

}*/
