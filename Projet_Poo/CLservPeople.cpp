#include "CLservPeople.h"

using namespace NS_Comp_Svc;

NS_Comp_Svc::CLservPeople::CLservPeople(void)
{
	this->oDs = gcnew System::Data::DataSet();
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMappTB = gcnew NS_Comp_Mappage::CLmapTB();
}

System::Data::DataSet^ CLservPeople::selectAllPeople(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappTB->GetAllPeople();
	return this->oCad->getRows(sql, dataTableName);
}


System::Data::DataRow^ CLservPeople::createPeople(System::String^ first_name, System::String^ last_name) {

	
	System::String^ sql;
	sql = this->oMappTB->createPeople(first_name, last_name);
	this->oCad->actionRows(sql);
	sql = this->oMappTB->GetAllPeople();
	this->oDs = this->oCad->getRows(sql, "result");

	return this->oDs->Tables["result"]->Rows[oDs->Tables["result"]->Rows->Count - 1];
}

System::Void CLservPeople::modifyPeople(int idPeople, System::String^ first_name, System::String^ last_name) {

	System::String^ sql;
	sql = this->oMappTB->updatePeople(idPeople, first_name, last_name);
	this->oCad->actionRows(sql);
}