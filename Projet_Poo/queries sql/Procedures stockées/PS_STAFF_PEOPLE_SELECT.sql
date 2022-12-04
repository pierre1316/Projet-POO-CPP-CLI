CREATE PROCEDURE PS_STAFF_PEOPLE_SELECT
as
begin

SELECT Staff.idPeople, last_name, first_name, idSuperior, hiring_date, idAddress, username, password, id_role FROM Staff
JOIN People ON People.idPeople = Staff.idPeople
end