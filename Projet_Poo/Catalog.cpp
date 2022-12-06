#include "Catalog.h"

using namespace NS_Comp_Svc;

Catalog::Catalog(void)
{
	this->oDs = gcnew System::Data::DataSet();
	this->oCad = gcnew NS_Comp_Data::CLcad();
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

System::Void Catalog::createColor(int id_item, System::String^ name, System::String^ price_multiplicator, int quantity_in_stock)
{
	System::String^ sql = "EXEC PS_COLOR_CREATE @id_item = '" + id_item + "', @name = '" + name + "', @price_multiplicator = '" + price_multiplicator + "', @quantity_in_stock = '" + quantity_in_stock + "'";

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

System::Void Catalog::deleteOrder(System::String^ reference_order) {
	System::String^ sql = "EXEC PS_ORDER_DELETE @reference_order = '" + reference_order + "'";

	this->oCad->actionRows(sql);
}

System::Data::DataSet^ Catalog::searchOrder(System::String^ DataTableName, System::String^ reference_order)
{
	System::String^ sql = "EXEC PS_ORDER_SEARCH @reference_order = '" + reference_order + "'";

	return this->oCad->getRows(sql, DataTableName);
}

System::Data::DataSet^ Catalog::selectOrderNonArchived(System::String^ DataTableName)
{
	System::String^ sql = "EXEC PS_ORDER_SELECT_NON_ARCHIVED";

	return this->oCad->getRows(sql, DataTableName);
}

System::Data::DataSet^ Catalog::selectOrderArchived(System::String^ DataTableName)
{
	System::String^ sql = "EXEC PS_ORDER_SELECT_ARCHIVED";

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
		sql = "EXEC PS_CONTAIN_CREATE @reference_order = '" + reference_order + "', @id_item = '" + table->Rows[i]->ItemArray[2]->ToString() +
			"', @color_name = '" + table->Rows[i]->ItemArray[0]->ToString() + "', @quantity = '" + table->Rows[i]->ItemArray[6]->ToString() + "'";
		this->oCad->actionRows(sql);
	}
}

System::Void Catalog::archiveOrder(System::String^ reference_order) 
{
	System::String^ sql = "EXEC PS_ORDER_ARCHIVE @reference_order = '" + reference_order + "'";

	this->oCad->actionRows(sql);
}

System::Void Catalog::setOrderIssueDate(System::String^ reference_order, System::String^ issue_date) 
{
	System::String^ sql = "EXEC PS_ORDER_SET_ISSUE_DATE @reference_order = '" + reference_order + "', @issue_date = '" + issue_date + "'";

	this->oCad->actionRows(sql);
}

//
// Invoices :
//
System::Void Catalog::createInvoice(System::String^ reference_order, System::String^ payment_date, System::String^ payment_method,
	System::String^ price_total_ht, System::String^ price_total_ttc, System::String^ invoice_date, System::String^ deli_address, 
	System::String^ bill_address, System::String^ customer_name, System::Data::DataTable^ table)
{
	System::String^ sql = 
		"EXEC PS_INVOICE_CREATE @reference_order = '" + reference_order + 
		"', @payment_date = " + payment_date +
		", @payment_method = '" + payment_method +
		"', @price_total_ht = '" + price_total_ht->Replace(',','.') +
		"', @price_total_ttc = '" + price_total_ttc->Replace(',', '.') +
		"', @invoice_date = '" + invoice_date +
		"', @deli_address = '" + deli_address +
		"', @bill_address = '" + bill_address +
		"', @customer_name = '" + customer_name +
		"'";
	this->oCad->actionRows(sql);
	System::Console::WriteLine(table->Rows->Count);
	for (int i = 0; i < table->Rows->Count; i++) {
		sql = "EXEC PS_INVOICE_CONTAIN_CREATE @reference_order = '" + reference_order +
			"', @name_color = '" + table->Rows[i]->ItemArray[0]->ToString() +
			"', @name_item = '" + table->Rows[i]->ItemArray[1]->ToString() +
			"', @id_item = '" + table->Rows[i]->ItemArray[2]->ToString() +
			"', @name_category = '" + table->Rows[i]->ItemArray[3]->ToString() +
			"', @tva_category = '" + table->Rows[i]->ItemArray[4]->ToString()->Replace(',', '.') +
			"', @prix_ht_unite = '" + table->Rows[i]->ItemArray[5]->ToString()->Replace(',', '.') +
			"', @item_quantity = '" + table->Rows[i]->ItemArray[6]->ToString() +
			"', @prix_ttc_unite = '" + table->Rows[i]->ItemArray[7]->ToString()->Replace(',', '.') +
			"', @level_amount = '" + table->Rows[i]->ItemArray[8]->ToString() +
			"', @price_ht_over_level = '" + table->Rows[i]->ItemArray[9]->ToString()->Replace(',', '.') +
			"', @price_ttc_over_level = '" + table->Rows[i]->ItemArray[10]->ToString()->Replace(',', '.') +
			"', @multiplicator = '" + table->Rows[i]->ItemArray[11]->ToString()->Replace(',', '.') + "'";
		this->oCad->actionRows(sql);
	}
}

System::Data::DataSet^ Catalog::selectInvoices(System::String^ DataTableName)
{
	System::String^ sql = "EXEC PS_INVOICE_SELECT";

	return this->oCad->getRows(sql, DataTableName);
}