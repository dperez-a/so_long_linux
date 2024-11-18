/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dani_mm__ <dani_mm__@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 11:17:19 by dani_mm__         #+#    #+#             */
/*   Updated: 2024/05/29 08:58:43 by dani_mm__        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_join(char *buff, char *stash)
{
	int		i;
	int		j;
	char	*new_buff;

	i = -1;
	j = 0;
	new_buff = malloc(sizeof(char) * (strln(buff) + strlnao(stash, '\0') + 1));
	if (!new_buff)
		return (NULL);
	while (buff[++i])
		new_buff[i] = buff[i];
	while (stash[j] == -1)
		j++;
	while (stash[j] && stash[j] != -1)
	{
		new_buff[i] = stash[j];
		i++;
		j++;
	}
	new_buff[i] = '\0';
	init_and_put_one(stash, '\0');
	free (buff);
	return (new_buff);
}

char	*ft_join_new_line(char *buff, char *stash)
{
	int		i;
	int		j;
	char	*new_buff;

	i = -1;
	j = 0;
	new_buff = malloc(sizeof(char) * (strln(buff) + strlnao(stash, '\n') + 2));
	if (!new_buff)
		return (NULL);
	while (buff[++i])
		new_buff[i] = buff[i];
	while (stash[j] == -1)
		j++;
	while (stash[j] != '\n')
	{
		new_buff[i] = stash[j];
		i++;
		j++;
	}
	new_buff[i] = '\n';
	i++;
	new_buff[i] = '\0';
	init_and_put_one(stash, '\n');
	free (buff);
	return (new_buff);
}

char	*init_buff(void)
{
	char	*buff;

	buff = (char *)malloc(sizeof(char) * 1);
	if (!buff)
		return (NULL);
	buff[0] = '\0';
	return (buff);
}

char	*ft_condition(char stash[BUFFER_SIZE], int fd, char *buff)
{
	while (1)
	{
		if (ft_one(stash) == 0 && read(fd, stash, BUFFER_SIZE) == 0)
			break ;
		if (ft_check_new_line(stash) == 0)
		{
			buff = ft_join(buff, stash);
			if (!buff)
				return (NULL);
		}
		if (ft_check_new_line(stash) == 1)
		{
			buff = ft_join_new_line(buff, stash);
			if (!buff)
				return (NULL);
			break ;
		}
	}
	return (buff);
}

char	*get_next_line(int fd)
{
	char		*buff;
	static char	stash[BUFFER_SIZE];

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buff = init_buff();
	if (!buff)
		return (NULL);
	buff = ft_condition(stash, fd, buff);
	if (!buff)
		return (NULL);
	if (buff[0] == '\0')
		return (free(buff), NULL);
	return (buff);
}
