CREATE procedure PS_CITY_SELECT_POSTALCODE (@postal_code varchar(50))
as
begin
SELECT * from City where postal_code LIKE @postal_code + '%'
order by City.city_name
end