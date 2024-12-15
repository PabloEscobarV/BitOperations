/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Pablo Escobar <sataniv.rider@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 22:42:52 by Pablo Escob       #+#    #+#             */
/*   Updated: 2024/12/15 23:30:23 by Pablo Escob      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hdrs/bit_operations.hpp"
#include <iostream>

using namespace std;


template <typename T>
void	print_bit(T bit, int size)
{
	T i = 0;
	for (; i < size; ++i)
	{
		cout << BitOperations<T>::read_bit(bit, i); 
	}
	cout << ": [" << i << "]" << endl;
}

int	main()
{
	int	data {0};
	int	size = sizeof(size) * 8;

	print_bit(data, size);
	for (int i = 0; i < size; ++i)
	{
		BitOperations<int>::set_bit(data, i);
		print_bit(data, size);
	}
	cout << "start clear operations" << endl;
	print_bit(data, size);
	for (int i = 0; i < size; ++i)
	{
		BitOperations<int>::clear_bit(data, i);
		print_bit(data, size);
	}
	return (0);
}