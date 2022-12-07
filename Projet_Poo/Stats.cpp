#include "Stats.h"

using namespace NS_Comp_Svc;

NS_Comp_Svc::Stats::Stats(void)
{
	this->oDs = gcnew System::Data::DataSet();
	this->oCad = gcnew NS_Comp_Data::CLcad();
}


System::Data::DataSet^ Stats::caDate(System::String^ dataTableName) 
{
	System::String^ sql = "EXEC PS_STATS_CA_DATE";

	return this->oCad->getRows(sql, dataTableName);
}


System::Decimal^ Stats::price_average(System::Void) 
{
	System::String^ sql = "EXEC PS_STATS_PRICE_AVERAGE";

	return System::Convert::ToDecimal((this->oCad->getRows(sql, "rsl"))->Tables["rsl"]->Rows[0]->ItemArray[0]);
}

