/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaymaz <ekaymaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 15:34:04 by ekaymaz           #+#    #+#             */
/*   Updated: 2023/05/02 15:34:05 by ekaymaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}
/*
#include <stdio.h>
int	main(void)
{
	printf("'a' (false): %s",ft_isalnum('a') == 1 ? "true" : "False");
}
*/
