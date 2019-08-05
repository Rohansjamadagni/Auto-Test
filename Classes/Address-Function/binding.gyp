{
  "targets": [
    {
      "target_name": "Address",
      "sources": [ "address.cpp", "address_wrap.cxx" ],
      "cflags!": [ "-fno-exceptions" ],
      "cflags_cc!": [ "-fno-exceptions" ]
    }
  ]
} 
