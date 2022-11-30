/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etbernar <etbernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:20:42 by etbernar          #+#    #+#             */
/*   Updated: 2022/11/30 11:55:03 by etbernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_BEXT_LINE_H
# define GET_BEXT_LINE_H

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

char *get_next_line(int fd);

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 42

#endif
#endif