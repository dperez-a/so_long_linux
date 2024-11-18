/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   graphical_content.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dani_mm__ <dani_mm__@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 13:37:19 by dani_mm__         #+#    #+#             */
/*   Updated: 2024/06/14 13:44:50 by dani_mm__        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

void create_window(t_game *game, t_mlx *mlx)
{
	int bpp;
	int size_line;
	int end;
    game->mlx = mlx_init();
    mlx->win_ptr = mlx_new_window(game->mlx, game->width * TILE_SIZE, game->height * TILE_SIZE, "SoLong");
    game->image = mlx_new_image(game->mlx, game->width * TILE_SIZE, game->height * TILE_SIZE);
    // Inicializar la imagen
    game->image_data = mlx_get_data_addr(game->image, &bpp, &size_line, &end);
}


void draw_map(t_game *game)
{
	// Dibujar el mapa en la ventana
}

void draw_character(t_game *game)
{
	// Dibujar el personaje en la ventana
}

void update_window(t_game *game, t_mlx *mlx)
{
	draw_map(game);
	draw_character(game);
	mlx_put_image_to_window(game->mlx, mlx->win_ptr, game->image, 0, 0);
}
