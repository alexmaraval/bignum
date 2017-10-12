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
    bigint b("9");
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
    std::cout << d << "+" << f << " = " << d + f << std::endl;
    std::cout << d << "-" << f << " = " << d - f << std::endl;
    std::cout << d << "*" << f << " = " << d * f << std::endl;
    std::cout << f << "+" << e << " = " << f + e << std::endl;
    std::cout << f << "-" << e << " = " << f - e << std::endl;
    std::cout << f << "*" << e << " = " << f * e << std::endl;
    std::cout << f << "+" << c << " = " << f + c << std::endl;
    std::cout << f << "-" << c << " = " << f - c << std::endl;
    std::cout << c << "-" << f << " = " << c - f << std::endl;
    std::cout << f << "*" << c << " = " << f * c << std::endl;
    std::cout << c << "*" << f << " = " << c * f << std::endl;
    
    std::cout << a << "^" << b << " = " << (bigint) (a^b) << std::endl;
    std::cout << d << "^" << b << " = " << (bigint) (d^b) << std::endl;
    std::cout << f << "^" << b << " = " << (bigint) (f^b) << std::endl;
    std::cout << d << "^" << f << " = " << (bigint) (d^f) << std::endl;
    std::cout << f << "^" << c << " = " << (bigint) (f^c) << std::endl;
    
    std::cout << std::endl;
    
    std::cout << c++ << std::endl;
    std::cout << c << std::endl;
    std::cout << c-- << std::endl;
    std::cout << c << std::endl;
    std::cout << --c << std::endl;
    std::cout << c << std::endl;
    std::cout << ++c << std::endl;
    std::cout << c << std::endl;
    std::cout << -d << std::endl;
    std::cout << +d << std::endl;
    
    std::cout << std::endl;
    
    
    
    return 0;
}
