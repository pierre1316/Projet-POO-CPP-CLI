create procedure PS_PAYMENT_METHOD_DELETE (@id_method int) 
as begin
delete from Payment_Method
where id_method = @id_method
end