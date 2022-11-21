#include "CLpeople.h"

using namespace NS_Comp_Svc;

NS_Comp_Svc::CLpeople::CLpeople(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMappTB = gcnew NS_Comp_Mappage::CLmapTB();
}

System::Data::DataSet^ CLpeople::selectAllPeople(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappTB->GetAllPeople();
	return this->oCad->getRows(sql, dataTableName);
}