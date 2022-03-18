/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 04:21:02 by rdutenke          #+#    #+#             */
/*   Updated: 2022/03/18 05:17:33 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename T>
void iter(T *address, size_t len, void (f)(T &param))
{
	size_t i;
	i = 0;
	while(i < len)
	{
		f(address[i]);
		i++;
	}
}

template<typename T>
void iter(T const *address, size_t len, void (f)(T const &param))
{
	size_t i;
	i = 0;
	while(i < len)
	{
		f(address[i]);
		i++;
	}
}

#endif
