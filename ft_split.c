/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmilovid <dmilovid@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 10:34:29 by dmilovid          #+#    #+#             */
/*   Updated: 2024/03/16 10:34:40 by dmilovid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//splits a string using a char as parameter
static size_t	ft_count(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (*s)
	{
		if (*s != c && i == 0)
		{
			i = 1;
			count++;
		}
		else if (*s == c)
			i = 0;
		s++;
	}
	return (count);
}

static void	ft_free_str_array(char **str_array)
{
	size_t	i;

	if (!str_array)
		return ;
	i = 0;
	while (str_array[i])
	{
		free(str_array[i]);
		i++;
	}
	free(str_array);
	return ;
}

static char	**ft_returnstr(char const *s, char c, char *start, char **res)
{
	size_t	j;

	j = 0;
	while (*s)
	{
		if (*s != c)
		{
			start = (char *)s;
			while (*s && *s != c)
				s++;
			res[j] = ft_substr(start, 0, s - start);
			if (!res[j])
			{
				ft_free_str_array(res);
				return (NULL);
			}
			j++;
		}
		else
			s++;
	}
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	char	*start;

	res = ft_calloc((ft_count(s, c) + 1), sizeof(char *));
	start = NULL;
	res = ft_returnstr(s, c, start, res);
	return (res);
}
