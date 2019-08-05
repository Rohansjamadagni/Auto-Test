{
  "targets": [
    {
      "target_name": "Date",
      "sources": [ "date.cpp", "date_wrap.cxx" ],
      "cflags!": [ "-fno-exceptions" ],
      "cflags_cc!": [ "-fno-exceptions" ]
    }
  ]
}