create procedure PS_ORDER_ARCHIVE (@reference_order varchar(50))
as begin
UPDATE Orders
set Archived = 1
where reference_order = @reference_order
end