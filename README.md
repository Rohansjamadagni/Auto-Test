# AUTO-TEST

# **DATE-FUNCTIONS**


## Random :

 - random() - Generates random date
 -  random("date",x) - Generates random
  date before given date if x=0 and after if x =1
   - random(int,int) -
   Generates random date between 2 given years


## Add, subtract and comparison:

 - add("date","number of days") - Adds days to date entered
 - subtract("date","number of days")- Subtracts days from date entered
 - equalTo("date1", "date2") - Checks if the dates are equal
 - comparer("date1" , "date2" ) - Checks which date is earlier
 
## Validation:
 - isValidDate("date") - Checks whether the date is valid or not
 
## Age Calculation:
 - GetAge("date") - Gives the age in years months and days

# **EMAIL-FUNCTIONS**

Compilation of Several Functions which deals with validation of given email.


# Functions

## Add Domain:

    Add(string)  //adds domain to list of domain
    Add(string,string)  //adds domain to list of either specific or generic and whole list
## Remove Domain:

    Remove(string)  //removes domain from list of domains
    Remove(string,string)  //removes domain from list of either specific or generic domains
## Show Domain:

    Show()  //Displays list of all domains
    Show_Specific()  //Displays list of all specific domains
    Show_Generic()  //Displays list of all generic domains

## Validate Email :

    Validate(string)  //validates email and checks among the list of domains
    Validate(string,string)  //validates email and checks among the list of given domains
Examples shown in examples folder.


# **COLOUR-FUNCTIONS**

Compilation of a few Functions which deals with validation and generation of colour codes.


# Functions

## Validate Colour :

    Validate(string)  //validates colour code of given type
## Generate Colour:

    Generate(string) //generates colour of given type ,or of random type if no string is given

# **ADDRESS-FUNCTIONS**

Compilation of a few Functions which deals with validation and generation of colour codes.


# Functions

## Validate Address :

    Validate(string)  //validates address
## Generate Address:

    Random(string,int) //generates address of given length

## instructions to build:

 - Ensure that the required packages are installed
 - run the following commands in the terminal

### Commands to build:

    npm install --save \
    nbind autogypi node-gyp
    
    make



> Examples of implementation in examples folder

## Instructions to build:

 - Ensure that swig and npm are installed 
 - Build using make file

### Commands to build:

    make all  //builds the .node file, copies it to the current directory and removes the build folder and wrap file
    make build  //builds the .node file in build/Release
    make clean  //removes the build folder and wrap file

