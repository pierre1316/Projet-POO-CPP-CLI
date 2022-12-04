CREATE PROCEDURE PS_SUPERIOR_UPDATE (@idPeople int, @idSuperior int)
as
begin

UPDATE Staff 
set idSuperior = @idSuperior
where idPeople = @idPeople
end