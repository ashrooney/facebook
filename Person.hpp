#pragma once
#include "bits/stdc++.h"
using namespace std;

class Person
{
    protected:
    const string name;
    const string currentCity;
    const string occupation;
    const int age;
    public:
    Person()=default;
    Person(const string &n, const string &curCity, const string &work, const int &a): name(n), currentCity(curCity), occupation(work), age(a){}
    const string &getName()
    {
        return name;
    }
    const string &getCity()
    {
        return currentCity;
    }
    const string &getOccupation()
    {
        return occupation;
    }
    const int &getAge()
    {
        return age;
    }
   
};