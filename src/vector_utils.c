/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rporcu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/16 00:07:56 by rporcu            #+#    #+#             */
/*   Updated: 2019/03/16 00:17:47 by rporcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libvec.h"

float		vec_length(t_vec3 v)
{
	return (sqrt(v.x * v.x
		+ v.y * v.y
		+ v.z * v.z));
}

float		vec_normalize(t_vec3 *v)
{
	float	magnitude;

	magnitude = vec_length(*v);
	if (magnitude > 0)
	{
		v->x /= magnitude;
		v->y /= magnitude;
		v->z /= magnitude;
	}
	return (magnitude);
}
