create procedure PS_ORDER_DELETE (@reference_order varchar(50))
as begin
delete from Orders where reference_order = @reference_order
end