/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dani_mm__ <dani_mm__@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:00:55 by dani_mm__         #+#    #+#             */
/*   Updated: 2024/06/14 13:46:59 by dani_mm__        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

/*int main(int argc, char **argv)
{
    if (argc != 2)
    {
        printf("usage: put map later");
        return(1);
    }
    t_game game;
    game.map = load_map(argv[1]);
    
    if (!validate_map(game.map))
    {
        printf("Error: Invalid map\n");
        return(1);
    }
    initialize_game(&game);
    create_window(&game, &mlx);
    draw_map(&game);
    handle_events(&game);
    mlx_loop(game.mlx);
    return(0);
}*/

int main(int argc, char **argv)
{
    if (argc != 2) {
        printf("Usage: ./so_long <map_file.ber>\n");
        return (1);
    }

    t_game game;
    game.map = load_map(argv[1]);

    if (!validate_map(game.map)) {
        printf("Error: Invalid map\n");
        return (1);
    }

    initialize_game(&game);

    // Asumimos que el ancho y alto se derivan del mapa
    int width = get_map_width(game.map);
    int height = get_map_height(game.map);

    create_window(&game, 5);
    draw_map(&game);
    handle_events(&game);

    mlx_loop(game.mlx);
    return (0);
}
