/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   raycast.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaymaz <ekaymaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 15:30:14 by ekaymaz           #+#    #+#             */
/*   Updated: 2023/05/02 15:30:14 by ekaymaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RAYCAST_H
# define RAYCAST_H

# include "structures.h"

void		raycast(t_cub3d *game);
double		getperpwalldist(t_raycast *ray);
t_raycast	initraycast(t_cub3d *game);
t_raycast	setwall(t_cub3d *game, t_raycast *ray);
t_raycast	raycastloopstart(t_raycast *ray, int x);

#endif
