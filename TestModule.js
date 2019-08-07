
const Variable1=require('./node_modules/Address.node')
const Variable2=require('./node_modules/City.node')
const Variable3=require('./node_modules/Colour.node')
const Variable4=require('./node_modules/Company.node')
const Variable5=require('./node_modules/Currency.node')
const Variable6=require('./node_modules/Date.node')
const Variable7=require('./node_modules/Description.node')
const Variable8=require('./node_modules/Domain.node')
const Variable9=require('./node_modules/Email.node')
const Variable10=require('./node_modules/Mobile.node')
const Variable11=require('./node_modules/Name.node')
const Variable12=require('./node_modules/Password.node')
const Variable13=require('./node_modules/Pincode.node')
const Variable14=require('./node_modules/Telephone.node')
const Variable15=require('./node_modules/Designation.node')
const Variable16=require('./node_modules/Gender.node')

var Address1=Variable1.Address;
var City1=Variable2.City;
var Colour1=Variable3.Colour;
var Company1=Variable4.Company;
var Currency1=Variable5.Currency;
var Date1=Variable6.Date;
var Description1=Variable7.Description;
var Domain1=Variable8.Domain;
var Email1=Variable9.Email;
var Mobile1=Variable10.Mobile;
var Name1=Variable11.Name;
var Password1=Variable12.Password;
var Pincode1=Variable13.Pincode;
var Telephone1=Variable14.Telephone;
var Designation1=Variable15.Designation;
var Gender1=Variable16.Gender;

var Address = new Address1();
var City = new City1();
var Colour = new Colour1();
var Company = new Company1();
var Currency = new Currency1();
var Date = new Date1();
var Description = new Description1();
var Domain = new Domain1();
var Email = new Email1();
var Mobile = new Mobile1();
var Name = new Name1();
var Password = new Password1();
var Pincode = new Pincode1();
var Telephone = new Telephone1();
var Designation = new Designation1();
var Gender = new Gender1();

module.exports = {
    Address,City,Colour,Company,Date,Currency,Description,Domain,Email,Mobile,Name,Password,Pincode,Telephone,Gender,Designation
}