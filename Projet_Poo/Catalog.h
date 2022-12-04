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
		System::Data::DataSet^ selectCategory(System::String^ DataTableName);
		System::Void updateCategory(int idCategory, System::String^ category_name, System::String^ tva_rate);
		System::Void deleteCategory(int idCategory);
	public:
		System::Void createItem(System::String^ name, System::String^ price_ht, int max_in_stock, int minimal_to_order, System::String^ price_ht_over_level, int level_amount, int id_category);
		System::Data::DataSet^ Catalog::selectItems(System::String^ DataTableName);
		System::Data::DataSet^ Catalog::selectItemsCategory(System::String^ DataTableName, int id_category);
		System::Void Catalog::updateItem(int id_item, System::String^ name, System::String^ price_ht, int max_in_stock, int minimal_to_order, System::String^ price_ht_over_level, int level_amount, int id_category);
		System::Void Catalog::deleteItem(int id_item);
	public:
		System::Void Catalog::createColor(int id_item, System::String^ name, System::String^ price_multiplicator, int quntity_in_stock, int color_r, int color_g, int color_b);
		System::Data::DataSet^ Catalog::selectColors(System::String^ DataTableName, int id_item);
		System::Void Catalog::deleteColor(int id_item, System::String^ name);
	public:
		System::Void Catalog::createPaymentMethod(System::String^ name_method);
		System::Data::DataSet^ Catalog::selectPaymentMethod(System::String^ DataTableName);
		System::Void Catalog::updatePaymentMethod(int id_method, System::String^ name_method);
		System::Void Catalog::deletePaymentMethod(int id_method);
	public:
		System::Void Catalog::createOrder(System::String^ reference_order, System::String^ delivery_date, System::String^ issue_date, System::String^ payment_date, int id_payment_method, int idPeople, int idBill, int idDeli, System::Data::DataTable^ table);
		System::Data::DataSet^ Catalog::searchOrder(System::String^ DataTableName, System::String^ reference_order);

	};
}