create procedure PS_ITEM_CATEGORY_SELECT (@id_category int)
as begin
select * from Items where id_category = @id_category
end