#
# Created by gmakemake (Ubuntu Sep  7 2011) on Mon Jan  7 18:26:48 2013
#

#
# Definitions
#

.SUFFIXES:
.SUFFIXES:	.a .o .c .C .cpp .s .S
.c.o:
		$(COMPILE.c) $<
.C.o:
		$(COMPILE.cc) $<
.cpp.o:
		$(COMPILE.cc) $<
.S.s:
		$(CPP) -o $*.s $<
.s.o:
		$(COMPILE.cc) $<
.c.a:
		$(COMPILE.c) -o $% $<
		$(AR) $(ARFLAGS) $@ $%
		$(RM) $%
.C.a:
		$(COMPILE.cc) -o $% $<
		$(AR) $(ARFLAGS) $@ $%
		$(RM) $%
.cpp.a:
		$(COMPILE.cc) -o $% $<
		$(AR) $(ARFLAGS) $@ $%
		$(RM) $%

CC =		gcc
CXX =		g++

RM = rm -f
AR = ar
LINK.c = $(CC) $(CFLAGS) $(CPPFLAGS) $(LDFLAGS)
LINK.cc = $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(LDFLAGS)
COMPILE.c = $(CC) $(CFLAGS) $(CPPFLAGS) -c
COMPILE.cc = $(CXX) $(CXXFLAGS) $(CPPFLAGS) -c
CPP = $(CPP) $(CPPFLAGS)
########## Default flags (redefine these with a header.mak file if desired)
CXXFLAGS =	-ggdb
CFLAGS =	-ggdb
CLIBFLAGS =	-lm
CCLIBFLAGS =	
########## End of default flags


CPP_FILES =	ClockConfig.cpp ClockPuzzle.cpp Configuration.cpp Puzzle.cpp clock.cpp
C_FILES =	
PS_FILES =	
S_FILES =	
H_FILES =	ClockConfig.h ClockPuzzle.h Configuration.h Puzzle.h
SOURCEFILES =	$(H_FILES) $(CPP_FILES) $(C_FILES) $(S_FILES)
.PRECIOUS:	$(SOURCEFILES)
OBJFILES =	ClockConfig.o ClockPuzzle.o Configuration.o Puzzle.o 

#
# Main targets
#

all:	clock 

clock:	clock.o $(OBJFILES)
	$(CXX) $(CXXFLAGS) -o clock clock.o $(OBJFILES) $(CCLIBFLAGS)

#
# Dependencies
#

ClockConfig.o:	ClockConfig.h Configuration.h
ClockPuzzle.o:	ClockConfig.h ClockPuzzle.h Configuration.h Puzzle.h
Configuration.o:	Configuration.h
Puzzle.o:	Configuration.h Puzzle.h
clock.o:	ClockConfig.h ClockPuzzle.h Configuration.h Puzzle.h

#
# Housekeeping
#

Archive:	archive.tgz

archive.tgz:	$(SOURCEFILES) Makefile
	tar cf - $(SOURCEFILES) Makefile | gzip > archive.tgz

clean:
	-/bin/rm $(OBJFILES) clock.o core 2> /dev/null

realclean:        clean
	-/bin/rm -rf clock 
