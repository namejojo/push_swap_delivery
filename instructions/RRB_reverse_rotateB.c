/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RRB_reverse_rotateB.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 19:11:02 by jlima-so          #+#    #+#             */
/*   Updated: 2025/06/16 18:55:36 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	rrb(t_table *a)
{
	if (a == NULL || a->head == a->tail)
		return ;
	a->head->previous = a->tail;
	a->tail = a->tail->previous;
	a->head->previous->next = a->head;
	a->head = a->head->previous;
	a->head->previous = NULL;
	a->tail->next = NULL;
	write (1, "rrb\n", 4);
}
