create procedure PS_HAVE_DELETE (@idAddress int, @idPeople int)
as
begin
delete from Have
where idAddress = @idAddress and idPeople = @idPeople
end