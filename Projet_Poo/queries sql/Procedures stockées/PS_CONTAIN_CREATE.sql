create procedure PS_CONTAIN_CREATE (@reference_order varchar(50), @id_item int, @color_name varchar(50), @quantity int)
as begin
insert into Contain 
values (@reference_order, @id_item, @color_name, @quantity)
end