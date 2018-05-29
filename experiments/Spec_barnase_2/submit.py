import os

os.system("rm job*.o*")

list = os.listdir(".")
for i in list:
    if i.startswith("job"):
        os.system("qsub " + i)
        
