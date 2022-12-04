CREATE PROCEDURE PS_ADDRESS_DELETE (@idAddress int)
as
begin
delete from Address
where idAddress = @idAddress
end