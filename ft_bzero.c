/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgamraou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 12:00:07 by sgamraou          #+#    #+#             */
/*   Updated: 2021/11/19 16:18:42 by sgamraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//replaces whit zeroes n bytes 
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	int		i;
	char	*ret;

	i = 0;
	ret = (char *)s;
	while (n != 0)
	{
		ret[i] = '\0';
		n--;
		i++;
	}
}

/*int main ()
  {
  char str[] = "perfectly balanced as all things should be";
  printf("%s \n", str);

  ft_bzero(str, 8*sizeof(char));
  printf("%s \n", str);

  char idk[]= "perfectly balanced as all things should be";
  bzero(idk, 8*sizeof(char));
  printf("%s", idk);
  }
  */
