/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bokim <bokim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 13:18:44 by bokim             #+#    #+#             */
/*   Updated: 2025/11/04 13:48:05 by bokim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
*/

void	ft_print_numbers(void)
{
	char	c;

	c = '1';
	while (c <= '9')
		ft_putchar(c++);
}

/*
int main()
{
	ft_print_numbers();
}
*/
