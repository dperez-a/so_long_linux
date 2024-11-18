/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dani_mm__ <dani_mm__@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 11:16:56 by dani_mm__         #+#    #+#             */
/*   Updated: 2024/06/14 13:40:48 by dani_mm__        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <unistd.h>
# include <limits.h>
# include <stdarg.h>
# include <stdlib.h>
# include <stdio.h>
# include <stdbool.h>
# include <sys/types.h>
# include <fcntl.h>
# include <stddef.h>
# include "../libft/libft.h"
# include "../mlx/mlx.h"
# define TILE_SIZE 32

/*
    - Mapa
    - Jugador
        · Coordenadas
        · Coleccionables cogidos
    - Enemigos
        · Coordenadas
    - Salida
    - Coleccionables

    - Parte grafica
        · Sprites
*/

typedef struct s_coords {
    int x;
    int y;
} t_coords;

typedef struct s_mlx {
    void    *mlx_ptr;
    void    *win_ptr;
    void *sprites[5];

    size_t frame_count;
} t_mlx;

typedef struct s_game {
    /* Map */
    void *image;
    void *image_data;
    char **map;
    int width;
    int height;
    t_coords imput;
    t_coords output;
    /* Player */
    t_coords player;
    int colectables_player;
    int move_count;

    /* Enemigos */
    t_coords *enemys;

    /* Parte grafica */
    t_mlx *mlx;
} t_game;

//? FUNCTIONS TO INITIALIZE AND PARSE THE MAP
char    **load_map(char *filename);
int     is_rectangular(char **map);
int     is_closed_by_walls(char **map);
int     has_required_components(char **map);
int     has_valid_path(char **map);
int     validate_map(char**map);

void	initialize_game(t_game *game);
int		detect_collision(t_game *game, char direction);
void	collect_object(t_game *game);
int		check_victory(t_game *game);
void	display_move_count(t_game *game);

//? HANDLE CONTENT FUNCTIONS
void	handle_movement(t_game *game, char direction);
int     handle_keypress(int keycode, t_mlx *mlx, t_game *game);
int     handle_exit(t_mlx *mlx);
void    handle_events(t_mlx *mlx);

//? GRAPHICAL CONTENT FUNCTIONS
void    create_window(t_game *game, t_mlx *mlx);
void    draw_map(t_game *game);
void    draw_character(t_game *game);
void    update_window(t_game *game, t_mlx *mlx);

#endif