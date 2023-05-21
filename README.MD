# *Ant C/C++ Standard Library*


## Disclamer

### **This is the C/C++ Standard Library used by AntOS!**

### **But it *can* be used for other kernels too(but it will take you some time to set it up correctly)!**

### **Currently this Standard Library is really unstable!!**

## Installtion
**Here we will look at how to Install Ant C/C++ Standard Library**

We will use *git* to clone the official *repo.* of the AntOS Standard Library.

Now you will need to open a *terminal* and type this command: `git clone http://github.com/ant-os/antc.git`

Now you will have a folder called `antc` in your working *directory*, that you can copy to somewhere you can use it(not in your project directory!).


## How do use this library?

**To use this library you will need to edit your build Process(we will use make)!**

Todo that when you are using make you will need to edit the file called `Makefile`!

You need to add some *Flags* to be passed to *gcc*(your c/c++ compiler).

The *Flags* you need to add are `-isystem {your-path-to-antc}/include` and `-include "ant/stdbase.h"`

You also need link agains the `antc.a` *library file*, you can do that by adding `-L{your-path-to-antc}/bin -l:antc.a` to the linker flags!
 