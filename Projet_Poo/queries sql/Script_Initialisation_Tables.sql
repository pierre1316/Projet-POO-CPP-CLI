DROP TABLE IF EXISTS Staff
DROP Table IF EXISTS Role
DROP TABLE IF EXISTS Have
DROP TABLE IF EXISTS People
DROP TABLE IF EXISTS Customers
DROP TABLE IF EXISTS Contain
DROP Table IF EXISTS Orders
DROP TABLE IF EXISTS Color
DROP TABLE IF EXISTS Items
DROP TABLE IF EXISTS Category
DROP TABLE IF EXISTS Address
DROP TABLE IF EXISTS City


-- Table City
CREATE TABLE City (
    id_city     INT           NOT NULL,
    postal_code VARCHAR (50)  NOT NULL,
    city_name   VARCHAR (100) NOT NULL,
    PRIMARY KEY CLUSTERED (id_city ASC)
);


-- Table Address
CREATE TABLE Address (
    idAddress  INT           IDENTITY (1, 1) NOT NULL,
    last_name  VARCHAR (25)  NULL,
    first_name VARCHAR (25)  NULL,
    text       VARCHAR (225) NULL,
    id_city    INT           NOT NULL,
    PRIMARY KEY CLUSTERED (idAddress ASC),
    FOREIGN KEY (id_city) REFERENCES City (id_city)
);

-- Table Category
CREATE TABLE Category (
    id_category   INT          IDENTITY (1, 1) NOT NULL,
    category_name VARCHAR (50) NOT NULL,
    tva_rate      FLOAT (53)   NOT NULL,
    PRIMARY KEY CLUSTERED (id_category ASC)
);

-- Table Items
CREATE TABLE Items (
    id_item             INT          IDENTITY (1, 1) NOT NULL,
    name                VARCHAR (50) NOT NULL,
    price_ht            FLOAT (53)   NOT NULL,
    max_in_stock        INT          NOT NULL,
    minimal_to_order    INT          NULL,
    price_ht_over_level FLOAT (53)   NULL,
    level_amount        INT          NULL,
    id_category         INT          NULL,
    PRIMARY KEY CLUSTERED (id_item ASC),
    FOREIGN KEY (id_category) REFERENCES Category (id_category)
);

-- Table Color
CREATE TABLE Color (
    id_item            INT          NOT NULL,
    name               VARCHAR (50) NOT NULL,
    price_multiplicator FLOAT (53)   NULL,
    quantity_in_stock   INT          NULL,
    color_r            INT          NULL,
    color_g             INT          NULL,
    color_b             INT          NULL,
    PRIMARY KEY CLUSTERED (name ASC, id_item ASC),
    FOREIGN KEY (id_item) REFERENCES Items (id_item) ON DELETE CASCADE
);






-- Table People
CREATE TABLE People (
    idPeople   INT          IDENTITY (1, 1) NOT NULL,
    last_name  VARCHAR (25) NOT NULL,
    first_name VARCHAR (25) NOT NULL,
    PRIMARY KEY CLUSTERED (idPeople ASC)
);


-- Table Customers
CREATE TABLE Customers (
    idPeople   INT  NOT NULL,
    birth_date DATE NOT NULL,
    PRIMARY KEY CLUSTERED (idPeople ASC),
    UNIQUE NONCLUSTERED (idPeople ASC),
    FOREIGN KEY (idPeople) REFERENCES People (idPeople)
);

-- Table Payment_Method
CREATE TABLE Payment_Method (
    id_method int IDENTITY (1,1) not null,
    name_method varchar(50) not null,
    PRIMARY KEY (id_method),
)


-- Table Orders
CREATE TABLE Orders (
    reference_order VARCHAR (50) NOT NULL,
    delivery_date   DATE     NOT NULL,
    issue_date      DATE     NOT NULL,
    payment_date    DATE     NOT NULL,
    id_payment_method INT          NOT NULL,
    idPeople          INT          NOT NULL,
    idBill            INT          NOT NULL,
    idDeli            INT          NOT NULL,
    PRIMARY KEY CLUSTERED (reference_order ASC),
    FOREIGN KEY (idBill) REFERENCES Address (idAddress),
    FOREIGN KEY (idDeli) REFERENCES Address (idAddress),
    FOREIGN KEY (idPeople) REFERENCES Customers (idPeople),
    FOREIGN KEY (id_payment_method) REFERENCES Payment_Method (id_method)
);

-- Table Have
CREATE TABLE Have (
    idAddress INT NOT NULL,
    idPeople  INT NOT NULL,
    billing   INT NOT NULL,
    delivery  INT NOT NULL,
    PRIMARY KEY CLUSTERED (idAddress ASC),
    FOREIGN KEY (idAddress) REFERENCES Address (idAddress),
    FOREIGN KEY (idPeople) REFERENCES Customers (idPeople)
);

-- Table Contains
CREATE TABLE Contain (
    reference_order VARCHAR (50) NOT NULL,
    id_item         INT          NOT NULL,
    color_name      VARCHAR (50) NOT NULL,
    quantity        INT          NOT NULL,
    PRIMARY KEY CLUSTERED (reference_order ASC, id_item ASC, color_name ASC),
    FOREIGN KEY (reference_order) REFERENCES Orders (reference_order) ON DELETE CASCADE,
    FOREIGN KEY (color_name, id_item) REFERENCES Color (name, id_item) ON DELETE CASCADE
);




-- Table Role
CREATE TABLE Role (
    id_role    INT          NOT NULL,
    role_name  VARCHAR (50) NOT NULL,
    role_level INT          NOT NULL,
    PRIMARY KEY CLUSTERED (id_role ASC)
);

-- Table Staff
CREATE TABLE Staff (
    idPeople    INT           NOT NULL,
    hiring_date DATE          NOT NULL,
    idSuperior  INT           NULL,
    idAddress   INT           NULL,
    username    VARCHAR (50)  NULL,
    password    VARCHAR (100) NULL,
    id_role     INT           NULL,
    PRIMARY KEY CLUSTERED (idPeople ASC),
    UNIQUE NONCLUSTERED (idPeople ASC),
    FOREIGN KEY (idAddress) REFERENCES Address (idAddress),
    FOREIGN KEY (idPeople) REFERENCES People (idPeople),
    FOREIGN KEY (idSuperior) REFERENCES Staff (idPeople),
    FOREIGN KEY (id_role) REFERENCES Role (id_role)
);