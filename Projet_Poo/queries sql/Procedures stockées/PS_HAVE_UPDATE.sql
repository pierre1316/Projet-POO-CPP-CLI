create procedure PS_HAVE_UPDATE (@idAddress int, @idPeople int, @billing int, @delivery int)
as
begin
update Have
set billing = @billing, delivery = @delivery
where idAddress = @idAddress and idPeople = @idPeople
end