# Incomplete!!

NAME = "Ant C/C++ Standard Library"
EXAMPLES = examples/**

CC = gcc
ARC = ar

DOCSDIR = docs
OBJDIR = lib
SRCDIR = src
BINDIR = bin
INCDIR = include

LIBNAME = antc.a

SOURCES = 
OBJS =



pack: 
	ar rrs $(OBJ) $(BINDIR)/$(LIBNAME)
