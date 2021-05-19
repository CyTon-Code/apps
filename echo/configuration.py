# the name of the command we type in ANT:
name = "echo"

# link to the current file:
link = "main.cpp"

# path to executable file:
path = "bin/"

# if empty is not executed:
compile = f"clang -o {path}{name} {link}"

# the string that ANT sends in bach to execute:
execute = f"./{path}{name}"

# arguments that can be passed by default:
arguments = ["Hello", "World!"]
