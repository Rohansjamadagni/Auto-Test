# **EMAIL-FUNCTIONS**

Compilation of Several Functions which deals with validation of given email.


# Functions

## Add Domain:

    Add_Domain(string)  //adds domain to list of domain
    Add_Domain(string,string)  //adds domain to list of either specific or generic and whole list
## Remove Domain:

    Remove_Domain(string)  //removes domain from list of domains
    Remove_Domain(string,string)  //removes domain from list of either specific or generic domains
## Show Domain:

    Show_All_Domains()  //Displays list of all domains
    Show_Specific_Domains()  //Displays list of all specific domains
    Show_Generic_Domains()  //Displays list of all generic domains

## Validate Email :

    Validate_Email(string)  //validates email and checks among the list of domains
    Validate_Email(string,string)  //validates email and checks among the list of given domains
Examples shown in examples folder.

## Instructions to build:

 - Ensure that swig and npm are installed 
 - Build using make file

### Commands to build:

    make all  //builds the .node file, copies it to the current directory and removes the build folder and wrap file
    make build  //builds the .node file in build/Release
    make clean  //removes the build folder and wrap file

