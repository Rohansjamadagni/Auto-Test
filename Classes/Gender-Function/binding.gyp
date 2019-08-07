{
  "targets": [
    {
      "target_name": "Gender",
      "sources": [ "gender.cpp", "gender_wrap.cxx" ],
      "cflags!": [ "-fno-exceptions" ],
      "cflags_cc!": [ "-fno-exceptions" ]
    }
  ]
}