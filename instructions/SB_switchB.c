/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SB_switchB.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 15:29:59 by jlima-so          #+#    #+#             */
/*   Updated: 2025/06/05 14:12:58 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	sb(t_table *a)
{
	int	temp;
	
	temp = a->head->value;
	a->head->value = a->head->next->value;
	a->head->next->value = temp;
	write (1, "sb\n", 3);
}
