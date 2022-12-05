CREATE PROCEDURE PS_CONTAIN_ORDER_SELECT (@reference_order varchar(50))
as begin
select Contain.id_item, Items.name, color_name, quantity from Contain
join Items on Items.id_item = Contain.id_item
where reference_order = @reference_order
END