/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensanche <ensanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 18:39:26 by ensanche          #+#    #+#             */
/*   Updated: 2024/07/25 17:48:13 by ensanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_joinfree(char *buffer, char *aux)
{
	char	*temp;

	temp = ft_strjoin(buffer, aux);
	free(buffer);
	return (temp);
}

static char	*ft_readbuffer(int fd, char *buffer)
{
	char	*temp;
	int		bytes_read;

	temp = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	if (!temp)
		return (NULL);
	bytes_read = read(fd, temp, BUFFER_SIZE);
	while (bytes_read > 0)
	{
		temp[bytes_read] = '\0';
		buffer = ft_joinfree(buffer, temp);
		if (ft_strchr(temp, '\n'))
			break ;
		bytes_read = read(fd, temp, BUFFER_SIZE);
	}
	free(temp);
	if (bytes_read == -1)
	{
		free(buffer);
		return (NULL);
	}
	return (buffer);
}

char	*ft_getline(char *buffer)
{
	char	*line;
	int		i;

	i = 0;
	if (!buffer[i])
		return (NULL);
	while (buffer[i] != '\0' && buffer[i] != '\n')
		i++;
	line = (char *)ft_calloc(i + 1 + (buffer[i] == '\n'), 1);
	if (!line)
		return (NULL);
	i = 0;
	while (buffer[i] != '\n' && buffer[i])
	{
		line[i] = buffer[i];
		i++;
	}
	if (buffer[i] == '\n')
		line[i] = '\n';
	return (line);
}

char	*ft_updatebuffer(char *buffer)
{
	int		i;
	int		j;
	char	*update;

	i = 0;
	while (buffer[i] && buffer[i] != '\n')
		i++;
	if (!buffer[i])
		return (ft_free(buffer));
	update = ft_calloc((ft_strlen(buffer) - i + 1), sizeof(char));
	if (!update)
		return (ft_free(buffer));
	i++;
	j = 0;
	while (buffer[i])
		update[j++] = buffer [i++];
	free(buffer);
	return (update);
}

char	*get_next_line(int fd)
{
	static char	*buffer;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	if (!buffer)
		buffer = ft_calloc(1, sizeof(char));
	buffer = ft_readbuffer(fd, buffer);
	if (!buffer || !*buffer)
	{
		free(buffer);
		buffer = NULL;
		return (NULL);
	}
	line = ft_getline(buffer);
	buffer = ft_updatebuffer(buffer);
	return (line);
}
/*
int	main(void)
{
	int		fd;
	char	*line;

	fd = open("pruebas.txt", O_RDONLY);
	if (fd == -1)
		printf("Invalid File: %d\n", fd);
	while ((line = get_next_line(fd)) != NULL)
	{
		printf("%s", line);
		free(line);
	}
	close(fd);
	return (0);
}*/
/*
int main(int argc, char *argv[])
{
	int		fd;
	char	*line;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s <filename>\n", argv[0]);
		return (1);
	}
	fd = open (argv[1], O_RDONLY);
	if (fd == -1)
	{
		perror("Error opening file");
		return (1);
	}
	while ((line = get_next_line(fd)) != NULL)
	{
		printf("%s", line);
		free(line);
	}
	close(fd);
	return (0);
}*/
