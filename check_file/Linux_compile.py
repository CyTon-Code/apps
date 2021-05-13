import os

source_file = "main.cpp"  # link to source code
app_link = "bin/check_file"  # link where the compiled program should be
cmd = "g++ -o {} {}".format(app_link, source_file)  # ready command
#  line

os.system(cmd)  # compiling the file
