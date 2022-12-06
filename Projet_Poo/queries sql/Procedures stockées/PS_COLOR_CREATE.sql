create procedure PS_COLOR_CREATE (@id_item int, @name varchar(50), @price_multiplicator float, @quantity_in_stock int)
as
begin
insert into Color 
values (@id_item, @name, @price_multiplicator, @quantity_in_stock)
end