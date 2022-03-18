/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 01:49:16 by rdutenke          #+#    #+#             */
/*   Updated: 2022/03/18 02:55:12 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template<typename T>
void swap(T &x, T &y)
{
	T var;
	
	var = x;
	x = y;
	y = var;
}

template<typename T>
T const &min(T const &x, T const &y)
{
	if (x < y)
	{
		return (x);
	}
	else
	{
		return (y);
	}
}

template<typename T>
T const &max(T const &x, T const &y)
{
	if (x > y)
	{
		return (x);
	}
	else
	{
		return (y);
	}
}
#endif