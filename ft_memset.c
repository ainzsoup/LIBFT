/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgamraou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 10:57:50 by sgamraou          #+#    #+#             */
/*   Updated: 2021/11/10 18:06:24 by sgamraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	int		i;
	char	*ret;

	i = 0;
	ret = (char *)b;
	while (len > 0)
	{
		ret[i] = c;
		len--;
		i++;
	}
	return (b);
}

/*int main ()
{
   char str[] = "perfectly balanced as all things should be";
   printf("%s \n", str);

	ft_memset(str + 15, '\0', 8*sizeof(char));
   printf("%s \n", str);

    char idk[]= "perfectly balanced as all things should be";
    memset(idk + 15, '\0', 8*sizeof(char));
    printf("%s\n", idk);
}*/
