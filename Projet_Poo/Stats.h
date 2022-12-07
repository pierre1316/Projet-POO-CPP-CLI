#pragma once
#include "CLcad.h"

namespace NS_Comp_Svc {
	ref class Stats
	{
	private:
		System::Data::DataSet^ oDs;
		System::String^ sql;
		NS_Comp_Data::CLcad^ oCad;
	public: // Address :
		Stats(void);
		System::Data::DataSet^ Stats::caDate(System::String^ dataTableName);
		System::Decimal^ Stats::price_average(System::Void);
		System::Data::DataSet^ Stats::items_out_of_stock(System::String^ dataTableName);
		System::Decimal^ Stats::price_commercial_total(System::Void);
		System::Data::DataSet^ Stats::tenBestSale(System::String^ dataTableName);
		System::Data::DataSet^ Stats::tenWorstSale(System::String^ dataTableName); 
		System::Decimal^ Stats::customerTotalPurchase(System::String^ customer_name);
		System::Data::DataSet^ Stats::selectInvoiceNames(System::String^ dataTableName);

	};
}
