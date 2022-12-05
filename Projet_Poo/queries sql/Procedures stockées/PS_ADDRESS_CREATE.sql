CREATE PROCEDURE PS_ADDRESS_CREATE (@last_name varchar(100), @first_name varchar(100), @text varchar(225), @id_city int)
as
begin
INSERT INTO Address (last_name, first_name, text, id_city) values (@last_name, @first_name, @text, @id_city)
end