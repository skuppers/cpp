#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample {

public:

    float const pi;             
    int         qd;             // Member attribute

    Sample(float const f);      // Constructor
    ~Sample(void);              // Destructor

    void    bar(void) const;    // Member function

};

#endif