/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmilovid <dmilovid@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 17:11:27 by dmilovid          #+#    #+#             */
/*   Updated: 2024/03/09 17:27:48 by dmilovid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//copy memory area
void	*ft_memmove(void *destination, const void *source, size_t n)
{
	unsigned char	*dest;
	unsigned char	*sour;

	dest = (unsigned char *)destination;
	sour = (unsigned char *)source;
	if (sour < dest)
		while (n--)
			dest[n] = sour[n];
	else
		ft_memcpy(destination, source, n);
	return (destination);
}
