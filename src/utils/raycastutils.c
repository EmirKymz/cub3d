/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   raycastutils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaymaz <ekaymaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 15:38:03 by ekaymaz           #+#    #+#             */
/*   Updated: 2023/05/02 15:38:04 by ekaymaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

double	getperpwalldist(t_raycast *ray)
{
	if (ray->side == 0)
		return (ray->sidedist.x - ray->deltadist.x);
	else
		return (ray->sidedist.y - ray->deltadist.y);
}

t_raycast	setwall(t_cub3d *game, t_raycast *ray)
{
	if (ray->side == 0)
	{
		ray->draw.wallx = \
			game->player->pos.y + ray->draw.perpwalldist * ray->raydir.y;
		if (ray->map.x < game->player->pos.x)
			ray->draw.wall = 3;
		else
			ray->draw.wall = 2;
	}
	else
	{
		ray->draw.wallx = \
			game->player->pos.x + ray->draw.perpwalldist * ray->raydir.x;
		if (ray->map.y < game->player->pos.y)
			ray->draw.wall = 1;
		else
			ray->draw.wall = 0;
	}
	return (*ray);
}
