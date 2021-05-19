from configuration import *
from os import system

# if the compilation line is not empty:
if compile:
    # compiling the program:
    system(compile)

# launching the program:
system(" ".join([execute]+arguments))


if False:
    print(f"[{name} Finished]")
