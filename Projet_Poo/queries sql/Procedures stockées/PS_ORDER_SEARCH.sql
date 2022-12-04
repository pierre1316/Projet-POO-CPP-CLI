create procedure PS_ORDER_SEARCH (@reference_order varchar(50))
as begin
Select * from Orders
where reference_order like @reference_order + '%'
end