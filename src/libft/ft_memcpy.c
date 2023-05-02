/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaymaz <ekaymaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 15:35:09 by ekaymaz           #+#    #+#             */
/*   Updated: 2023/05/02 15:35:10 by ekaymaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*tmp;

	if (!dest && !src)
		return (0);
	if (dest == src)
		return (dest);
	tmp = dest;
	while (n--)
		*((unsigned char *)dest++) = *((unsigned char *)src++);
	return (tmp);
}
/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char		*ds1 = malloc(sizeof(char) * 5);
	char		*ds2 = malloc(sizeof(char) * 5);
	const char	*sr = "ahmet";

	printf("mine : %s, ", ft_memcpy(ds2, sr, 5));
	printf("org : %s, ", memcpy(ds1, sr, 5));
}
*/
