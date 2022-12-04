
CREATE procedure PS_CATEGORY_UPDATE (@idcategory int, @name varchar(50), @tva float)
as
begin
update Category
set category_name = @name, tva_rate = @tva
where id_category = @idcategory
end