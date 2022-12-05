create procedure PS_CATEGORY_DELETE (@idcategory int)
as
begin
delete from Category
where id_category = @idcategory
end