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

static char	*ft_parttwo(int n, char *res, int i, int len)
{
	if (n < 0)
	{
		res[0] = '-';
		n = n * -1;
		i++;
	}
	if (n == 0)
	{
		res[0] = '0';
		return (res);
	}
	while (len > i)
	{
		res[len - 1] = (n % 10) + '0';
		n = n / 10;
		len--;
	}
	return (res);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		len;
	int		i;

	i = 0;
	len = f_len(n);
	res = (char *)malloc(sizeof(char) * len + 1);
	if (!res)
		return (NULL);
	res[len] = '\0';
	if (n == -2147483648)
	{
		ft_memcpy(res, "-2147483648", 11);
		return (res);
	}
	return (ft_parttwo(n, res, i, len));
}

/*int main()
{
	char	*str = ft_itoa(-2147483648);
	printf("%s", str);
	return 0;
}
*/