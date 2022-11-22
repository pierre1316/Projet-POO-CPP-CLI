#include "CLservPeople.h"

using namespace NS_Comp_Svc;

NS_Comp_Svc::CLservPeople::CLservPeople(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMappTB = gcnew NS_Comp_Mappage::CLmapTB();
}

System::Data::DataSet^ CLservPeople::selectAllPeople(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappTB->GetAllPeople();
	return this->oCad->getRows(sql, dataTableName);
}