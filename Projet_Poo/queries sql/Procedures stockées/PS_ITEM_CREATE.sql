create procedure PS_ITEM_CREATE (@name varchar(50), @price_ht float, @max_in_stock int, @minimal_to_order int, @price_ht_over_level float, @level_amount int, @id_category int)
as
begin
insert into Items (name, price_ht, max_in_stock, minimal_to_order, price_ht_over_level, level_amount, id_category)
values (@name, @price_ht, @max_in_stock, @minimal_to_order, @price_ht_over_level, @level_amount, @id_category)
end