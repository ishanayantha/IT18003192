#include <iostream>

int main() {
  class User{
	private:
		int user_id;
		std ::string user_role;
		std ::string user_name;
		std ::string user_email;
		std ::string user_dob;
		std ::string user_address;
		
	public:
		void addUser();
		void editUser();
		void deleteUser();
		void searchUser();
		
}

User::User(){
	
}
User::User(int uID,std ::string uRol,std ::string uname,std ::string uemail,std ::string udob,std ::string uadres )
{
	user_id = uID;
  user_role=  uRol;
	user_name = uname;
	user_email = uemail;
  user_dob = udob;
  user_address = uadres;
}

void User::addUser(){
	
}

void User::editUser()(){
	
}
void User::deleteUser(){
	
}
void User::searchUser(){
	
}
User::~User(){}
	
}

