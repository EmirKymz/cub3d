/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaymaz <ekaymaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 15:32:56 by ekaymaz           #+#    #+#             */
/*   Updated: 2023/05/02 15:32:57 by ekaymaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	while (n-- > 0)
	{
		*((unsigned char *)s) = 0;
		s++;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	char	deneme[6] = "ahmet";
	printf("before : %s, ", deneme);
	ft_bzero(deneme, sizeof(deneme));
	printf("after : %s", deneme);
}
*/
