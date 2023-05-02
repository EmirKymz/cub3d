/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaymaz <ekaymaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 15:34:17 by ekaymaz           #+#    #+#             */
/*   Updated: 2023/05/02 15:34:18 by ekaymaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (*lst != NULL)
		new -> next = *lst;
	*lst = new;
}
/*
#include <stdio.h>
int	main(void)
{
	t_list	*liste;

	for (size_t i = 65; i < 70; i++)
	{
		ft_lstadd_front(&liste, ft_lstnew((void *)i));
	}
	printf("%c", (char)(liste -> content));
}
*/
