const lib=require('./TestModule')
// //Date functions


console.log(lib.Date.Random())
console.log(lib.Date.Random("12-06-2000",1))
console.log(lib.Date.Random("12-06-2000","21-08-2019"))
console.log(lib.Date.Add("14-06-2019",25))
console.log(lib.Date.Subtract("14-06-2019",10))
console.log(lib.Date.equalTo("14-06-2019","14-06-2019"))
console.log(lib.Date.Compare("14-06-2019","12-09-1999"))



//Email Functions



// console.log(lib.Email.Random(true))
lib.Email.Add("something.com")
lib.Email.Add("specific.com","specific")
lib.Email.Add("generic.com","generic")
// lib.Email.Show()
lib.Email.Show("specific")
lib.Email.Show("generic")
//lib.Email.Remove("generic.com")
//lib.Email.Remove("specifc.com","specific")
lib.Email.Show()
// console.log(lib.Email.Validate("generic@generic.com","generic"))
// console.log(lib.Email.Validate("generic@generic.com"))



//colour functions


console.log(lib.Colour.Random())
console.log(lib.Colour.Random("hex"))
console.log(lib.Colour.Validate("FFFF"))

//Address Functions


console.log(lib.Address.Random(10))
console.log(lib.Address.Validate("#53130 Jayanagar"))

//city functions


console.log(lib.City.Random(10))
lib.City.Add("bengaluru")
lib.City.Show()
lib.City.Remove("Bengaluru")
lib.City.Show()
console.log(lib.City.Validate("Chennai"))

//Company functions


console.log(lib.Company.Random(10,2,3,true))//Add things here
console.log(lib.Company.Validate(lib.Company.Random(10,2,3,true))) 
console.log(lib.Company.Validate("Google",1))
lib.Company.Add("Google")
console.log(lib.Company.Validate("Google","check"))
lib.Company.Show()
lib.Company.Remove("Google")


//Currency Functions

console.log(lib.Currency.Random(true))
console.log(lib.Currency.GetCurrencyName('USD'))



//Description Function

console.log(lib.Description.Random(500,15))// (Number of words,max length of each word)

//Designation Functions **NOT WORKING**

console.log(lib.Designation.Random(10,2,3,true))
//Sconsole.log(lib.Designation.Validate(toString(lib.Designation.Random(10,2,3,true))))
lib.Designation.Add("CO")
lib.Designation.Show()
lib.Designation.Remove("CO")

//Domain Functions

console.log(lib.Domain.Random(1)) //true or false for valid or invalid
console.log(lib.Domain.Validate("GoDaddy.com")) //Checks format as well as if it is present among list of domains added
lib.Domain.Add("GoDaddy.com","specific") 
console.log(lib.Domain.Validate("GoDaddy.com","specific"))
lib.Domain.Show("specific")
lib.Domain.Remove("GoDaddy.com","specific")
lib.Domain.Add("example-domain.xyz")
lib.Domain.Show()
lib.Domain.Remove("example-domain.xyz")

//Gender Functions
console.log(lib.Gender.Validate("Male")) //Male female or any

//Mobile Functions


console.log(lib.Mobile.Random(true))//valid
console.log(lib.Mobile.Random(false))//invalid 
console.log(lib.Mobile.Validate("+911234567890"))
console.log(lib.Mobile.Validate("+911234567890","91"))//second parameter is the country code


//Name Functions
console.log(lib.Name.Random(8,1,8,true))//Random(Max length of Full name,Number of words/surnames , Min length of each word/surname ,false-invalid/true-valid)
console.log(lib.Name.Validate('Kiara Anne Frank'))  //Every word should be capitalized and seperated by a space
console.log(lib.Name.Validate(lib.Name.Random(8,2,8,true),2)) 
console.log(lib.Password.Random(8,8))
// console.log(lib.Pincode.Random(true))
// console.log(lib.Telephone.Random(true))