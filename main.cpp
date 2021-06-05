#include "bits/stdc++.h"
#include "Facebook.hpp"

using namespace std;

int main()
{
    Facebook fb;
    Member ab("Ashish","Bengaluru","SDE", 26);
    Member sb("Shailja","Pune","SDE", 23);
    Member ss("Sid","Noida","SDE-II", 28);
    Member hd("Himanshu","Hyderabad","PM", 26);
    fb.registerMember(ab);
    fb.registerMember(sb);
    fb.registerMember(ss);
    fb.registerMember(hd);
    // fb.showAllMembers();
    fb.search("Ashish");
    fb.search("XYZ");
    fb.writePost(ab, "Intro","My name is Ashish");
    fb.writePost(ab, "Food for thought","There is no revolution without struggle");
    fb.writePost(sb, "Intro","My name is Shailja");
    fb.writePost(sb, "Thought of the day","Failure are the stepping stone to success");
    fb.getPosts(ab);
    fb.getPosts(sb);

    fb.sendMessage(ab,sb,"Hello"); //This will error out as ab and sb are not friends as of now
    fb.sendFriendRequest(ab,sb);
    fb.sendMessage(ab,sb,"Hello");
    fb.sendMessage(sb,ab,"Hello");
    fb.sendMessage(ab,sb,"Sup!");
    fb.sendMessage(sb,ab,"All good ... wbu");
    fb.sendMessage(ab,sb,"All is well");
    fb.sendMessage(sb,ab,"(y)");

    fb.getMessages(sb);

    fb.sendMessage(ab,ss,"Hello");
     fb.sendFriendRequest(ab,ss);
     fb.getAllFriends(ab);
    return 0;
}