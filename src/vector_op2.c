/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_op2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rporcu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/15 20:31:14 by rporcu            #+#    #+#             */
/*   Updated: 2019/03/16 00:07:26 by rporcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libvec.h"

t_vec3		*mul_vec_scalar(t_vec3 *v, float f)
{
	v->x *= f;
	v->y *= f;
	v->z *= f;
	return (v);
}

t_vec3		*div_vec_scalar(t_vec3 *v, float f)
{
	v->x /= f;
	v->y /= f;
	v->z /= f;
	return (v);
}

float		vec_dot(t_vec3 v1, t_vec3 v2)
{
	return (v1.x * v2.x
		+ v1.y * v2.y
		+ v1.z * v2.z);
}

t_vec3		*vec_cross(t_vec3 v1, t_vec3 v2)
{
	t_vec3	*v;

	v = new_vec(v1.y * v2.z - v1.z * v2.y,
			v1.z * v2.x - v1.x * v2.z,
			v1.x * v2.y - v1.y * v2.x);
	return (v);
}
