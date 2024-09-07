/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmilovid <dmilovid@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 10:17:45 by dmilovid          #+#    #+#             */
/*   Updated: 2024/03/16 10:18:03 by dmilovid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//concatenates two strings объединяет две строки
char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (!s1 && !s2)
		return (NULL);
	i = ft_strlen(s1);
	j = ft_strlen(s2);
	str = ft_calloc((i + j + 1), sizeof(char));
	ft_strlcpy(str, s1, (i + 1));
	ft_strlcat(str, s2, (i + j + 1));
	return (str);
}

// int	main(void)
// {
// 	printf("%s",ft_strjoin("42","Warsaw"));
// }
