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

static int	is_sep(char c, char d)
{
	if (c == d)
		return (1);
	return (0);
}

static int	x_words(char *str, char c)
{
	int	i;
	int	new_word;
	int	x;

	i = 0;
	new_word = 0;
	x = 0;
	if (str[i] == '\0')
		return (0);
	while (str[i] != '\0')
	{
		if (is_sep(str[i], c) == 1)
			new_word = 0;
		else if (new_word == 0)
		{
			new_word = 1;
			x++;
		}
		i++;
	}
	return (x);
}

static int	w_len(char *str, char c, int i)
{
	int	len;

	len = 0;
	while (is_sep(str[i], c) == 0 && str[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}

char	**fill(char **res, const char *str, char c)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	while (str[i] != '\0' && j < x_words((char *)str, c))
	{
		k = 0;
		while (is_sep(str[i], c) == 1)
			i++;
		res[j] = (char *)malloc(sizeof(char) * (w_len((char *)str, c, i) + 1));
		if (!res)
		{
			free (res[j]);
			return (NULL);
		}
		while (is_sep(str[i], c) == 0 && str[i] != '\0')
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
	return (fill(res, str, c));
}

/*int main()
{
	char **str = ft_split("165454s6548672s6824s64s", 's');
	int i = 0;
	while (i < 4)
		printf("%s\n", str[i++]);
	
}*/
