/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bit_operations.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Pablo Escobar <sataniv.rider@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 22:28:05 by Pablo Escob       #+#    #+#             */
/*   Updated: 2024/12/15 23:29:55 by Pablo Escob      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename t_own>
class BitOperations
{
	enum e_bit_data_t
	{
		BIT_CLEAR,
		BIT_SET,
		BYTE_SIZE = 8
	};
	public:
		static void	set_bit(t_own &data, t_own bit_position)
		{
			if (bit_position >= sizeof(t_own) * BYTE_SIZE)
				bit_position = sizeof(t_own);
			data |= (t_own)BIT_SET << bit_position;
		}

		static t_own	read_bit(t_own &data, t_own bit_position)
		{
			if (bit_position >= sizeof(t_own) * BYTE_SIZE)
				bit_position = sizeof(t_own);
			if (data & ((t_own)BIT_SET << bit_position))
				return BIT_SET;
			return BIT_CLEAR; 
		}

		static void	clear_bit(t_own &data, t_own bit_position)
		{
			if (bit_position >= sizeof(t_own) * BYTE_SIZE)
				bit_position = sizeof(t_own);
			data &= ~((t_own)BIT_SET << bit_position);
		}
};
