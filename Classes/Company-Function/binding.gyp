{
  "targets": [
    {
      "target_name": "Company",
      "sources": [ "company.cpp", "company_wrap.cxx" ],
      "cflags!": [ "-fno-exceptions" ],
      "cflags_cc!": [ "-fno-exceptions" ]
    }
  ]
}