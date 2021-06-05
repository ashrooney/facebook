#pragma once
#include "bits/stdc++.h"
using namespace std;

class Message
{
   
    // const string title;
    const string description;
    public:
    Message( const string &desc) : description(desc){}
    const string &getDescription()
    {
        return description;
    }
};