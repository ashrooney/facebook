#pragma once
#include "bits/stdc++.h"
#include "Message.hpp"
#include "Post.hpp"
#include "Person.hpp"
using namespace std;

class Member : public Person
{
    private:
    // Person person;
    vector<Post> posts;
    vector<pair<string,Message>> messages;
    vector<Member> friends;
   
    // vector<Person> following; //can be used for instagram/twitter
    public:
    Member()=default;
    Member(const string &name, const string &city, const string &occ, const int &age){
         this->name = name;
         this->currentCity = city;
         this->occupation = occ;
         this->age = age;
    }
       
    // }
    // Person getPerson(){return person;} 
     

     
    vector<string> getMemberDetails()
    {
        vector<string> details;
        details.push_back(getName());
        details.push_back(getCity());
        details.push_back(getOccupation());
        
        details.push_back(to_string(getAge()));
        return details;
    }
    vector<Post> &getPosts()
    {
        return posts;
    }
    vector<Member> &getFriends()
    {
        return friends;
    }
    vector<pair<string,Message>> &getMessages()
    {
        return messages;
    }
     void addMessage(Member sender, const string &desc)
    {
        Message m(desc);
        messages.push_back(make_pair(sender.getName(), m));
    }
    void addPost(const string &heading, const string &desc)
    {
        Post p(heading, desc);
        posts.push_back(p);
    }
     void addFriend(Member p)
    {
        friends.push_back(p);
    }
    
    void makeFriend(Member &m)
    {
        
        addFriend(m);
        // m.addFriend(this);
    }
     bool isFriend(Member &member)
    {
        for(auto fr:friends)
        {
            if(areSame(fr,member))
                return true;
        }
        return false;
    }
     bool areSame(Person p1, Person p2)
    {
        if((p1.getName() == p2.getName()) && (p1.getAge() == p2.getAge()) && (p1.getCity() == p2.getCity()) && (p1.getOccupation() == p2.getOccupation()))
            return true;
        return false;
    }
};