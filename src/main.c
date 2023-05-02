/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaymaz <ekaymaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 15:38:08 by ekaymaz           #+#    #+#             */
/*   Updated: 2023/05/02 15:38:09 by ekaymaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int	main(int argc, char **argv)
{
	t_cub3d	*game;

	if (argc != 2)
		return (printf("error: please run with single map: ./cub3d eg.cub\n"));
	game = malloc(sizeof(t_cub3d));
	if (!initialize(game, argv))
		return (0);
	mlx_loop(game->mlx);
}
