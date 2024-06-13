/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_revmem.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angsanch <angsanch@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 18:46:37 by angsanch          #+#    #+#             */
/*   Updated: 2024/06/13 18:46:37 by angsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/basic_utils.h"

void my_revmem(void *data, size_t size)
{
    size_t limit = size / 2;
    size_t i = 0;
    char *str = data;

    while (i < limit) {
        swap_chr(str + i, str + size - i - 1);
        i ++;
    }
}
