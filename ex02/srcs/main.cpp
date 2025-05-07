/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 14:20:50 by jidrizi           #+#    #+#             */
/*   Updated: 2025/05/07 17:24:20 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Everything.hpp"

int	main()
{
	// uncommenting the next lines will cause a compilation error and thats how we test this exercise
	// Animal*	testHeap = new Animal();
	// Animal	testStack;
	const Animal*	dog = new Dog(); // here we see only dog and cat can call the default animal constructor
	const Animal*	cat = new Cat();


	std::cout << std::endl;
	// delete testHeap;
	delete dog;
	delete cat;
	return (0);
}
