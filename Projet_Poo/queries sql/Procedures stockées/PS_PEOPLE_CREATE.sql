CREATE PROCEDURE PS_PEOPLE_CREATE (@first_name varchar(50), @last_name varchar(50))
as 
begin
INSERT INTO People (first_name, last_name) values (@first_name, @last_name)
end