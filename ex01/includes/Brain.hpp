/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 15:32:02 by jidrizi           #+#    #+#             */
/*   Updated: 2025/05/07 16:42:19 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{
	private:
		std::string ideas[100];

	public:
		Brain();
		Brain(const Brain &src);
		~Brain();
		Brain	&operator=(const Brain &src);

		void		setIdea(int index, const std::string &idea);
		std::string	getIdea(int index) const;
		void		printIdeas() const;
};

#endif