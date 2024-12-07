#include "Class_H.h"

double MyClass::FuncA() {
    // Perform a trigonometric calculation (e.g., sin(0) = 0)
    return std::tan(0) + std::tan(1) - std::tan(2);  // sin(0) = 0, but could be replaced by other trig functions if needed
}