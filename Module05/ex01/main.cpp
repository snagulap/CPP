/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 20:12:10 by snagulap          #+#    #+#             */
/*   Updated: 2024/03/09 10:50:32 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

int main() {
    
     /* Create a form with grade too high */
	{
		try
		{
			Form form0("A99", 10, 5);
			std::cout << form0 << std::endl;
		}
		catch(std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
		
	}

	std::cout << "\n --------------------- \n\n";

	/* Create form and sign it without exceptions */
	{
		try
		{
			Bureaucrat mike("Mike", 15);
			Form form("B58", 20, 45);
			std::cout << mike << std::endl;
			std::cout << form << std::endl;
			mike.signForm(form);
			std::cout << form << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	
	std::cout << "\n --------------------- \n\n";

	/* Create form and try to sign it but the grade is not enough */
	{
		try
		{
			Bureaucrat jon("Jon", 35);
			Form form2("C_303", 20, 45);
			std::cout << jon << std::endl;
			std::cout << form2 << std::endl;
			jon.signForm(form2);
			std::cout << form2 << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	return (0);
    
    // try {
    //     Bureaucrat bureaucrat("John", 20);
    //     Form form("Tax Form", 50, 20);

    //     std::cout << bureaucrat << std::endl;
    //     std::cout << form << std::endl;

    //     form.beSigned(bureaucrat);

    //     std::cout << form << std::endl;
    // } catch (const std::exception& e) {
    //     std::cerr << "Exception: " << e.what() << std::endl;
    // }

    // return 0;
}



//  /* Create a form with grade too high */
// 	{
// 		try
// 		{
// 			Form form0("A99", 0, 5);
// 			std::cout << form0 << std::endl;
// 		}
// 		catch(std::exception &e)
// 		{
// 			std::cerr << e.what() << std::endl;
// 		}
		
// 	}

// 	std::cout << "\n --------------------- \n\n";

// 	/* Create form and sign it without exceptions */
// 	{
// 		try
// 		{
// 			Bureaucrat mike("Mike", 15);
// 			Form form("B58", 20, 45);
// 			std::cout << mike << std::endl;
// 			std::cout << form << std::endl;
// 			mike.signForm(form);
// 			std::cout << form << std::endl;
// 		}
// 		catch (std::exception &e)
// 		{
// 			std::cout << e.what() << std::endl;
// 		}
// 	}
	
// 	std::cout << "\n --------------------- \n\n";

// 	/* Create form and try to sign it but the grade is not enough */
// 	{
// 		try
// 		{
// 			Bureaucrat jon("Jon", 35);
// 			Form form2("C_303", 20, 45);
// 			std::cout << jon << std::endl;
// 			std::cout << form2 << std::endl;
// 			jon.signForm(form2);
// 			std::cout << form2 << std::endl;
// 		}
// 		catch (std::exception &e)
// 		{
// 			std::cout << e.what() << std::endl;
// 		}
// 	}
// 	return (0);