#pragma once
#include "bits/stdc++.h"
#include "Member.hpp"
#include "Search.hpp"
// #include "Database.hpp"
using namespace std;

class Facebook
{
   
    // MemberDatabase memdb;
    SearchMembers searchList;
    // vector<Member> members;
    bool areFriends(Member &a, Member &b)
    {
        if(a.isFriend(b)) return true;
        return false;
    }
    public:
    Facebook()=default;
    void registerMember(Member member)
    {
        SearchMembers::GetInstance().addMember(member);
    }
    
    // void showMembers()
    // {
    //     for(auto member:members)
    //     {
    //         showMember(member);
    //     }
    // }
    // void showMember(Member &member)
    // {
    //     // friend ostream& operator<<(ostream& stream, const Member& member) {
	//     // stream<<member.person.getName()<<", "<<member.person.getCity();
	//     // return stream;
    //     auto details = member.getMemberDetails();
    //     cout<<"Name:"<<details[0]<<" City:"<<details[1]<<" Occupation:"<<details[2]<<" Age:"<<details[3]<<endl;
    // }
    void showAllMembers()
    {
        
        SearchMembers::GetInstance().showAllMembers();
    }
    void search(const string &name)
    {
        SearchMembers::GetInstance().searchMembersByName(name);
       
    }
    void writePost(Member &member,const string &header, const string &status)
    {
        member.addPost(header,status);
    }
    void getPosts(Member &member)
    {
        SearchMemberItems::GetInstance().getPostsOnTimeLine(member);
    }
    void getAllFriends(Member &member)
    {
        SearchMemberItems::GetInstance().getFriends(member);
    }
    void getMessages(Member &member)
    {
         SearchMemberItems::GetInstance().getMessages(member);
    }
    void sendMessage(Member &from,Member &to, const string &message)
    {
        if(areFriends(from,to))
            to.addMessage(from, message);
        else{
            cout<<"Please send friend request to send message"<<endl;
        }
    }
    
    void sendFriendRequest(Member &member1, Member &member2)
    {
        if(!member1.isFriend(member2))
        {
            member1.makeFriend(member2);
            member2.makeFriend(member1);
        }
            
    }
};