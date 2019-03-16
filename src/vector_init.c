/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rporcu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/15 20:20:03 by rporcu            #+#    #+#             */
/*   Updated: 2019/03/16 13:31:14 by rporcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libvec.h"

t_vec3		*new_vec(float x, float y, float z)
{
	t_vec3	*v;

	if (!(v = (t_vec3 *)malloc(sizeof(t_vec3))))
		return ((void *)0);
	v->x = x;
	v->y = y;
	v->z = z;
	return (v);
}

void		set_vec(t_vec3 *v1, t_vec3 v2)
{
	v1->x = v2.x;
	v1->y = v2.y;
	v1->z = v2.z;
}
