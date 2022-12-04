CREATE PROCEDURE PS_PEOPLE_UPDATE (@idPeople int, @last_name varchar(50), @first_name varchar(50))
as
begin
UPDATE People 
set last_name = @last_name, first_name = @first_name
where idPeople = @idPeople
end