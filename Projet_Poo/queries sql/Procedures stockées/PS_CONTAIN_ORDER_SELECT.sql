CREATE PROCEDURE PS_CONTAIN_ORDER_SELECT (@reference_order varchar(50))
as begin
select Color.name, 
		Items.name, 
		Items.id_item, 
		Category.category_name, 
		Category.tva_rate, 
		Items.price_ht,
		Contain.quantity,
		((Items.price_ht + Items.price_ht * (Category.tva_rate/100)) * Color.price_multiplicator) AS price_ttc,
		Items.level_amount,
		Items.price_ht_over_level,
		((Items.price_ht_over_level + Items.price_ht_over_level * (Category.tva_rate/100)) * Color.price_multiplicator) AS price_ttc_over_level,
		Color.price_multiplicator
from Contain
join Items on Items.id_item = Contain.id_item
join Color on Contain.color_name = Color.name and Contain.id_item = Color.id_item
join Category on Category.id_category = Items.id_category
where reference_order = @reference_order
END