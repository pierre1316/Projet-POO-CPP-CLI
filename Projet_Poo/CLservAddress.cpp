#include "CLservAddress.h"

using namespace NS_Comp_Svc;

NS_Comp_Svc::CLservAddress::CLservAddress(void)
{
	this->oDs = gcnew System::Data::DataSet();
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMappTB = gcnew NS_Comp_Mappage::CLmapTB();
}


System::Data::DataSet^ CLservAddress::selectAddress(System::String^ dataTableName, int idAddress)
{
	System::String^ sql;

	sql = this->oMappTB->selectAddress(idAddress);
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ CLservAddress::getStaffAddressNULL(System::String^ dataTableName, int idPeople)
{
	System::String^ sql;

	sql = this->oMappTB->getStaffAddressNULL(idPeople);
	return this->oCad->getRows(sql, dataTableName);
}

int CLservAddress::createAddress(System::String^ last_name, System::String^ first_name, System::String^ text, System::String^ postal_code, System::String^ city_name)
{
	System::String^ sql;

	sql = this->oMappTB->createAddress(last_name, first_name, text, postal_code, city_name);
	this->oCad->actionRows(sql);
	sql = this->oMappTB->getAllAddress();
	this->oDs = this->oCad->getRows(sql, "rsl");
	return System::Convert::ToInt32(this->oDs->Tables["rsl"]->Rows[this->oDs->Tables["rsl"]->Rows->Count-1]->ItemArray[0]);
}

System::Void CLservAddress::modifyAddress(int idAddress, System::String^ last_name, System::String^ first_name, System::String^ text, System::String^ postal_code, System::String^ city_name)
{
	System::String^ sql;

	sql = this->oMappTB->updateAddress(idAddress, last_name, first_name, text, postal_code, city_name);
	this->oCad->actionRows(sql);
}

System::Void CLservAddress::deleteAddress(int idAddress)
{
	System::String^ sql;

	sql = this->oMappTB->deleteAddress(idAddress);
	this->oCad->actionRows(sql);
}