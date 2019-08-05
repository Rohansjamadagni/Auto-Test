{
  "targets": [
    {
      "target_name": "Password",
      "sources": [ "password.cpp", "password_wrap.cxx" ],
      "cflags!": [ "-fno-exceptions" ],
      "cflags_cc!": [ "-fno-exceptions" ]
    }
  ]
} 
