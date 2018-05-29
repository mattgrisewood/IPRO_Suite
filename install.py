import os
import time


# Remind the user to copy the appropriate files
os.system("clear")
message = """REMINDER: Before running the experiment, please copy all force
field inputs to "input_files" and all initial structures to "structures"."""
print message

# Get the actual install folder
path = os.getcwd() + "/"
# List all of the available programs
list = os.listdir("programs")
# Change the InstallFolder to the actual folder for each program
for i in list:
    text = ""
    # Read in the current program
    with open("programs/" + i) as file:
        for line in file:
            # Edit the InstallFolder line
            if line.startswith("InstallFolder"):
                text += 'InstallFolder = "' + path + '"\n'
            # Otherwise, just copy the line
            else:
                text += line
    # Write the new program            
    with open("programs/" + i,"w") as file:
        file.write(text) 

# Similarly edit the STANDARDS.py file        
text = ""        
with open("modules/STANDARDS.py") as file:
    for line in file:
        # Edit the InstallFolder line
        if line.startswith("InstallFolder"):
            text += 'InstallFolder = "' + path + '"\n'
        # Otherwise, leave it alone
        else:
            text += line
# Write the new module            
with open("modules/STANDARDS.py", "w") as file:
    file.write(text)

# Copy Start_Experiment.py to the InstallFolder
os.system("cp programs/Start_Experiment.py .")

# Confirm that the user has successfully finished installation
time.sleep(7) # Allow the user to read the previous reminder
os.system("clear") # And then clear the message
message = """The IPRO Suite of Programs was successfully installed and the
"install.py" program will now self-destruct."""
print message
os.remove("install.py")
    
