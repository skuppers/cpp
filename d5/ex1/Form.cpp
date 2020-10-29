#include "Form.hpp"
//#include "Bureaucrat.hpp"

Form::Form(void)
{
    this->_name = "undefin3d";
    this->_signed = false;
    this->_requiredGradeSign = 1;
    this->_requiredGradeExec = 1;
    return ;
}

Form::Form(const Form &src)
{
    *this = src;
    return ;
}

Form::Form(std::string name, int reqSiqn, int reqExec)
{
    if (reqSiqn < 1 || reqExec < 1)
        throw Form::GradeTooHighException();
    else if (reqSiqn > 150 || reqExec > 150)
        throw Form::GradeTooLowException();
    else
    {
      this->_name = name;
      this->_requiredGradeSign = reqSiqn;
      this->_requiredGradeExec = reqExec;
    }
    return ;
}

Form::~Form(void)
{
    return ;
}

Form &Form::operator=(const Form &rhs)
{
    if (this != &rhs)
    {
        this->_name  = rhs._name;
        this->_requiredGradeSign = rhs._requiredGradeSign;
        this->_requiredGradeExec = rhs._requiredGradeExec;
    }
    return (*this);
}

Form::GradeTooLowException::GradeTooLowException(void)
{
    return ;
}

Form::GradeTooLowException::GradeTooLowException(const GradeTooLowException &src)
{
    *this = src;
    return ;
}

Form::GradeTooLowException::~GradeTooLowException(void) throw()
{
    return ;
}

Form::GradeTooLowException &Form::GradeTooLowException::operator= (const GradeTooLowException &rhs)
{
    static_cast <void> (rhs);
    return (*this);
}

const char *Form::GradeTooLowException::what() const throw()
{
    return ("Form: Grade is too low...");
}

Form::GradeTooHighException::GradeTooHighException(void)
{
    return ;
}

Form::GradeTooHighException::GradeTooHighException(const GradeTooHighException &src)
{
    *this = src;
    return ;
}

Form::GradeTooHighException::~GradeTooHighException(void)
{
    return ;
}

Form::GradeTooHighException &Form::GradeTooHighException::operator= (const GradeTooHighException &rhs)
{
    static_cast <void> (rhs);
    return (*this);
}

const char *Form::GradeTooHighException::what() const throw()
{
    return ("Form: Grade is too high...");
}

std::string Form::getName(void) const {
    return this->_name;
}

bool        Form::isSigned(void) const {
    return this->_signed;
}

int         Form::getRequiredSign(void) const {
    return this->_requiredGradeSign;
}

int         Form::getRequiredExec(void) const {
    return this->_requiredGradeExec;
}

void        Form::setName(std::string name) {
    this->_name = name;
}

void        Form::setSigned(bool sign) {
    this->_signed = sign;
}

void        Form::setRequiredSign(int grade) {
    this->_requiredGradeSign = grade;
}

void        Form::setRequiredExec(int grade) {
    this->_requiredGradeExec = grade;
}

void        Form::beSigned(Bureaucrat &b) {
    if (b.getGrade() <= this->getRequiredSign())
        this->setSigned(true);
    else
        throw Form::GradeTooLowException();
    
}

std::ostream &operator<<(std::ostream &out, Form const &form) {
    out << "Form: " << form.getName() << " is ";
    if (form.isSigned() == false)
        out << "not ";
    out << "signed " << ", it requires grade " << form.getRequiredSign() << " to be signed";
    out << " and grade " << form.getRequiredExec() << " to be executed." << std::endl;
    return out;
}