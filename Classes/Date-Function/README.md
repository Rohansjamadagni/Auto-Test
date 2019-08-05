# Date Functions


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



> Examples of implementation in examples folder

## Instructions to build:

 - Ensure that swig and npm are installed 
 - Build using make file

### Commands to build:

    make all  //builds the .node file, copies it to the current directory and removes the build folder and wrap file
    make build  //builds the .node file in build/Release
    make clean  //removes the build folder and wrap file
