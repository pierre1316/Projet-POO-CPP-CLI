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
	System::String^ sql = "EXEC PS_CATEGORY_CREATE @category_name = '" + category_name + "', @tva_rate = '" + tva_rate + "'";
	
	this->oCad->actionRows(sql);
}

System::Data::DataSet^ Catalog::selectCategory(System::String^ DataTableName)
{
	System::String^ sql = "EXEC PS_CATEGORY_SELECT";
	
	return this->oCad->getRows(sql, DataTableName);
}
//EXEC PS_UPDATE_CATEGORY @idcategory = 1, @name = 'Smartphones', @tva = 20.01

System::Void Catalog::updateCategory(int idCategory, System::String^ category_name, System::String^ tva_rate)
{
	System::String^ sql = "EXEC PS_CATEGORY_UPDATE @idcategory = '" + idCategory + "', @name = '" + category_name + "', @tva = '" + tva_rate + "'";

	this->oCad->actionRows(sql);
}

System::Void Catalog::deleteCategory(int idCategory)
{
	System::String^ sql = "EXEC PS_CATEGORY_DELETE @idcategory = '" + idCategory + "'";

	this->oCad->actionRows(sql);
}

System::Void Catalog::createItem(System::String^ name, System::String^ price_ht, int max_in_stock, int minimal_to_order, System::String^ price_ht_over_level, int level_amount, int id_category)
{
	System::String^ sql = "EXEC PS_ITEM_CREATE @name = '" + name + "', @price_ht = '" + price_ht + "', @max_in_stock = '" + max_in_stock + "', @minimal_to_order = '" + minimal_to_order + "', @price_ht_over_level = '" + price_ht_over_level + "', @level_amount = '" + level_amount + "', @id_category = '" + id_category + "'";

	this->oCad->actionRows(sql);
}

System::Data::DataSet^ Catalog::selectItems(System::String^ DataTableName)
{
	System::String^ sql = "EXEC PS_ITEM_SELECT";

	return this->oCad->getRows(sql, DataTableName);
}
System::Data::DataSet^ Catalog::selectItemsCategory(System::String^ DataTableName, int id_category)
{
	System::String^ sql = "EXEC PS_ITEM_CATEGORY_SELECT @id_category = '" + id_category + "'";

	return this->oCad->getRows(sql, DataTableName);
}

System::Void Catalog::updateItem(int id_item, System::String^ name, System::String^ price_ht, int max_in_stock, int minimal_to_order, System::String^ price_ht_over_level, int level_amount, int id_category)
{
	System::String^ sql = "EXEC PS_ITEM_UPDATE @id_item = '" + id_item + "', @name = '" + name + "', @price_ht = '" + price_ht + "', @max_in_stock = '" + max_in_stock + "', @minimal_to_order = '" + minimal_to_order + "', @price_ht_over_level = '" + price_ht_over_level + "', @level_amount = '" + level_amount + "', @id_category = '" + id_category + "'";

	this->oCad->actionRows(sql);
}

System::Void Catalog::deleteItem(int id_item)
{
	System::String^ sql = "EXEC PS_ITEM_DELETE @id_item = '" + id_item + "'";

	this->oCad->actionRows(sql);
}

System::Void Catalog::createColor(int id_item, System::String^ name, System::String^ price_multiplicator, int quantity_in_stock, int color_r, int color_g, int color_b)
{
	System::String^ sql = "EXEC PS_COLOR_CREATE @id_item = '" + id_item + "', @name = '" + name + "', @price_multiplicator = '" + price_multiplicator + "', @quantity_in_stock = '" + quantity_in_stock + "', @color_r = '" + color_r + "', @color_g = '" + color_g + "', @color_b = '" + color_b + "'";

	this->oCad->actionRows(sql);
}

System::Data::DataSet^ Catalog::selectColors(System::String^ DataTableName, int id_item)
{
	System::String^ sql = "EXEC PS_COLOR_ITEM_SELECT @id_item = '" + id_item + "'";

	return this->oCad->getRows(sql, DataTableName);
}

System::Void Catalog::deleteColor(int id_item, System::String^ name)
{
	System::String^ sql = "EXEC PS_COLOR_DELETE @id_item = '" + id_item + "', @name = '" + name + "'";

	this->oCad->actionRows(sql);
}

//
// Payment Methods :
//

