/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 14:20:50 by jidrizi           #+#    #+#             */
/*   Updated: 2025/06/16 13:12:56 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Everything.hpp"

int	main()
{
	const Animal*	j = new Dog();
	const Animal*	i = new Cat();

	delete j;//should not create a leak
	delete i;
	// ... (this is where they stop giving the main and we have the freedom to write ourselves)

	std::cout << std::endl << "Now for the Brain test:" << std::endl;

	Dog	x = Dog();
	Cat	y = Cat();
	Cat z = y;

	x.testDogBrain();
	y.testCatBrain();

	return (0);
}
