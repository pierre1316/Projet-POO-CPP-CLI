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


System::Data::DataSet^ Stats::items_out_of_stock(System::String^ dataTableName)
{
	System::String^ sql = "EXEC PS_STATS_PRODUCT_OUT";

	return this->oCad->getRows(sql, dataTableName);
}


System::Decimal^ Stats::price_commercial_total(System::Void)
{
	System::String^ sql = "EXEC PS_STATS_TOTAL_COMMERCIAL_PRICE";

	return System::Convert::ToDecimal((this->oCad->getRows(sql, "price"))->Tables["price"]->Rows[0]->ItemArray[0]);
}

System::Data::DataSet^ Stats::tenBestSale(System::String^ dataTableName)
{
	System::String^ sql = "EXEC PS_STATS_TEN_BEST";

	return this->oCad->getRows(sql, dataTableName);
}


System::Data::DataSet^ Stats::tenWorstSale(System::String^ dataTableName)
{
	System::String^ sql = "EXEC PS_STATS_TEN_WORST";

	return this->oCad->getRows(sql, dataTableName);
}


System::Decimal^ Stats::customerTotalPurchase(System::String^ customer_name)
{
	System::String^ sql = "EXEC PS_STATS_PURCHASE_CUSTOMER @customer_name = '" + customer_name + "'";

	return System::Convert::ToDecimal((this->oCad->getRows(sql, "people"))->Tables["people"]->Rows[0]->ItemArray[1]);
}


System::Data::DataSet^ Stats::selectInvoiceNames(System::String^ dataTableName)
{
	System::String^ sql = "EXEC PS_INVOICE_SELECT_NAMES";

	return this->oCad->getRows(sql, dataTableName);
}
