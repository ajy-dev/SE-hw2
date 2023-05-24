#ifndef MEMBER_HPP
# define MEMBER_HPP

# include <iostream>

using namespace std;

class Member
{
private:
	string id;
	string password;  // name ssn?
public:
	Member(string name, string ssn, string id, string password);
	bool checkLoginInfo();
	string getID() { return id; }
	string getPassword() { return password; }
};

#endif