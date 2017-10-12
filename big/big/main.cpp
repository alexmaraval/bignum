//
//  main.cpp
//  big
//
//  Created by Alexandre Maraval on 06.10.17.
//  Copyright © 2017 Alexandre Maraval. All rights reserved.
//

#include <iostream>
#include "big_class.hpp"

int main(int argc, const char * argv[]) {
    
    bigint a("2");
    bigint b("10");
    bigint c;
    bigint d("-005");
    bigint e("13", "-");
    bigint f("-00");

    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;
    std::cout << d << std::endl;
    std::cout << e << std::endl;
    std::cout << f << std::endl;
    
    std::cout << std::endl;
    
    std::cout << (bool) (a == d) << std::endl;
    std::cout << (bool) (a < d) << std::endl;
    std::cout << (bool) (a > d) << std::endl;
    std::cout << (bool) (a <= d) << std::endl;
    std::cout << (bool) (a >= d) << std::endl;
    std::cout << (bool) (a != d) << std::endl;
    
    std::cout << std::endl;
    
    std::cout << (bool) (c == f) << std::endl;
    std::cout << (bool) (c < f) << std::endl;
    std::cout << (bool) (c > f) << std::endl;
    std::cout << (bool) (c <= f) << std::endl;
    std::cout << (bool) (c >= f) << std::endl;
    std::cout << (bool) (c != f) << std::endl;
    
    std::cout << std::endl;
    
    std::cout << a << "+" << b << " = " << a + b << std::endl;
    std::cout << a << "-" << b << " = " << a - b << std::endl;
    std::cout << a << "*" << b << " = " << a * b << std::endl;
    std::cout << a << "+" << d << " = " << a + d << std::endl;
    std::cout << a << "-" << d << " = " << a - d << std::endl;
    std::cout << a << "*" << d << " = " << a * d << std::endl;
    std::cout << a << "*" << f << " = " << d + f << std::endl;
    std::cout << a << "-" << f << " = " << d - f << std::endl;
    std::cout << a << "+" << f << " = " << d * f << std::endl;
    std::cout << a << "+" << e << " = " << f + e << std::endl;
    std::cout << a << "+" << e << " = " << f - e << std::endl;
    std::cout << a << "+" << e << " = " << f * e << std::endl;
    std::cout << a << "+" << c << " = " << f + c << std::endl;
    std::cout << a << "+" << c << " = " << f - c << std::endl;
    std::cout << a << "+" << f << " = " << c - f << std::endl;
    std::cout << a << "+" << c << " = " << f * c << std::endl;
    std::cout << a << "+" << f << " = " << c * f << std::endl;
    std::cout << a << "^" << b << " = " << (bigint) (a^b) << std::endl;
    std::cout << std::endl;
    
    std::cout << c++ << std::endl;
    
    std::cout << std::endl;

    return 0;
}
