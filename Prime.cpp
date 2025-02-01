#include "Prime.h"
using namespace std;
Prime::Prime() : value(2) {}

void Prime::setValue(const int num) {
    value = num;
}

bool Prime::isPrime(const int num) const{
    if (num < 2) return false;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) return false;
    }
    return true;
}

bool Prime::isValid() const {
    return isPrime(value);
}

bool Prime::checkPrime(const int num) const {
    return isPrime(num);
}

int Prime::countBetween(const Prime& other) const {
    int count = 0;
    const int minVal = min(value, other.value);
    const int maxVal = max(value, other.value);
    for (int i = minVal + 1; i < maxVal; ++i) {
        if (isPrime(i)) count++;
    }
    return count;
}

Prime Prime::nextPrime() const {
    int next = value + 1;
    while (!isPrime(next)) {
        next++;
    }
    Prime nextPrime;
    nextPrime.setValue(next);
    return nextPrime;
}

int Prime::getValue() const {
    return value;
}
