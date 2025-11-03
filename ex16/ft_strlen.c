/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bokim <bokim@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 14:03:02 by bokim             #+#    #+#             */
/*   Updated: 2025/11/03 14:04:20 by bokim            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return i;
}

#include <stdio.h>
int main(int argc, char** argv)
{
	printf("%d", ft_strlen(argv[1]));
}
