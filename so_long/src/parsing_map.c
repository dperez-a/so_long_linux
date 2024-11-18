/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dani_mm__ <dani_mm__@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 17:44:34 by dani_mm__         #+#    #+#             */
/*   Updated: 2024/06/04 18:38:38 by dani_mm__        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

int is_rectangular(char **map)
{
    //?VERIFY IF THE MAP IS RECTANGULAR
    return 1;
}

int is_closed_by_walls(char **map)
{
    //?VERIFY IF THE MAP IS SURROUNDED BY WALLS
    return 1;
}

int has_required_components(char **map)
{
    //?VERIFY IF THE MAP HAS THE MANDATORY COMPLEMENTS
    return 1;
}

int has_valid_path(char **map)
{
    //?VERIFY IF THE MAP HAS A VALID PATH
    return 1;
}

int validate_map(char**map)
{
    return  is_rectangular(map) &&
            is_closed_by_walls(map) &&
            has_required_components(map) &&
            has_valid_path(map);
}
