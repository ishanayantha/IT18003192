#include <iostream>

int main() {

class Customer{
	private:
		int Customer_id;
		std ::string Customer_mobile;
		std ::string Customer_email;
		std ::string Customer_address;
		std ::string Customer_password;
		std ::string Customer_Username;
		std ::string Customer_name;
	public:
		void addCustomer();
		void editCustomer();
		void deleteCustomer();
		void searchCustomer();
   
}
Customer::Customer(){	
}
Customer::Customer(int cID,std ::string cMonum,std ::string cEmil,std ::string cAdres,std ::string cPwd,std ::string cUname,std::String cName )
{
	Customer_id = cID;
  Customer_mobile = cMonum;
  Customer_email=  cEmil;
  Customer_address = cAdres;
	Customer_password = cPwd;
  Customer_Username = cUname;
  Customer_name=cName;
}

void Customer::addCustomer(){
	
}

void Customer::editCustomer(){
	
}
void Customer::deleteCustomer(){
	
}
void Customer::searchCustomer(){
	
}
Customer::~Customer(){}
	
}
