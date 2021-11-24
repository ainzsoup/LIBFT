/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgamraou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 20:38:57 by sgamraou          #+#    #+#             */
/*   Updated: 2021/11/09 16:06:08 by sgamraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_sus(char *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static char	*ft_allocate(const char *s1, int i, int end, int len)
{
	int		k;
	char	*trimmed;

	k = ft_strlen((char *)s1) - i - end + 1;
	trimmed = (char *)malloc(sizeof(char) * k);
	if (!trimmed)
		return (NULL);
	while (k-- > 1)
		trimmed[len++] = s1[i++];
	trimmed[len] = '\0';
	return (trimmed);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		len;
	int		end;

	if (s1 == NULL || set == NULL)
		return (NULL);
	i = 0;
	end = 0;
	len = ft_strlen((char *)s1);
	while (s1[i] && ft_sus((char *)set, s1[i]))
		i++;
	while (len > 0 && ft_sus((char *)set, s1[len - 1]))
	{
		len--;
		end++;
	}
	if (i >= len)
		return (ft_strdup(""));
	len = 0;
	return (ft_allocate(s1, i, end, len));
}

/*int main()
{
	char *str = "Hello \t  Please\n Trim me !";
	char *s = " \n\t";
	char *res = ft_strtrim(str, s);
	printf("%s", res);
}
*/