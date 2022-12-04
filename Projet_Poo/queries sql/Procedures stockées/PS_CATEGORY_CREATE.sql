CREATE PROCEDURE PS_CATEGORY_CREATE (@category_name varchar(50), @tva_rate float)
as
begin
INSERT into Category (category_name, tva_rate)
values (@category_name, @tva_rate)
end