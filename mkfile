</$objtype/mkfile

LIB=sout.a$O

OFILES=\
	sout_printout.$O\
	sout_text.$O\

HFILES=\
	sout_printout.h\
	sout_text.h\

</sys/src/cmd/mklib

$O.testsout:	testsout.$O $LIB
	$LD -o $target $prereq
