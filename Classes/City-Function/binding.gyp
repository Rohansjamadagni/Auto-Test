{
  "targets": [
    {
      "target_name": "City",
      "sources": [ "city.cpp", "city_wrap.cxx" ],
      "cflags!": [ "-fno-exceptions" ],
      "cflags_cc!": [ "-fno-exceptions" ]
    }
  ]
}