/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 14:25:34 by marvin            #+#    #+#             */
/*   Updated: 2020/05/18 14:25:34 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H
#define BUFF_SIZE 1
#define MAX_FD 1024
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "./libft/libft.h"

int	get_next_line(const int fd, char **line);
#endif