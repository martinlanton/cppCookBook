//
// Created by MLA on 11/05/2023.
//
#pragma once

template <class T>
class Accum
{
private:
    T total;
public:
    Accum(T start): total(start) {};
    T operator+=(T const& t) {return total = total + t;};
    T GetTotal() const {return total;}
};

// To create a template specialization (to make it work in a different way for a specific type), we
// need to overload it for that type
// Here no need to declare the type for the class as arbitrary
template <>
// We can instead directly declare the type in the class declaration
class Accum<Person>
{
// Then we declare the rest of the stuff as we would normally, except we now use specific types
// instead of the arbitrary T type used in the basic template
private:
    // This means total is now an int
    int total;
public:
    Accum(int start) : total(start) {};
    // And this means operator overloading and GetTotal now also return ints.
    int operator+=(Person const& t) {return total = total + t.GetNumber();};
    int GetTotal() const {return total;}
};