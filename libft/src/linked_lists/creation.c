/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   creation.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angsanch <angsanch@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 18:45:46 by angsanch          #+#    #+#             */
/*   Updated: 2024/06/13 18:45:46 by angsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/linked_list_utils.h"

void initialize_elem(l_elem_t *e, void *content)
{
    if (e == NULL)
        return;
    e->next = NULL;
    e->content = content;
}

l_elem_t *create_elem(void *content)
{
    l_elem_t *e = malloc(sizeof(l_elem_t) * 1);

    initialize_elem(e, content);
    return (e);
}

void list_initialize(l_list_t *l, void(*del)(void *))
{
    l->len = 0;
    l->first = NULL;
    l->del = del;
}

l_list_t *list_create(void(*del)(void *))
{
    l_list_t *l = malloc(sizeof(l_list_t) * 1);

    if (l == NULL)
        return (NULL);
    list_initialize(l, del);
    return (l);
}
