#include "People.h"

using namespace NS_Comp_Svc;

NS_Comp_Svc::People::People(void)
{
	this->oDs = gcnew System::Data::DataSet();
	this->oCad = gcnew NS_Comp_Data::CLcad();
}

System::Data::DataSet^ People::selectAllPeople(System::String^ dataTableName)
{
	this->sql = "EXEC PS_PEOPLE_SELECT";

	return this->oCad->getRows(this->sql, dataTableName);
}


System::Data::DataRow^ People::createPeople(System::String^ first_name, System::String^ last_name)
{
	this->sql = "EXEC PS_PEOPLE_CREATE @first_name = '" + first_name + "', @last_name = '" + last_name + "'";
	this->oCad->actionRows(this->sql);
	this->sql = "EXEC PS_PEOPLE_SELECT";
	this->oDs = this->oCad->getRows(this->sql, "result");

	return this->oDs->Tables["result"]->Rows[oDs->Tables["result"]->Rows->Count - 1];
}

System::Void People::modifyPeople(int idPeople, System::String^ last_name, System::String^ first_name)
{
	this->sql = "EXEC PS_PEOPLE_UPDATE @idPeople = '" + idPeople + "', @last_name = '" + last_name + "', @first_name = '" + first_name + "'";
	this->oCad->actionRows(this->sql);
}

System::Void People::deletePeople(int idPeople)
{
	this->sql = "EXEC PS_PEOPLE_DELETE @idPeople = '" + idPeople + "'";
	this->oCad->actionRows(this->sql);
}