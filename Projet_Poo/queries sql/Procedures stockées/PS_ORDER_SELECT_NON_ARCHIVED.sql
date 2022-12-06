create procedure PS_ORDER_SELECT_NON_ARCHIVED
as begin
select * from Orders
where Archived = 0
end