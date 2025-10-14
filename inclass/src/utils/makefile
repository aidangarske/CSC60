LIB = ../../lib/util.a
OBJS = inClassUtils.o

CFLAGS = -I ../../include

$(LIB): $(OBJS)
	$(AR) rv $(LIB) $?

inClassUtils.o: inClassUtils.c ../../include/inClass.h

