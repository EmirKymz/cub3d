/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaymaz <ekaymaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 15:34:35 by ekaymaz           #+#    #+#             */
/*   Updated: 2023/05/02 15:34:36 by ekaymaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*travel;

	if (!lst)
		return (NULL);
	travel = lst;
	while (travel -> next != NULL)
	{
		travel = travel -> next;
	}
	return (travel);
}
/*
#include <stdio.h>
int	main(void)
{
	t_list	*liste = ft_lstnew((void *)49);
	t_list	*tut;

	for (size_t i = 50; i < 55; i++)
	{
		ft_lstadd_back(&liste, ft_lstnew((void *)i));
	}
	tut = ft_lstlast(liste);
	printf("%c", (char)(tut -> content));
}
*/
