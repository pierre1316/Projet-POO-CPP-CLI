#include "Staff.h"


using namespace NS_Comp_Svc;

NS_Comp_Svc::Staff::Staff(void)
{
	this->oDs = gcnew System::Data::DataSet();
	this->oCad = gcnew NS_Comp_Data::CLcad();
}

System::Data::DataSet^ Staff::selectAllStaff(System::String^ dataTableName)
{
	this->sql = "EXEC PS_STAFF_PEOPLE_SELECT";

	return this->oCad->getRows(this->sql, dataTableName);
}

System::Data::DataSet^ Staff::getTheStaff(System::String^ dataTableName, int idPeople)
{
	this->sql = "EXEC PS_STAFF_SELECT_JUST @idPeople = '" + idPeople + "'";

	return this->oCad->getRows(this->sql, dataTableName);
}

System::Data::DataSet^ Staff::selectAllStaffForStaff(System::String^ dataTableName, int idPeople)
{
	this->sql = "EXEC PS_STAFF_NOSTAFF_SELECT @idPeople = '" + idPeople + "'";

	return this->oCad->getRows(this->sql, dataTableName);
}

System::Data::DataSet^ Staff::selectStaffNoCust(System::String^ dataTableName)
{
	this->sql = "EXEC PS_STAFF_NOCUSTOMER_SELECT";

	return this->oCad->getRows(this->sql, dataTableName);
}

System::Void Staff::createStaff(int idPeople, System::String^ hiring_date, int idSuperior, System::String^ username, System::String^ password) 
{
	this->sql = "EXEC PS_STAFF_CREATE @idPeople = '" + idPeople + "', @hiring_date = '" + hiring_date + "', @username = '" + username + "', @password = '" + password + "'";
	this->oCad->actionRows(this->sql);
	if (idSuperior != -1) {
		this->sql = "EXEC PS_SUPERIOR_UPDATE @idPeople = '" + idPeople + "', @idSuperior = '" + idSuperior + "'";
		this->oCad->actionRows(this->sql);
	}
}

System::Void Staff::modifyStaff(int idPeople, System::String^ hiring_date, int idSuperior) 
{
	this->sql = "EXEC PS_STAFF_UPDATE @idPeople = '" + idPeople + "', @hiring_date = '" + hiring_date + "'";
	this->oCad->actionRows(this->sql);
	if (idSuperior != -1) {
		this->sql = "EXEC PS_SUPERIOR_UPDATE @idPeople = '" + idPeople + "', @idSuperior = '" + idSuperior + "'";
		this->oCad->actionRows(this->sql);
	}
}

System::Void Staff::updateStaffAddress(int idPeople, int idAddress) 
{
	this->sql = "EXEC PS_STAFF_ADDRESS_UPDATE @idPeople = '" + idPeople + "', @idAddress = '" + idAddress + "'";
	this->oCad->actionRows(this->sql);
	
}

System::Void Staff::setSuperiorNULL(int idPeople) 
{
	this->sql = "EXEC PS_SUPERIOR_UPDATENULL @idPeople = '" + idPeople + "'";
	this->oCad->actionRows(this->sql);
	
}

System::Void Staff::deleteStaff(int idPeople) 
{
	this->sql = "EXEC PS_STAFF_DELETE @idPeople = '" + idPeople + "'";
	this->oCad->actionRows(this->sql);
}

System::Void Staff::setStaffAddressToNULL(int idPeople) 
{
	this->sql = "EXEC PS_STAFF_ADDRESS_UPTADE_NULL @idStaff = '" + idPeople + "'";
	this->oCad->actionRows(this->sql);
}

System::Data::DataSet^ Staff::getConnexion(System::String^ dataTableName, System::String^ username, System::String^ password)
{
	this->sql = "EXEC PS_STAFF_SELECT_CONNEXION @username = '" + username + "', @password = '" + password + "'";

	return this->oCad->getRows(this->sql, dataTableName);
}