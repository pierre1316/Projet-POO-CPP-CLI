CREATE TABLE People(
   idPeople INT IDENTITY (1,1),
   last_name VARCHAR(25) NOT NULL,
   first_name VARCHAR(25) NOT NULL,
   PRIMARY KEY(idPeople)
);

CREATE TABLE Customers(
   idPeople INT,
   birth_date DATE NOT NULL,
   PRIMARY KEY(idPeople),
   FOREIGN KEY(idPeople) REFERENCES People(idPeople)
);

CREATE TABLE Cities(
   idCity INT,
   name VARCHAR(50) NOT NULL,
   postal_code CHAR(5) NOT NULL,
   PRIMARY KEY(idCity)
);

CREATE TABLE Items(
   reference_item VARCHAR(50),
   name VARCHAR(50) NOT NULL,
   quantity_in_item INT NOT NULL,
   price_ht DECIMAL(20,2) NOT NULL,
   quantity_in_stock INT NOT NULL,
   max_in_stock INT NOT NULL,
   tva_rate DECIMAL(4,2) NOT NULL,
   rate_variability_price DECIMAL(3,2) NOT NULL,
   PRIMARY KEY(reference_item)
);

CREATE TABLE Orders(
   reference_order VARCHAR(50),
   delivery_date DATE NOT NULL,
   issue_date DATE NOT NULL,
   payment_date DATE NOT NULL,
   payment_method DATE NOT NULL,
   idPeople INT NOT NULL,
   PRIMARY KEY(reference_order),
   FOREIGN KEY(idPeople) REFERENCES Customers(idPeople)
);

CREATE TABLE Address(
   idAddress INT,
   last_name VARCHAR(25) NOT NULL,
   first_name VARCHAR(25) NOT NULL,
   text VARCHAR(225) NOT NULL,
   idCity INT NOT NULL,
   PRIMARY KEY(idAddress),
   FOREIGN KEY(idCity) REFERENCES Cities(idCity)
);

CREATE TABLE Staff(
   idPeople INT,
   hiring_date DATE NOT NULL,
   idSuperior INT NOT NULL,
   idAddress INT,
   passorword varchar(100) default 'mdp',
   PRIMARY KEY(idPeople),
   UNIQUE(idAddress),
   FOREIGN KEY(idPeople) REFERENCES People(idPeople),
   FOREIGN KEY(idSuperior) REFERENCES Staff(idPeople),
   FOREIGN KEY(idAddress) REFERENCES Address(idAddress)
);

CREATE TABLE Have(
   idAddress INT,
   idPeople INT NOT NULL,
   billing INT NOT NULL,
   delivery INT NOT NULL,
   PRIMARY KEY(idAddress),
   FOREIGN KEY(idAddress) REFERENCES Address(idAddress),
   FOREIGN KEY(idPeople) REFERENCES Customers(idPeople)
);

CREATE TABLE Contain(
   reference_item VARCHAR(50),
   reference_order VARCHAR(50),
   quantity INT NOT NULL,
   PRIMARY KEY(reference_item, reference_order),
   FOREIGN KEY(reference_item) REFERENCES Items(reference_item),
   FOREIGN KEY(reference_order) REFERENCES Orders(reference_order)
);
