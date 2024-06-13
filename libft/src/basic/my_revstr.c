/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_revstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angsanch <angsanch@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 18:46:37 by angsanch          #+#    #+#             */
/*   Updated: 2024/06/13 18:46:37 by angsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/basic_utils.h"

void swap_chr(char *a, char *b)
{
    char c = *a;

    *a = *b;
    *b = c;
}

char *my_revstr(char *str)
{
    int size = my_strlen(str) - 1;
    int limit = size / 2 + 1;
    int i = 0;

    while (i < limit){
        swap_chr(str + i, str + size - i);
        i ++;
    }
    return (str);
}
