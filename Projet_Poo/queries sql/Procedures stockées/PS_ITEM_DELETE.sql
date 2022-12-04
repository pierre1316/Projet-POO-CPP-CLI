create procedure PS_ITEM_DELETE (@id_item int)
as begin
delete from Items
where id_item = @id_item
end