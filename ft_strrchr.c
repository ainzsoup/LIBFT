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
	char	*str;
	int		len;

	str = (char *)s;
	len = ft_strlen(str);
	while (str[len] != c)
	{
		if (len < 0)
			return (NULL);
		len--;
	}
	return (&str[len]);
}

/*int main()
{
  
   const char str[] = "bonjour";
   const char ch = 's';
   char *ret;

   ret = ft_strrchr(str, ch);

   printf("%s", ret);
   
   return(0);
}*/
