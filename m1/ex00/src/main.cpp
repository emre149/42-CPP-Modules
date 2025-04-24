/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ededemog <ededemog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 13:17:31 by ededemog          #+#    #+#             */
/*   Updated: 2025/04/24 13:17:53 by ededemog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

int	main()
{
	Zombie *zombie = newZombie("Zombie1");
	zombie->announce();
	delete zombie;

	randomChump("Zombie2");

	return (0);
}