System::Void Catalog::createPaymentMethod(System::String^ name_method)
{
	System::String^ sql = "EXEC PS_PAYMENT_METHOD_CREATE @name_method = '" + name_method + "'";

	this->oCad->actionRows(sql);
}

System::Data::DataSet^ Catalog::selectPaymentMethod(System::String^ DataTableName)
{
	System::String^ sql = "EXEC PS_PAYMENT_METHOD_SELECT";

	return this->oCad->getRows(sql, DataTableName);
}

System::Void Catalog::updatePaymentMethod(int id_method, System::String^ name_method)
{
	System::String^ sql = "EXEC PS_PAYMENT_METHOD_UPDATE @id_method = '" + id_method + "', @name_method = '" + name_method + "'";

	this->oCad->actionRows(sql);
}

System::Void Catalog::deletePaymentMethod(int id_method)
{
	System::String^ sql = "EXEC PS_PAYMENT_METHOD_DELETE @id_method = '" + id_method + "'";

	this->oCad->actionRows(sql);
}

//
// Orders :
//

System::Void Catalog::createOrder(System::String^ reference_order, System::String^ delivery_date, System::String^ issue_date, System::String^ payment_date, int id_payment_method, int idPeople, int idBill, int idDeli, System::Data::DataTable^ table)
{
	System::String^ sql = "EXEC PS_ORDER_CREATE @reference_order = '" + reference_order + 
		"', @delivery_date = '" + delivery_date + "', @issue_date = " + issue_date +
		", @payment_date = " + payment_date + ", @id_payment_method = '" + id_payment_method + 
		"', @idPeople = '" + idPeople + "', @idBill = '" + idBill + "', @idDeli = '" + idDeli + "'";

	this->oCad->actionRows(sql);
	for (int i = 0; i < table->Rows->Count; i++) {
		sql = "EXEC PS_CONTAIN_CREATE @reference_order = '" + reference_order + "', @id_item = '" + table->Rows[i]->ItemArray[0]->ToString() +
			"', @color_name = '" + table->Rows[i]->ItemArray[2]->ToString() + "', @quantity = '" + table->Rows[i]->ItemArray[3]->ToString() + "'";
		this->oCad->actionRows(sql);
	}
}

System::Data::DataSet^ Catalog::searchOrder(System::String^ DataTableName, System::String^ reference_order)
{
	System::String^ sql = "EXEC PS_ORDER_SEARCH @reference_order = '" + reference_order + "'";

	return this->oCad->getRows(sql, DataTableName);
}

System::Data::DataSet^ Catalog::selectOrder(System::String^ DataTableName)
{
	System::String^ sql = "EXEC PS_ORDER_SELECT";

	return this->oCad->getRows(sql, DataTableName);
}

System::Data::DataSet^ Catalog::selectContain(System::String^ DataTableName, System::String^ reference_order)
{
	System::String^ sql = "EXEC PS_CONTAIN_ORDER_SELECT @reference_order = '" + reference_order + "'";

	return this->oCad->getRows(sql, DataTableName);
}

System::Void Catalog::updateOrder(System::String^ reference_order, System::String^ delivery_date, System::String^ issue_date, System::String^ payment_date, int id_payment_method, int idBill, int idDeli, System::Data::DataTable^ table)
{
	System::String^ sql = "EXEC PS_ORDER_UPATE @reference_order = '" + reference_order +
		"', @delivery_date = '" + delivery_date + "', @issue_date = " + issue_date +
		", @payment_date = " + payment_date + ", @id_payment_method = '" + id_payment_method +
		"', @idBill = '" + idBill + "', @idDeli = '" + idDeli + "'";
	this->oCad->actionRows(sql);
	sql = "EXEC PS_CONTAIN_DELETE @reference_order = '" + reference_order + "'";
	this->oCad->actionRows(sql);
	for (int i = 0; i < table->Rows->Count; i++) {
		sql = "EXEC PS_CONTAIN_CREATE @reference_order = '" + reference_order + "', @id_item = '" + table->Rows[i]->ItemArray[0]->ToString() +
			"', @color_name = '" + table->Rows[i]->ItemArray[2]->ToString() + "', @quantity = '" + table->Rows[i]->ItemArray[3]->ToString() + "'";
		this->oCad->actionRows(sql);
	}
}