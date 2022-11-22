#include "CLservStaff.h"


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


System::Void CLservStaff::createStaff(int idPeople, System::DateTime^ hiring_date, int idSuperior, System::String^ password) {
	System::String^ sql;
	sql = this->oMappTB->createStaff(idPeople, hiring_date);
	this->oCad->actionRows(sql);
	//sql = this->oMappTB->GetAllStaff();
	//this->oDs = this->oCad->getRows("rsl", sql);
	//this->oDs->Tables["rsl"]->Rows[oDs->Tables["rsl"]->Rows->Count - 1];
}