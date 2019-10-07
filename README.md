# Note
    All The classes have been compiled with nodejs v10.16(LTS release) which means it may or may not work with later versions and                                               may have to be recomplied with the required version of nodejs,node-gyp and swig installed.SWIG does not support Nodejs v12. 

# **DATE-FUNCTIONS**


## Functions :

    Random() //Generates Random date
    Random(string,int)  //Generate Random date before or after given date
    Random(string,string)  //Generate Random date between given dates

## Add, subtract and comparison:

    Add(string,int)  //Add number of days to date entered
    Subtract(string,int)  //Subtract given number of days from date entered
    EqualTo(string,string)  //Check of given two dates are equal
    Compare(string,string)  //Check which date is earlier

 
## Validate:

    Validate(string)  //Validates entered date

## Age Calculation:

    Age(string)  //Gives age in years months and days 

# **EMAIL-FUNCTIONS**

Compilation of Several Functions which deals with validation of given email.


# Functions
## Generate Random Email:

    Random(int)  //Generate random email of given length

## Add Domain:

    Add(string)  //adds domain to list of domain
    Add(string,string)  //adds domain to list of either specific or generic and whole list
## Remove Domain:

    Remove(string)  //removes domain from list of domains
    Remove(string,string)  //removes domain from list of either specific or generic domains
## Show Domain:

    Show()  //Displays list of all domains
    Show(string)  //Displays list of all specific or generic domains

## Validate Email :

    Validate(string)  //validates email and checks among the list of domains
    Validate(string,string)  //validates email and checks among the list of given domains


# **COLOUR-FUNCTIONS**

Compilation of a few Functions which deals with validation and generation of colour codes.


# Functions

## Validate Colour :

    Validate(string)  //validates colour code of given type
## Generate Colour:

    Generate(string) //generates colour of given type ,or of random type if no string is given

# **ADDRESS-FUNCTIONS**

Compilation of a few Functions which deals with validation and generation of Address.


# Functions

## Validate Address :

    Validate(string)  //validates address
## Generate Address:

    Random(string,int) //generates address of given length

# **CITY-FUNCTIONS**

Compilation of a few Functions which deals with validation and generation of Cities.


# Functions

## Validate City :

    Validate(string)  //validates city
## Generate Random City:

    Random(string,int) //generates City of given length
## Remove City:

    Remove(string) //Remove city from list

## Add City:

    Add(string)  //Add city to list

## Show City:

    Show(string)  //Show list of cities
# **COMPANY-FUNCTIONS**

Compilation of a few Functions which deals with validation and generation of company names.


# Functions

## Validate Company :

    Validate(string)  //validates company
    Validate(string,int) //Validates company of given length
    Validate(string,string)  //Validates in given list

## Generate Random Company:

    Random(string,int) //generates Company of given length
## Remove Company:

    Remove(string) //Remove company from list

## Add Company:

    Add(string)  //Add company to list

## Show Company:

    Show(string)  //Show list of companies
# **CURRENCY-FUNCTIONS**

Compilation of a few Functions which deals with validation and generation of currencies.


# Functions

## Generate Random Currency:

    Random(bool) //generates Currency 
## Get Currency:

    GetCurrencyName(string)
# **DESCRIPTION-FUNCTIONS**

Function that deals with generation of description.


# Functions

## Generate Random Description:

    Random(unsigned long long,int) //generates description of given length

# **DESIGNATION-FUNCTIONS**

Compilation of a few Functions which deals with validation and generation of Designations.


# Functions
## Validate Designation:

    Validate(string)  //validates Designation

## Generate Random Designation:

    Random(int,int,int,bool) //generates Designation of given length
## Remove Designation:

    Remove(string) //Remove Desigantion from list

## Add Designation:

    Add(string)  //Add Designation to list

## Show Designation:

    Show(string)  //Show list of Designations

# **DOMAIN-FUNCTIONS**

Compilation of Several Functions which deals with validation of Domains.


# Functions
## Generate Random Domain:

    Random(int)  //Generate Random Domain of given length

## Add Domain:

    Add(string)  //adds domain to list of domain
    Add(string,string)  //adds domain to list of either specific or generic and whole list
## Remove Domain:

    Remove(string)  //removes domain from list of domains
    Remove(string,string)  //removes domain from list of either specific or generic domains
## Show Domain:

    Show()  //Displays list of all domains
    Show(string)  //Displays list of all specific or generic domains

## Validate Domain:

    Validate(string)  //validates domain and checks among the list of domains
    Validate(string,string)  //validates domain and checks among the list of given domains

# **GENDER-FUNCTION**

Compilation of Several Functions which deals with validation of Domains.


# Functions
## Validate Gender:

    Validate(string)  //Validate Gender

# **MOBILE-FUNCTIONS**

Compilation of Several Functions which deals with validation of Domains.


# Functions
## Generate Random Mobile Number:

    Random(bool)  //Generate Random Mobile Number
    Random(bool,string)  //Generate Random Mobile Number of given code
## Validate Mobile Number:

    Validate(string)  //Validates mobile number
    Validate(string,string)  //Validates mobile number of given code
# **NAME-FUNCTIONS**

Compilation of Several Functions which deals with validation of Names.


# Functions
## Generate Random Name:

    Random(int,int,int,bool)  //Generate Random name
## Validate name:

    Validate(string)  //Validates name
    Validate(string,int)  //Validates name of given word count

# **TELEPHONE-FUNCTIONS**

Compilation of Several Functions which deals with validation of Telephone.


# Functions
## Generate Random Telephone Number:

    Random(bool)  //Generate Random telephone
    Random(bool,string)  //Generate Random telephone of given code
    Random(bool,string,string)  //Generates Telephone of given code and area code 
## Validate Telephone Number:

    Validate(string)  //Validates telephone
    Validate(string,string)  //Validates telephone of given code
    Validate(string,string,string)  //Validates telephone of given code and area code
# **PINCODE-FUNCTIONS**

Compilation of Several Functions which deals with validation of PIN codes.


# Functions
## Generate Random PIN code:

    Random(bool)  //Generate Random PIN Code
    Random(bool,string)  //Generate Random PIN code
## Validate PINCODE:

    Validate(string)  //Validates PINCODE
    Validate(string,string)  //Validates PINCODE
# PASSWORD-FUNCTIONS
Function that deals with generation and validation of functions.

# Functions:
## Generate Random Password:

    Random(unsigned long,unsigned long) //Generate Password of given min length and max length
## Validate Password:

    Validate(string,string)  //Validates Password with Capital letters and special characters

    

> Examples of implementation in examples folder

## Instructions to build:

 - Ensure that swig and npm are installed 
 - Build using make file

### Commands to build:

    make all  //builds the .node file, copies it to the current directory and removes the build folder and wrap file
    make build  //builds the .node file in build/Release
    make clean  //removes the build folder and wrap file

