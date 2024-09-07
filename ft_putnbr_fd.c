/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmilovid <dmilovid@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 11:32:44 by dmilovid          #+#    #+#             */
/*   Updated: 2024/03/16 11:32:51 by dmilovid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//output a number to a file descriptor
void	ft_putnbr_fd(int nb, int fd)
{
	long	num;

	num = nb;
	if (num < 0)
	{
		ft_putchar_fd('-', fd);
		num *= -1;
	}
	if (num >= 10)
		ft_putnbr_fd(num / 10, fd);
	ft_putchar_fd((num % 10) + '0', fd);
}
