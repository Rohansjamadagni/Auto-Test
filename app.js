const lib=require('./TestModule')
//Date functions


console.log(lib.Date.Random())  //Returns Random Date
console.log(lib.Date.Random("12-06-2000",1))  //Returns a random date after given date
console.log(lib.Date.Random("12-06-2000","21-08-2019"))  //Returns a random date between two dates
console.log(lib.Date.Add("14-06-2019",25))  //Adds number of days to given date
console.log(lib.Date.Subtract("14-06-2019",10))  //Subtracts number of days from given date
console.log(lib.Date.equalTo("14-06-2019","14-06-2019"))  //compares the given dates to check if they are equal
lib.Date.Compare("14-06-2019","12-09-1999") //checks which date is before or after



//Email Functions



console.log(lib.Email.Random(true))  //returns a random true email id
lib.Email.Add("something.com")  //Adds given domain to list
lib.Email.Add("specific.com","specific")  //adds domain to list of specific domains
lib.Email.Add("generic.com","generic")  //adds domain to list of generic domains
console.log(lib.Email.Validate("generic@generic.com","generic"))  //Checks if given email is in given list
lib.Email.Show()  //shows all added domains
lib.Email.Show("specific")  //shows all added specific domains 
lib.Email.Show("generic")  //shows all added generic domains
lib.Email.Remove("generic.com","generic")  //removes given domain from list of generic domains
lib.Email.Remove("specific.com","specific")  //removes given domain from list of specific domains
lib.Email.Show()



//colour functions


console.log(lib.Colour.Random())  //generates random colour of random colour code
console.log(lib.Colour.Random("hex"))  //generates random colour of type hex
console.log(lib.Colour.Validate("FFFF"))  //validates given colour code 

//Address Functions


console.log(lib.Address.Random(10))   //generates random address
console.log(lib.Address.Validate("#53130 Jayanagar"))  //validates given address

//city functions


console.log(lib.City.Random(10))  //generates a random city of given length
lib.City.Add("bengaluru")  //adds given city to list of cities
lib.City.Show()  //shows all cities in given list
lib.City.Remove("Bengaluru")  //remove city from list of cities
lib.City.Show()
console.log(lib.City.Validate("Chennai"))  //validates given city name

//Company functions


console.log(lib.Company.Random(10,2,3,true))    //generates company name of max length,number of words ,max length per word and valid or invalid   
console.log(lib.Company.Validate("Google",1))  //validates number of words in company name
lib.Company.Add("Google")  //adds company to list of companies
console.log(lib.Company.Validate("Google","check"))  //validates if given company is in list of companies
lib.Company.Show()  //shows all companies in the list
lib.Company.Remove("Google")  //removes company from list of comapnies


//Currency Functions

console.log(lib.Currency.Random(true))  //generates random valid currency
console.log(lib.Currency.GetCurrencyName('USD'))  //returns currency



//Description Function

console.log(lib.Description.Random(500,15))// (Number of words,max length of each word)

//Designation Functions ** Validate NOT WORKING**

console.log(lib.Designation.Random(10,2,3,true))
lib.Designation.Add("CO")
lib.Designation.Show()
lib.Designation.Remove("CO")
lib.Designation.Show()
// lib.Designation.VectorInit()
// console.log(lib.Designation.Validate("CO"))


//Domain Functions

console.log(lib.Domain.Random(1)) //true or false for valid or invalid
console.log(lib.Domain.Validate("GoDaddy.com")) //Checks format as well as if it is present among list of domains added
lib.Domain.Add("GoDaddy.com","specific")  //adds domain to list of specific domains
console.log(lib.Domain.Validate("GoDaddy.com","specific"))  //validates domain from list of specfic domains
lib.Domain.Show("specific")  //shows all specific domains
lib.Domain.Remove("GoDaddy.com","specific")  //removes domain from list of specific domains
lib.Domain.Add("example-domain.xyz")  //adds domain to list of all domains
lib.Domain.Show()  //shows all domains
lib.Domain.Remove("example-domain.xyz")  //removes domain from list of all domains

//Gender Functions
console.log(lib.Gender.Validate("Male")) //Male female or any

//Mobile Functions


console.log(lib.Mobile.Random(true))  //generate valid mobile number
console.log(lib.Mobile.Random(false))  //generate invalid mobile number
console.log(lib.Mobile.Validate("+911234567890"))  //Validate mobile number
console.log(lib.Mobile.Validate("+911234567890","91")) //second parameter is the country code


//Name Functions
console.log(lib.Name.Random(8,1,8,true))//Random(Max length of Full name,Number of words/surnames , Min length of each word/surname ,false-invalid/true-valid)
console.log(lib.Name.Validate('Kiara Anne Frank'))  //Every word should be capitalized and seperated by a space
console.log(lib.Name.Validate('Kiara Anne Frank',3))  //validate given number of words 

//Pincode Functions 

console.log(lib.Pincode.Random(false))  //generate random invalid pincode
console.log(lib.Pincode.Random(true,"560"))  //Generate Random PIN code of given code
console.log(lib.Pincode.Validate("560063"))  //validate pincode with set of pincodes present in code.txt 
console.log(lib.Pincode.Validate("560069","560"))  //Validate if given PIN is of given Code type

// Telephone Functions //telephone needs to be fixed and revised

console.log(lib.Telephone.Random(true))  //generate random valid telephone number
console.log(lib.Telephone.Random(true,"91"))  //with code
console.log(lib.Telephone.Random(true,"91","69"))  //with code and area code
console.log(lib.Telephone.Validate("+916362764968"))  //validate telephone 
console.log(lib.Telephone.Validate("+91916276496899","91"))  //with given code
console.log(lib.Telephone.Validate("+9169600362764968","91","69"))  //with given code and area code

//Password Functions

console.log(lib.Password.Random(5,8)) //Generate Password of given min length and max length
console.log(lib.Password.Validate("Password123","capital"))  //Validates Password with Capital letters and special characters
console.log(lib.Password.Validate("Password@123","special"))  //Validates Password with Capital letters and special characters