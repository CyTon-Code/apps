import os

source_file = "bin/main.cpp"  # link to source code
app_link = "bin/echo"  # link where the compiled program should be
cmd = "clang -o {} {}".format(app_link, source_file)  # ready command
#  line

os.system(cmd)  # compiling the file
