create procedure PS_COLOR_ITEM_SELECT (@id_item int)
as
begin
select * from Color where id_item = @id_item
end