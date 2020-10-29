#ifndef __FORM__H__
#define __FORM__H__

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Form
{
    private:
        std::string     _name;
        bool            _signed = false;
        int             _requiredGradeSign;
        int             _requiredGradeExec;

    public:
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

        Form(void);
        Form(const Form &src);
        Form(std::string name, int reqSign, int reqExec);
        Form &operator=(const Form &rhs);
        ~Form(void);

        std::string getName(void) const;
        bool        isSigned(void) const;
        int         getRequiredSign(void) const;
        int         getRequiredExec(void) const;

        void        setName(std::string name);
        void        setSigned(bool sign);
        void        setRequiredSign(int grade);
        void        setRequiredExec(int grade);

        void        beSigned(Bureaucrat &b);
};

std::ostream &operator<<(std::ostream &out, Form const &brct);

#endif  //!__FORM__H__