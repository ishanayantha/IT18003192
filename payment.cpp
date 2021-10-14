#include <iostream>

int main() {
  class Payment{
	private:
		int payment_id;
		std ::string payment_bill;
		std ::string payment_type;
		std ::string payment_description;
		std ::string payment_date;
		std ::string payment_customer_id;
	public:
		void addPayment();
		void editPayment();
		void deletePayment();
		void searchPayment();
};

Payment::Payment(int yID,std ::string ybil,std ::string ytype,std ::string ydes,std ::string ydat,std ::string ycuid )
{
	payment_id = yID;
  payment_bill = ybil;
  payment_type=  ytype;
	payment_description = ydes;
	 payment_date = ydat;
  payment_customer_id =  ycuid;
}

void Payment::addPayment(){
	
}

void Payment::editPayment(){
	
}
void Payment::deletePayment(){
	
}
void Payment::searchPayment(){
	
}

	}