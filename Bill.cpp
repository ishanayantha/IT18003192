#include <iostream>

int main() {
  class Bill{
	private:
		int bill_id;
		std ::string bill_type;
		std ::string bill_description;
		std ::string bill_number;
		int bill_customer_id;
		
	public:
		void addBill();
		void editBill();
		void deleteBill();
		void searchBill();
}
Bill::Bill(){
	
}
Bill::Bill(int bID,std ::string bType,std ::string bDes,std ::string bNum,std ::string bCid )
{
	bill_id = bID;
  bill_type=   bType;
	bill_description = bDes;
	bill_number= bNum;
  bill_customer_id = bCid;
  
}

void Bill::addBill(){
	
}

void Bill::editBill(){
	
}
void Bill::deleteBill(){
	
}
void Bill::searchBill(){
	
}
Bill::~Bill(){}
	
}