/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuske <yuske@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 07:35:53 by yfurutat          #+#    #+#             */
/*   Updated: 2022/11/20 18:35:38 by yuske            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//16L
// void	ft_putnbr_fd(int n, int fd)
// {
// 	if (n == 0)
// 		write(fd, "0", 1);
// 	else if (n == INT_MIN)
// 		ft_putstr_fd("-2147483648", fd);
// 	else if (n < 0)
// 	{
// 		ft_putchar_fd('-', fd);
// 		ft_putnbr_fd(-n, fd);
// 	}
// 	else if (n > 9)
// 	{
// 		ft_putnbr_fd(n / 10, fd);
// 		ft_putchar_fd(n % 10 + 48, fd);
// 	}
// 	else
// 		ft_putchar_fd(n + 48, fd);
// }

//15L
// void	ft_putnbr_fd(int n, int fd)
// {
// 	if (n == INT_MIN)
// 		ft_putstr_fd("-2147483648", fd);
// 	else
// 	{
// 		if (n < 0)
// 		{
// 			ft_putchar_fd('-', fd);
// 			n *= -1;
// 		}
// 		if (n > 9)
// 		{
// 			ft_putnbr_fd(n / 10, fd);
// 		}
// 		ft_putchar_fd(n % 10 + '0', fd);
// 	}
// }

//16L
// void	ft_putnbr_fd(int n, int fd)
// {
// 	if (n < 0)
// 	{
// 		if (n == INT_MIN)
// 			ft_putstr_fd("-2147483648", fd);
// 		else
// 		{
// 			ft_putchar_fd('-', fd);
// 			ft_putnbr_fd(-n, fd);
// 		}
// 	}
// 	else 
// 	{
// 		if (n > 9)
// 			ft_putnbr_fd(n / 10, fd);
// 		ft_putchar_fd(n % 10 + 48, fd);
// 	}
// }

//shouldn't be malloced, though
// void	ft_putnbr_fd(int n, int fd)
// {
// 	ft_putstr_fd(ft_itoa(n), fd);
// }

//13L
void	ft_putnbr_fd(int n, int fd)
{
	if (n == INT_MIN)
		ft_putstr_fd("-2147483648", fd);
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(-n, fd);
	}
	else
	{
		if (n > 9)
			ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(n % 10 + '0', fd);
	}
}
