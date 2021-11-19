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
	while (str[i] != c)
	{
		if (!str[i])
			return (NULL);
		i++;
	}
	return (&str[i]);
}

/*int main ()
{
	
	int c = 'n';
	char	*ret;
	ret = ft_strchr("bonjour", c);

	printf("%s", ret);
	return 0;

}*/
