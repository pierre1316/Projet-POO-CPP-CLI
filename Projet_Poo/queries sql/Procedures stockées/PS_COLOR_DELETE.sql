create procedure PS_COLOR_DELETE (@id_item int, @name varchar(50))
as
begin
DELETe from Color
where id_item = @id_item and name = @name
end