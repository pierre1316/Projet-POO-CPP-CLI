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

	};
}
