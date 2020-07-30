# CloseTray

This extremely simple project is a command to close the CD/DVD/BD tray programmatically instead of closing it by hand or pushing the button.

I did this because in the old days of MS-DOS there used to be such program. Of course IT WILL NOT work on most laptops or any PC that doesn't have such mechanism.

It can be compiled in Codeblocks and adding "winmm" to the linker settings in project build options.

In Digital Mars, it can be compiled in 2 stages:
1- Compile main.c using sc.
2- Use link to link it to "winmm.lib" when asked about the library.
