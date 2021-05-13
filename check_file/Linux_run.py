import os

app_link = "bin/check_file"  # application link
cmd = "./{}".format(app_link)  # command in the terminal
file_link = ["bin/text"]  # your test arguments - address file
command = " ".join([cmd] + file_link)  # ready command line



result = os.system(command) // 256  # run the program


if result:
    print("finish: true")
else:
    print("finish: false")

