/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_op.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rporcu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/15 20:24:15 by rporcu            #+#    #+#             */
/*   Updated: 2019/03/16 00:25:13 by rporcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libvec.h"

t_vec3		*add_vec(t_vec3 *v1, t_vec3 v2)
{
	v1->x += v2.x;
	v1->y += v2.y;
	v1->z += v2.z;
	return (v1);
}

t_vec3		*sub_vec(t_vec3 *v1, t_vec3 v2)
{
	v1->x -= v2.x;
	v1->y -= v2.y;
	v1->z -= v2.z;
	return (v1);
}

t_vec3		*mul_vec(t_vec3 *v1, t_vec3 v2)
{
	v1->x *= v2.x;
	v1->y *= v2.y;
	v1->z *= v2.z;
	return (v1);
}

t_vec3		*div_vec(t_vec3 *v1, t_vec3 v2)
{
	v1->x /= v2.x;
	v1->y /= v2.y;
	v1->z /= v2.z;
	return (v1);
}

t_vec3		*addictive_inverse_vec(t_vec3 *v)
{
	v->x *= -1;
	v->y *= -1;
	v->z *= -1;
	return (v);
}
