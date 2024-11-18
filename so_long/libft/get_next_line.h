/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dani_mm__ <dani_mm__@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 12:15:23 by dani_mm__         #+#    #+#             */
/*   Updated: 2024/05/28 10:44:39 by dani_mm__        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>

# ifndef MAX_FD
#  define MAX_FD 10240
# endif

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 8
# endif

char	*ft_join(char *buff, char *stash);
char	*ft_join_new_line(char *buff, char *stash);
char	*init_buff(void);
char	*ft_condition(char stash[BUFFER_SIZE], int fd, char *buff);
char	*get_next_line(int fd);
/* Helpers */
int	ft_one(char *stash);
int	ft_check_new_line(char *stash);
int	strln(char *str);
int	strlnao(char *str, char c);
void	init_and_put_one(char *stash, char c);

#endif
