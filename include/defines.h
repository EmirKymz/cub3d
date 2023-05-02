/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   defines.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaymaz <ekaymaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 15:29:48 by ekaymaz           #+#    #+#             */
/*   Updated: 2023/05/02 15:29:49 by ekaymaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEFINES_H
# define DEFINES_H

# define PI 3.1415926535

# define SCREEN_WIDTH 1280
# define SCREEN_HEIGH 720
# define FOV 0.66

# define WALKINGSPEED 3
# define WLK 0.015f
# define TURNSPEED 0.03f

# define ON_KEYDOWN 2
# define ON_KEYUP 3
# define ON_MOUSEDOWN 4
# define ON_MOUSEUP 5
# define ON_MOUSEMOVE 6
# define ON_EXPOSE 12
# define ON_DESTROY 17

# ifdef __APPLE__
#  define KEY_ESC 53
#  define KEY_W 13
#  define KEY_A 0
#  define KEY_S 1
#  define KEY_D 2

#  define KEY_E 14

#  define KEY_LEFT 123
#  define KEY_RIGHT 124
#  define KEY_DOWN 125
#  define KEY_UP 126
# endif

//* FOR BONUS
# define MMAPW 180
# define MMAPH 180

#endif
