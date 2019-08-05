{
  "targets": [
    {
      "target_name": "Email",
      "sources": [ "email.cpp", "email_wrap.cxx" ],
      "cflags!": [ "-fno-exceptions" ],
      "cflags_cc!": [ "-fno-exceptions" ]
    }
  ]
}