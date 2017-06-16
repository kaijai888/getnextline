/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/21 16:35:15 by kzeng             #+#    #+#             */
/*   Updated: 2016/10/21 16:35:16 by kzeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 100
# define MAX_FD 4096
# define MALLOC_CHECK(x) if (x == NULL) {return (-1);}
# define READ_CHECK(x) if (x == -1) {free(buf); return (-1);}

# include "./libft/libft.h"

int		get_next_line(const int fd, char **line);

#endif
