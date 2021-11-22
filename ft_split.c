/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgamraou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 16:47:48 by sgamraou          #+#    #+#             */
/*   Updated: 2021/11/09 15:41:00 by sgamraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	x_words(char *str, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i] != c && str[i])
			count++;
		while (str[i] != c && str[i])
			i++;
	}
	return (count);
}

static int	w_len(char *str, char c, int i)
{
	int	len;

	len = 0;
	while (str[i] != c && str[i])
	{
		len++;
		i++;
	}
	return (len);
}

static char	**free_all(char **str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
	return (NULL);
}

static char	**fill_strings(char **res, const char *str, char c)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	while (j < x_words((char *)str, c))
	{
		k = 0;
		while (str[i] == c)
			i++;
		res[j] = (char *)malloc(sizeof(char) * (w_len((char *)str, c, i) + 1));
		if (!res)
			return (free_all(res));
		while (str[i] != c && str[i])
			res[j][k++] = str[i++];
		res [j][k] = '\0';
		j++;
	}
	res[j] = 0;
	return (res);
}

char	**ft_split(char const *str, char c)
{
	char	**res;

	if (!str)
		return (NULL);
	res = (char **) malloc (sizeof (char *) * (x_words((char *)str, c) + 1));
	if (!res)
		return (NULL);
	return (fill_strings(res, str, c));
}

/*int main()
{
	char **str = ft_split("165454s6548672s6824s64s", 's');
	int i = 0;
	while (i < 4)
		printf("%s\n", str[i++]);
	
}*/
