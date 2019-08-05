const Variable=require('./Date.node')
var Date=Variable.Date;
var date1 = new Date()
date1.add("12-07-1999","12")
date1.subtract("12-07-1999","12")
date1.equalTo("12-07-1999","12-07-1999")
date1.comparer("12-07-1999","12-07-2019")
date1.isValidDate("12-07-1999")
date1.GetAge("12-07-1999")