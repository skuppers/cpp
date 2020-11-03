#include "span.hpp"

Span::Span(const unsigned int size) : _size(size)
{
    _currentSize = 0;
    return ;
}

Span::Span(const Span &n)
{
    *this = n;
    return ;
}


void Span::addNumber(int n) {
    if (_currentSize == _size) {
        throw std::overflow_error("Container already full!");
        return ;
    }
    ++_currentSize;
    _numbers.push_back(n);
    return ;
}

unsigned int Span::shortestSpan(void) const {
    if (_currentSize == 1 || _currentSize == 0) {
        throw std::out_of_range("No span to find!");
        return -1;
    }

    int num;
	int shortest;

	std::list<int> copy_lst;
	std::list<int>::const_iterator it;

	copy_lst.assign(_numbers.begin(), _numbers.end());
	copy_lst.sort();
	it = copy_lst.begin();
	num = *it;
	it++;
	for ( ; it != copy_lst.end(); it++) {

		if ((*it - num) < shortest) shortest = *it - num;
		num = *it;
	}
	return (shortest);

}

unsigned int Span::longestSpan(void) const {
    if (_currentSize == 1 || _currentSize == 0) {
        throw std::out_of_range("No span to find!");
        return -1;
    }
    int num;
	std::list<int> copy_lst;
	std::list<int>::const_iterator it;
	std::list<int>::const_iterator it_end;

	copy_lst.assign(_numbers.begin(), _numbers.end());
	copy_lst.sort();
	it_end = copy_lst.begin();
	num = *it_end;
	while (it_end != copy_lst.end()) {
		it = it_end;
		it_end++;
	}
	return (*it - num);
}

unsigned int Span::getSize(void) const {
    return _size;
}

unsigned int Span::getNums(void) const {
    return _currentSize;
}

std::list<int> Span::getList(void) const {
    return _numbers;
}


Span::~Span(void)
{
    return ;
}

Span& Span::operator=(Span const & s)
{
    _size = s.getSize();
    _currentSize = s.getNums();
    _numbers = s.getList();
    return (*this);
}