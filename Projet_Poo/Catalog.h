#pragma once
#include "CLmapTB.h"
#include "CLcad.h"

namespace NS_Comp_Svc {
	ref class Catalog
	{
	private:
		System::Data::DataSet^ oDs;
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp_Mappage::CLmapTB^ oMappTB;
	public:
		Catalog(void);
		System::Void createCategory(System::String^ category_name, System::String^ tva_rate);
		System::Data::DataSet^ Catalog::selectCategory(System::String^ DataTableName);
		System::Void Catalog::updateCategory(int idCategory, System::String^ category_name, System::String^ tva_rate);
		System::Void Catalog::deleteCategory(int idCategory);
	};
}
