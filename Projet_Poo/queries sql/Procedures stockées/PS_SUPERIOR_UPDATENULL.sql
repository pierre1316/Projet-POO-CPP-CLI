CREATE PROCEDURE PS_SUPERIOR_UPDATENULL (@idPeople int)
as
begin

UPDATE Staff 
set idSuperior = NULL
where idPeople = @idPeople
end