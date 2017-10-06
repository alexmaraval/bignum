//
//  big_class.hpp
//  big
//
//  Created by Alexandre Maraval on 06.10.17.
//  Copyright © 2017 Alexandre Maraval. All rights reserved.
//

#ifndef big_class_hpp
#define big_class_hpp

#include <stdio.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include <cmath>

class bigint {
    
    friend std::ostream &operator<< (std::ostream &os, const bigint &n);
    
private:
    std::string _number;
    
public:
    // constructor, destructor and copy constructor
    bigint(std::string num = "0");
    ~bigint(){};
    
    // get function
    std::string get_str_num();
    
    // logical operators bigint with bigint
    bool operator==(const bigint &b) const;
    bool operator<(const bigint &b) const;
    bool operator>(const bigint &b) const;
    bool operator<=(const bigint &b) const;
    bool operator>=(const bigint &b) const;
    
    // arithmetic operators bigint with bigint
    bigint operator+(const bigint &b) const;
    bigint operator-(const bigint &b) const;
    bigint operator*(const bigint &b) const;
    bigint operator^(const bigint &b) const;
    
    // unilateral operator
    bigint operator-() const;
    bigint operator+() const;
    
    // assignment and conversion
    bigint &operator= (const bigint &b);
    bigint &operator= (const std::string &s);
    bigint &operator++();
    bigint &operator++(int);
    bigint &operator--();
    bigint &operator--(int);
    bigint &operator+=(const bigint &b);
    bigint &operator-=(const bigint &b);
    bigint &operator*=(const bigint &b);
    
    // operators bigint with int
    bigint operator+(const int &n) const;
    bigint operator-(const int &n) const;
    bigint operator*(const int &n) const;
    
    // operators bigint with long int
    // operators bigint with long long int
    
    // methods
    int digit_sum();    // for solution to PB016
};


#endif /* big_class_hpp */
