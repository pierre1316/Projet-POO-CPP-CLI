create procedure PS_ITEM_UPDATE (@id_item int, @name varchar(50), @price_ht float, @max_in_stock int, @minimal_to_order int, @price_ht_over_level float, @level_amount int, @id_category int)
as
begin
update Items
set			name = @name, price_ht = @price_ht, 
			max_in_stock = @max_in_stock, 
			minimal_to_order = @minimal_to_order, 
			price_ht_over_level = @price_ht_over_level, 
			level_amount = @level_amount, 
			id_category = @id_category
where id_item = @id_item
end