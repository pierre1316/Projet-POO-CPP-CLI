create procedure PS_HAVE_ADDRESS_SELECT (@idAddress int)
as
begin
SELECT * from Have
where idAddress = @idAddress
end