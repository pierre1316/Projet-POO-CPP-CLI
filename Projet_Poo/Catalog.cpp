#include "Catalog.h"

using namespace NS_Comp_Svc;

Catalog::Catalog(void)
{
	this->oDs = gcnew System::Data::DataSet();
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMappTB = gcnew NS_Comp_Mappage::CLmapTB();
}

System::Void Catalog::createCategory(System::String^ category_name, System::String^ tva_rate)
{
	System::String^ sql = "EXEC PS_CREATE_CATEGORY @category_name = '" + category_name + "', @tva_rate = '" + tva_rate + "'";
	
	this->oCad->actionRows(sql);
}

System::Data::DataSet^ Catalog::selectCategory(System::String^ DataTableName)
{
	System::String^ sql = "EXEC PS_SELECT_CATEGORY";
	
	return this->oCad->getRows(sql, DataTableName);
}
//EXEC PS_UPDATE_CATEGORY @idcategory = 1, @name = 'Smartphones', @tva = 20.01

System::Void Catalog::updateCategory(int idCategory, System::String^ category_name, System::String^ tva_rate)
{
	System::String^ sql = "EXEC PS_UPDATE_CATEGORY @idcategory = '" + idCategory + "', @name = '" + category_name + "', @tva = '" + tva_rate + "'";

	this->oCad->actionRows(sql);
}

System::Void Catalog::deleteCategory(int idCategory)
{
	System::String^ sql = "EXEC PS_DELETE_CATEGORY @idcategory = '" + idCategory + "'";

	this->oCad->actionRows(sql);
}
