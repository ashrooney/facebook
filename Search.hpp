#pragma once
#include<bits/stdc++.h>
#include "Member.hpp"
#include "Post.hpp"
class Search
{
    protected:
    vector<Member> members;
    //  map<Member, vector<Post>> mp;
    public:
    Search()=default;
    
};

class SearchMembers :  public Search
{
    public:
    SearchMembers() = default;
    static SearchMembers& GetInstance()
    {
        static SearchMembers* memsearch = new SearchMembers;
        return *memsearch;
    }
    
    void addMember(const Member &member)
    {
    //    Member member(name,city,occ,age);
       members.push_back(member);
    }
    void showAllMembers()
    {  
        for(auto member:members)
        {
            auto details = member.getMemberDetails();
                cout<<"Name:"<<details[0]<<" City:"<<details[1]<<" Occupation:"<<details[2]<<" Age:"<<details[3]<<endl;
        }
    }
    bool searchMembersByName(const string &name)
    {
        
        bool searchResult = false;
        for(auto member:members)
        {
            auto details = member.getMemberDetails();
            if(details[0] == name)
            {
                auto details = member.getMemberDetails();
                cout<<"Name:"<<details[0]<<" City:"<<details[1]<<" Occupation:"<<details[2]<<" Age:"<<details[3]<<endl;
                searchResult = true;
            } 
            
                
        }
        if(!searchResult)
        {
            cout<<"Not found"<<endl;
            // return false;
        }
        return searchResult;

    }
};

class SearchMemberItems :  public Search 
{
    private:
    
    public:
    SearchMemberItems() = default;
    static SearchMemberItems& GetInstance()
    {
        static SearchMemberItems* memsearch = new SearchMemberItems;
        return *memsearch;
    }
    void getPostsOnTimeLine(Member &member)
    {
        // auto posts = mp[member];
        auto posts = member.getPosts();
        cout<<"----------------Timeline posts for "<<member.getName()<<"----------"<<endl;
        for(int i = 0;i<posts.size();i++)
        {
            cout<<"Post "<<i<<" "<<posts[i].getDescription()<<endl;
        }
    }
    void getMessages(Member &member)
    {
        auto messages = member.getMessages();
        for(auto message:messages)
        {
            cout<<"Sender---->"<<message.first<<endl;
            cout<<"Message : "<<message.second.getDescription()<<endl;
        }
    }
    void getFriends(Member &member)
    {
        auto friends = member.getFriends();
        for(auto fr :friends)
        {
            auto details = fr.getMemberDetails();
            cout<<"Name:"<<details[0]<<" City:"<<details[1]<<" Occupation:"<<details[2]<<" Age:"<<details[3]<<endl;
        }
    }

};