/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgamraou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 18:21:32 by sgamraou          #+#    #+#             */
/*   Updated: 2021/11/10 20:56:42 by sgamraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	f_len(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		count++;
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char			*res;
	int				len;
	int				i;
	unsigned int	nu;

	i = 0;
	len = f_len(n);
	res = (char *)malloc(sizeof(char) * len + 1);
	if (!res)
		return (NULL);
	res[len] = '\0';
	if (n < 0)
	{
		res[0] = '-';
		n = n * -1;
		i++;
	}
		nu = (unsigned int)n;
	while (len > i)
	{
		res[len - 1] = (nu % 10) + '0';
		nu = nu / 10;
		len--;
	}
	return (res);
}

// int main()
// {
// 	char	*str = ft_itoa(+2147483647);
// 	printf("%s", str);
// 	return 0;
// }
