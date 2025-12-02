/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwoo <lwoo@student.42bangkok.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 17:52:16 by lwoo              #+#    #+#             */
/*   Updated: 2025/07/10 00:10:13 by lwoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_result(char first, char second, char third)
{
	write(1, &first, 1);
	write(1, &second, 1);
	write(1, &third, 1);
	if (first != '7')
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	first;
	char	second;
	char	third;

	first = '0';
	while (first <= '7')
	{
		second = first + 1;
		while (second <= '8')
		{
			third = second + 1;
			while (third <= '9')
			{
				write_result (first, second, third);
				third++;
			}
			second++;
		}
		first++;
	}
}
