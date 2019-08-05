{
  "targets": [
    {
      "target_name": "Domain",
      "sources": [ "domain.cpp", "domain_wrap.cxx" ],
      "cflags!": [ "-fno-exceptions" ],
      "cflags_cc!": [ "-fno-exceptions" ]
    }
  ]
} 
