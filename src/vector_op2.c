/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_op2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rporcu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/15 20:31:14 by rporcu            #+#    #+#             */
/*   Updated: 2019/03/25 10:19:35 by rporcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libvec.h"

float		v3_dot(t_vec3 v1, t_vec3 v2)
{
	return (v1.x * v2.x
		+ v1.y * v2.y
		+ v1.z * v2.z);
}

t_vec3		v3_cross(t_vec3 v1, t_vec3 v2)
{
	t_vec3	v;

	v = v3(v1.y * v2.z - v1.z * v2.y,
			v1.z * v2.x - v1.x * v2.z,
			v1.x * v2.y - v1.y * v2.x);
	return (v);
}

t_vec3		v3_neg(t_vec3 v1)
{
	t_vec3	v;

	v = v3(-v1.x, -v1.y, -v1.z);
	return (v);
}
