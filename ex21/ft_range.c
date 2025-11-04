/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bokim <bokim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 15:05:33 by bokim             #+#    #+#             */
/*   Updated: 2025/11/04 15:25:06 by bokim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*res;
	int	i;

	if (min >= max)
		return (NULL);
	res = malloc(sizeof(int) * (max - min));
	i = 0;
	while (min < max)
		res[i++] = min++;
	return (res);
}
/*
#include <stdio.h>
int main()
{
	int i;
	i = 0;
	
	int *res = ft_range(1, 0);
	while (i < 1)
	{
		printf("%d", res[i]);
		i++;
	}
}
	*/