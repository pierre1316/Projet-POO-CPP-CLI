#include "Customer.h"

using namespace NS_Comp_Svc;

NS_Comp_Svc::Customer::Customer(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMappTB = gcnew NS_Comp_Mappage::CLmapTB();
}

System::Data::DataSet^ Customer::selectAllCustomer(System::String^ dataTableName)
{
	this->sql = "EXEC PS_CUSTOMER_SELECT";
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ Customer::getTheCustomer(System::String^ dataTableName, int idPeople)
{
	this->sql = "EXEC PS_CUSTOMER_SELECT_JUST @idPeople = '" + idPeople + "'";
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ Customer::selectCustomerNoStaff(System::String^ dataTableName)
{
	this->sql = "EXEC PS_CUSTOMER_NOSTAFF_SELECT";
	return this->oCad->getRows(sql, dataTableName);
}


System::Void Customer::createCustomer(int idPeople, System::String^ birth_date)
{
	this->sql = "EXEC PS_CUSTOMER_CREATE @idPeople = '" + idPeople + "', @date_birthday = '" + birth_date + "'";
	this->oCad->actionRows(sql);
}

System::Void Customer::modifyCustomer(int idPeople, System::String^ birth_date) 
{
	this->sql = "EXEC PS_CUSTOMER_UPDATE @idPeople = '" + idPeople + "', @birthday = '" + birth_date + "'";
	this->oCad->actionRows(sql);
}

System::Void Customer::deleteCustomer(int idPeople)
{
	this->sql = "EXEC PS_CUSTOMER_DELETE @idPeople = '" + idPeople + "'";
	this->oCad->actionRows(sql);
}