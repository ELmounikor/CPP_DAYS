#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include "Form.hpp"

class RobotomyRequestForm: public Form
{
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm( RobotomyRequestForm const &src );
		~RobotomyRequestForm();
		RobotomyRequestForm &operator=( RobotomyRequestForm const &old );
		void execute(Bureaucrat const & executor)const;
};

#endif /* ********************************************* ROBOTOMYREQUESTFORM_H */