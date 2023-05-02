/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaymaz <ekaymaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 15:35:24 by ekaymaz           #+#    #+#             */
/*   Updated: 2023/05/02 15:35:25 by ekaymaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	counter;

	counter = 0;
	while (counter < n)
	{
		((unsigned char *)s)[counter] = c;
		counter++;
	}
	return (s);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*a = malloc(sizeof(char) * 5);
	char	*b = malloc(sizeof(char) * 5);
	char	src = 'A';

	printf("org : %s, ", memset(a, src, 5));
	printf("mine : %s", ft_memset(b, src, 5));
}
*/
