create procedure PS_PAYMENT_METHOD_UPDATE (@id_method int, @name_method varchar(50)) 
as begin
update Payment_Method
set name_method = @name_method
where id_method = @id_method
end