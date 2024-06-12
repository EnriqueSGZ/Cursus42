/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amcortes <amcortes@strudent.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 14:21:46 by jose-rig          #+#    #+#             */
/*   Updated: 2024/06/12 19:08:15 by amcortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

char	*ft_joinfree(char *buffer, char *aux)
{
	char	*temp;

	temp = ft_strjoin(buffer, aux);
	free(buffer);
	return (temp);
}

char	*ft_readbuffer(char *buffer, int fd)
{
	int		i;
	char	*aux;

	if (!buffer)
	{
		buffer = ft_calloc(1, 1);
		if (!buffer)
			return (NULL);
	}
	aux = ft_calloc(BUFFER_SIZE + 1, 1);
	i = 1; // esto puede ser cualquier num siempre que sea mayor que 0 para entrar en el bucle
	while ((!ft_strchr(aux, '\n')) && i > 0) // buscamos primera ocurrencia de salto de linea en el aux
	{
		i = read(fd, aux, BUFFER_SIZE); //read copia buffersize del fd en aux y devuelve un int con la ultima posicion
		if (i == -1)
			return (free(aux), NULL);
		aux[i] = '\0'; // el string tiene que terminar siempre en nulo
		buffer = ft_joinfree(buffer, aux); // buffer sale con concatenacion de aux y cada vez se hace más grande
		if (!buffer)
			return (NULL);
	}
	free(aux);
	return (buffer);
}

char	*ft_readline(char *buffer)
{
	char	*line;
	int		i;

	i = 0;
	if (!buffer[i])
		return (NULL);
	while (buffer[i] != '\0' && buffer[i] != '\n')
		i++;
	line = (char *)ft_calloc(i + 1 + (buffer[i] == '\n'), 1); // lo de buffer[i] es por si ha metido salto de linea que añada uno más
	if (!line)
		return (NULL);
	i = 0;
	while (buffer[i] != '\n' && buffer[i])
	{
		line[i] = buffer[i];
		i++;
	}
	if (buffer[i] == '\n')
		line[i] = '\n'; //no le metemos nulos porque al usar calloc te mete ya nulo al final
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
	i++; // es para que se pase justo al cominezo de la siguiente linea
	j = 0;
	while (buffer[i])
		update[j++] = buffer[i++];
	free(buffer);
	return (update);
}

char	*get_next_line(int fd)
{
	static char	*buffer;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
		return (NULL);
	buffer = ft_readbuffer(buffer, fd);
	if (!buffer)
		return (ft_free(buffer));
	line = ft_readline(buffer);
	buffer = ft_updatebuffer(buffer); //aqui mandamos el tocho y vuelve el tocho sin las líneas que vamos quitando/leyendo
	return (line);
}

int	main(void)
{
	int fd;
	char *line;
	
	fd = open("prueba.txt", O_RDONLY);
	/*while ((line = get_next_line(fd)) != NULL)
	{
		printf("%s", line);
		free(line);
	}*/
	line = get_next_line(fd);
	
	close(fd);
	return (0);
}