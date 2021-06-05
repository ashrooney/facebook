#pragma once
#include "bits/stdc++.h"
using namespace std;

class Post
{
    
    const string title;
    const string description;
    public:
    Post(const string &head, const string &desc) : title(head), description(desc){}
    const string &getDescription()
    {
        return description;
    }
};