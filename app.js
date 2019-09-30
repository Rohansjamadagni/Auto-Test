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



// console.log(lib.Email.Random(1))
lib.Email.Add("something.com")
lib.Email.Add("specific.com","specific")
lib.Email.Add("generic.com","generic")
// lib.Email.Show()
lib.Email.Show("specific")
lib.Email.Show("generic")
lib.Email.Remove("something.com")
lib.Email.Remove("specifc.com","specific")
lib.Email.Show()
// console.log(lib.Email.Validate("generic@generic.com","generic"))
// console.log(lib.Email.Validate("generic@generic.com"))



//colour functions


console.log(lib.Colour.Random())
console.log(lib.Colour.Random("hex"))
console.log(lib.Colour.Validate("FFFF"))

//Address Functions


console.log(lib.Address.Random(10))
console.log(lib.Address.Validate("53/130,Jayanagar"))

//city functions


console.log(lib.City.Random(10))
lib.City.Add("bengaluru")
lib.City.Show()
console.log(lib.City.Remove("Bengaluru"))
lib.City.Show()
console.log(lib.City.Validate("Chennai"))

//Company functions


console.log(lib.Company.Random(10,2,3,true))
console.log(lib.Company.Valiate(lib.Company.Random(10,2,3,true)))
console.log(lib.Company.Valiate("Google",6))
console.log(lib.Company.Add("Google"))
console.log(lib.Company.Valiate("Google","check"))
console.log(lib.Company.Show())
console.log(lib.Company.Remove("Google"))


//Currency Functions


console.log(lib.Currency.Random(true))
console.log(lib.Currency.GetCurrency('USD'))



//Description Function

console.log(lib.Description.Random(500.15))

//Designation Functions

console.log(lib.Designation.Random(10,2,3,true))
console.log(lib.Designation.Valiate(lib.Designation.Random(10,2,3,true)))
console.log(lib.Designation.Add("CO"))
console.log(lib.Designation.Show())
console.log(lib.Designation.Remove("CO"))

//Domain Functions

console.log(lib.Domain.Random(1))
console.log(lib.Domain.Validate("GoDaddy"))
console.log(lib.Domain.Add("GoDaddy","specific"))
console.log(lib.Domain.Validate("GoDaddy","Specific"))
lib.Domain.Show("specific")
lib.Domain.Remove("GoDaddy","specific")
lib.Domain.Add("example-domain")
lib.Domain.Show()
lib.Domain.Remove("example-domain")

//Gender Functions
console.log(lib.Gender.Validate("Male"))

//Mobile Functions


console.log(lib.Mobile.Random(true))
console.log(lib.Mobile.Random(true))
console.log(lib.Mobile.Validate(lib.Mobile.Random(true)))
console.log(lib.Mobile.Validate(lib.Mobile.Random(true),"91"))


//Name Functions
console.log(lib.Name.Random(8,1,8,true))

// console.log(lib.Password.Random(8,8))
// console.log(lib.Pincode.Random(true))
// console.log(lib.Telephone.Random(true))
// console.log(lib.Description.Random(500,10))
// console.log(lib.Designation.Random(10,1,10,true))