#include <iostream>

int main() {
  class Permission{
	private:
		int permission_id;
		int permission_role;
		std ::string permission_title;
		std ::string permission_description;
	public:
		void addpermission();
		void editpermission();
		void deletepermission();
		void searchRequestedpermission();
    }


Permission::permission() {
	
}
Permission::Permission(int pID,int pRole,std ::string pTit,std ::string pDes )
{
	permission_id = pID;
	permission_role = pRole;
	permission_title = pTit;
	permission_description = pDes;
}
void Permission::addPermission(){
	
}

void Permission::editpermission(){
	
}
void Permission::deletepermission(){
	
}
void Permission::searchRequestedpermission(){
	
}
void displayPermission(){
	
}
permission::~Permission(){
	
}}
