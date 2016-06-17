/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mix.c                                          :+:      :+:    :+:    */
/*                                                    +:+ +:+         +:+     */
/*   By: simzam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/12 10:01:12 by simzam            #+#    #+#             */
/*   Updated: 2016/05/17 21:47:01 by simzam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

double	ft_mix(double x, double y, double a)
{
	return (x * (1 - a) + y * a);
}