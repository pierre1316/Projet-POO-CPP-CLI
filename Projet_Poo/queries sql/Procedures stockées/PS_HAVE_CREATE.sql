CREATE Procedure PS_HAVE_CREATE (@idPeople int, @idAddress int, @billing int, @delivery int)
as
begin
insert into Have (idPeople, idAddress, billing, delivery)
values (@idPeople, @idAddress, @billing, @delivery)
end