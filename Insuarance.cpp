#include <iostream>

int main() {
  class Insuarance{
	private:
		int insuarance_id;
		std ::string insuarance_number;
		std ::string insuarance_type;
		std ::string insuarance_amount;
		std ::string insuarance_description;
		std ::string insuarance_expiry;
		std ::string insuarance_date;
	public:
		void addInsuarance();
		void editInsuarance();
		void deleteInsuarance();
		void searchInsuarance();
}

Insuarance::Insuarance(){
	
}
Insuarance::Insuarance(int iID,std ::string inum,std ::string itype,std ::string iAmot,std ::string iDes,std ::string iExp,std::String iDat )
{
	insuarance_id = iID;
  insuarance_number = inum;
  insuarance_type=  itype;
  insuarance_amount = iAmot;
	insuarance_description = iDes;
  insuarance_expiry = iExp;
  insuarance_date=iDat;
}

void Insuarance::addInsuarance(){
	
}

void Insuarance::editInsuarance(){
	
}
void Insuarance::deleteInsuarance(){
	
}
void Insuarance::searchInsuarance(){
	
}
Insuarance::~Insuarance(){}
	
}
