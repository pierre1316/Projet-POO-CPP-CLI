create procedure PS_INVOICE_CONTAIN_CREATE (@reference_order varchar(100),
											@name_color varchar(50),
											@name_item varchar(100),
											@id_item int,
											@name_category varchar(50),
											@tva_category float,
											@prix_ht_unite float,
											@item_quantity int,
											@prix_ttc_unite float,
											@level_amount int,
											@price_ht_over_level float,
											@price_ttc_over_level float,
											@multiplicator int)
as begin
INSERT INTO Invoice_Contain 
values (@reference_order,
		@name_color,
		@name_item,
		@id_item,
		@name_category,
		@tva_category,
		@prix_ht_unite,
		@item_quantity,
		@prix_ttc_unite,
		@level_amount,
		@price_ht_over_level,
		@price_ttc_over_level,
		@multiplicator)
end