create procedure PS_ORDER_SELECT_ARCHIVED
as begin
select * from Orders
where Archived = 1
end