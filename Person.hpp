#pragma once
#include "bits/stdc++.h"
using namespace std;

class Person
{
    protected:
    string name;
    string currentCity;
    string occupation;
    int age;
    public:
    Person()=default;
    Person(const string &n, const string &curCity, const string &work, const int &a): name{n}, currentCity{curCity}, occupation{work}, age{a}{} ;
    const string &getName() const
    {
        return name;
    }
    const string &getCity() const
    {
        return currentCity;
    }
    const string &getOccupation() const
    {
        return occupation;
    }
    const int &getAge() const
    {
        return age;
    }
   
};