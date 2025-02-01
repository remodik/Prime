//
// Created by slend on 01.02.2025.
//

#ifndef PRIME_H
#define PRIME_H
#include <iostream>
#pragma once
using namespace std;
class Prime {
    int value;
    bool isPrime(int num) const;
public:
    Prime();
    void setValue(int num);
    bool isValid() const;
    bool checkPrime(int num) const;
    int countBetween(const Prime& other) const;
    Prime nextPrime() const;
    int getValue() const;
};



#endif //PRIME_H
