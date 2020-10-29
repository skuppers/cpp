#ifndef __BUREAUCRAT__H__
#define __BUREAUCRAT__H__

#include <iostream>
#include <string>

class Form;

class Bureaucrat
{
    public :
        class GradeTooHighException : public std::exception
        {
            public:
                GradeTooHighException(void);
                GradeTooHighException(const GradeTooHighException &src);
                virtual ~GradeTooHighException(void) throw();
                GradeTooHighException &operator=(const GradeTooHighException &rhs);
                virtual const char* what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            public:
                GradeTooLowException(void);
                GradeTooLowException(const GradeTooLowException &src);
                virtual ~GradeTooLowException(void) throw();
                GradeTooLowException &operator=(const GradeTooLowException &rhs);
                virtual const char* what() const throw();
        };
   
        Bureaucrat(void);
        Bureaucrat(std::string name, int grade);
        Bureaucrat(const Bureaucrat &src);
        Bureaucrat &operator=(const Bureaucrat &rhs);
        ~Bureaucrat(void);

        int getGrade(void) const;
        std::string getName(void) const;

        void setGrade(int grade);
        void setName(std::string const &name);

        void incrementGrade(void);
        void decrementGrade(void);

        void signForm(Form &f);

    private:
        std::string         _name;
        int                 _grade;
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &brct);

#endif  //!__BUREAUCRAT__H__