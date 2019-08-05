SW = swig
NG = node-gyp
dcpp = company.cpp
dwcxx= company_wrap.cxx
INTFILE = ./company.i
SFLAGS = -c++ -javascript -node
NFLAGS = configure build
INC = -I/usr/lib/node_modules/node-gyp -I/usr/include/node -I/usr/share/swig/4.0.0
all: build mv clean

build : $(dcpp) $(dwcxx)
	$(NG) $(NFLAGS) $(INC)

mv :
	mv build/Release/Company.node ./

$(dwcxx) : $(dcpp)
	$(SW) $(SFLAGS) $(INC) $(INTFILE)

clean : 
	rm -rf $(dwcxx) build 
