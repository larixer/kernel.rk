## LG Hom Bot Linux Kernel

This project contains LG Hom Bot Linux Kernel in the form of changes from mainline Linux Kernel 2.6.33.2.7-rt30.

Files that are available only in LG Hom Bot Linux Kernel, but not in mainline contained in the `files` folder. 
This is done for purposes of easier Hom Bot-specific driver code investigation.
 
`patches` folder contains `nexell.patch` - the relevant changes to Makefiles, configuration files and 
kernel code. 

`netfilter.patch` - contains changes to IP netfilter. These changes seems not very relevant. Looks like the code for 
netfilter was borrowed from other version of mainline Linux Kernel to prevent some issues with Hom Bot hardware.  


`make_kernel.sh` is a script to produce LG Hom Bot Linux Kernel by downloading mainline Linux Kernel and applying all
the changes contained in this project. Ths script will produce fully-functionally identical Linux Kernel
in the folder `kernel-2.6.33`

After using the script, this command should produce no textual difference
``` shell
diff -Nur -x *.doc -x *.DOC -x *.txt -x *.dts kernel-2.6.33 hom_bot_opensource_dir/GPL/kernel-2.6.33
```
We are ignoring changes in character case of several documentation file names and the fact that Hom Bot kernel contains
broken symlink for arch/microblaze/boot/dts/system.dts 
 