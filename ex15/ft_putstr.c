/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bokim <bokim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 14:00:19 by bokim             #+#    #+#             */
/*   Updated: 2025/11/04 13:40:14 by bokim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}
*/

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
}

/*
int main(int argc, char** argv)
{
	(void)argc;
	ft_putstr(argv[1]);
}
*/
