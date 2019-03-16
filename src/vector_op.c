/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_op.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rporcu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/15 20:24:15 by rporcu            #+#    #+#             */
/*   Updated: 2019/03/16 13:34:01 by rporcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libvec.h"

t_vec3		*vec_add(t_vec3 v1, t_vec3 v2)
{
	t_vec3	*v;

	v = new_vec(v1.x + v2.x,
		v1.y + v2.y,
		v1.z + v2.z);
	return (v);
}

t_vec3		*vec_sub(t_vec3 v1, t_vec3 v2)
{
	t_vec3	*v;

	v = new_vec(v1.x - v2.x,
		v1.y - v2.y,
		v1.z - v2.z);
	return (v);
}

t_vec3		*vec_mul(t_vec3 v1, t_vec3 v2)
{
	t_vec3	*v;

	v = new_vec(v1.x * v2.x,
		v1.y * v2.y,
		v1.z * v2.z);
	return (v);
}

t_vec3		*vec_scale(t_vec3 v1, float f)
{
	t_vec3	*v;
	
	v = new_vec(v1.x * f,
		v1.y * f,
		v1.z * f);
	return (v);
}

t_vec3		*vec_divide(t_vec3 v1, float f)
{
	t_vec3	*v;

	v = new_vec(v1.x / f,
		v1.y / f,
		v1.z / f);
	return (v);
}
