/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dani_mm__ <dani_mm__@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 12:31:57 by dani_mm__         #+#    #+#             */
/*   Updated: 2024/06/14 13:54:10 by dani_mm__        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

char **load_map(char *filename)
{
    //to charge the map from file .ber
    return NULL;
}

int get_map_width(char **map)
{
    int width = 0;
    while (map[0][width])
        width++;
    return width;
}

int get_map_height(char **map)
{
    int height = 0;
    while (map[height])
        height++;
    return height;
}
