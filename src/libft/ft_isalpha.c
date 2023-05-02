/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaymaz <ekaymaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 15:33:09 by ekaymaz           #+#    #+#             */
/*   Updated: 2023/05/02 15:33:10 by ekaymaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return (ft_islower(c) || ft_isupper(c));
}
/*
#include <stdio.h>
int	main(void)
{
	printf("'a' (true): %s",ft_isalpha('a') == 1 ? "true" : "False");
}
*/
