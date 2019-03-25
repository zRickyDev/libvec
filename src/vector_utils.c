/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rporcu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/16 00:07:56 by rporcu            #+#    #+#             */
/*   Updated: 2019/03/25 10:20:17 by rporcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libvec.h"

float		v3_len(t_vec3 v)
{
	return (sqrt(v.x * v.x
		+ v.y * v.y
		+ v.z * v.z));
}

float		v3_len2(t_vec3 v)
{
	return (v.x * v.x
			+ v.y * v.y
			+ v.z * v.z);
}

float		v3_normalize(t_vec3 *v)
{
	float	magnitude;

	magnitude = v3_len(*v);
	if (magnitude > 0)
	{
		v->x /= magnitude;
		v->y /= magnitude;
		v->z /= magnitude;
	}
	return (magnitude);
}
