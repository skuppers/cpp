#ifndef __SPAN__H__
#define __SPAN__H__

#include <list>
#include <algorithm>
#include <stdexcept>

class Span
{
    private:
        int             _size;
        int             _currentSize;
        std::list<int>  _numbers;

    public:
        Span(const unsigned int size);
        Span(const Span &);
        
        void            addNumber(int n);
        unsigned int    shortestSpan(void) const;
        unsigned int    longestSpan(void) const;

        unsigned int    getSize(void) const;
        unsigned int    getNums(void) const;
        std::list<int>  getList(void) const;

        ~Span(void);
        Span &operator=(const Span&);
};

#endif  //!__SPAN__H__