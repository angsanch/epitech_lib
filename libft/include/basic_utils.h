/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic_utils.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angsanch <angsanch@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 18:49:13 by angsanch          #+#    #+#             */
/*   Updated: 2024/06/13 18:49:13 by angsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASIC_UTILS_H_
    #define BASIC_UTILS_H_

    #include "basic.h"
    #include <stdlib.h>
    #include <unistd.h>
    #include <stdarg.h>
    #include <stdint.h>

    #ifndef BUFFER_SIZE
        #define BUFFER_SIZE 1024
    #endif
    #ifndef OPEN_MAX
        #define OPEN_MAX 128
    #endif

typedef struct file_buffer_t_container {
    char *buffer;
    size_t buff_len;
    char *line;
    ssize_t len;
} file_buffer_t;

typedef struct coolersplit_context {
    char const *str;
    char const *separators;
    ssize_t word_count;
    char **result;
    size_t offset;
    char on_block;
} splited_t;

#endif
