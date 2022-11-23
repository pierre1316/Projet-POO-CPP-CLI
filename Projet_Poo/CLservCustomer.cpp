#include "CLservCustomer.h"

using namespace NS_Comp_Svc;

NS_Comp_Svc::CLservCustomer::CLservCustomer(void)
{
	this->oDs = gcnew System::Data::DataSet();
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMappTB = gcnew NS_Comp_Mappage::CLmapTB();
}

System::Data::DataSet^ CLservCustomer::selectAllCustomer(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappTB->GetAllCustomers();
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ CLservCustomer::selectCustomerNoStaff(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappTB->getCustomerNoStaff();
	return this->oCad->getRows(sql, dataTableName);
}


System::Void CLservCustomer::createCustomer(int idPeople, System::String^ birth_date) {
	System::String^ sql;
	sql = this->oMappTB->createCustomer(idPeople, birth_date);
	this->oCad->actionRows(sql);
}