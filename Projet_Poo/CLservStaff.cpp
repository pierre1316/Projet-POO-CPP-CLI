#include "CLservStaff.h"get


using namespace NS_Comp_Svc;

NS_Comp_Svc::CLservStaff::CLservStaff(void)
{
	this->oDs = gcnew System::Data::DataSet();
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMappTB = gcnew NS_Comp_Mappage::CLmapTB();
}

System::Data::DataSet^ CLservStaff::selectAllStaff(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappTB->GetAllStaff();
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ CLservStaff::getTheStaff(System::String^ dataTableName, int idPeople)
{
	System::String^ sql;

	sql = this->oMappTB->selectTheStaff(idPeople);
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ CLservStaff::selectAllStaffForStaff(System::String^ dataTableName, int idPeople)
{
	System::String^ sql;

	sql = this->oMappTB->GetAllStaffForStaff(idPeople);
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ CLservStaff::selectStaffNoCust(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappTB->getStaffNoCustomer();
	return this->oCad->getRows(sql, dataTableName);
}

System::Void CLservStaff::createStaff(int idPeople, System::String^ hiring_date, int idSuperior, System::String^ password) {
	System::String^ sql;
	sql = this->oMappTB->createStaff(idPeople, hiring_date);
	this->oCad->actionRows(sql);
	if (idSuperior != -1) {
		sql = this->oMappTB->setSuperior(idPeople, idSuperior);
		this->oCad->actionRows(sql);
	}
}

System::Void CLservStaff::modifyStaff(int idPeople, System::String^ hiring_date, int idSuperior) {
	System::String^ sql;
	sql = this->oMappTB->updateStaff(idPeople, hiring_date);
	this->oCad->actionRows(sql);
	if (idSuperior != -1) {
		sql = this->oMappTB->setSuperior(idPeople, idSuperior);
		this->oCad->actionRows(sql);
	}
}

System::Void CLservStaff::updateStaffAddress(int idPeople, int idAddress) {
	System::String^ sql;
	sql = this->oMappTB->updateStaffAddress(idPeople, idAddress);
	this->oCad->actionRows(sql);
	
}

System::Void CLservStaff::setSuperiorNULL(int idPeople) {
	System::String^ sql;
	sql = this->oMappTB->setSuperiorNULL(idPeople);
	this->oCad->actionRows(sql);
	
}

System::Void CLservStaff::deleteStaff(int idPeople) {
	System::String^ sql;
	sql = this->oMappTB->deleteStaff(idPeople);
	this->oCad->actionRows(sql);
}
System::Void CLservStaff::setStaffAddressToNULL(int idPeople) {
	System::String^ sql;
	sql = this->oMappTB->setStaffAddressToNULL(idPeople);
	this->oCad->actionRows(sql);
}