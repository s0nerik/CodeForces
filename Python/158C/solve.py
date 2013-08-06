import sys
my_file = sys.stdin
##my_file = open("input.txt", "r")
com_num = int(my_file.readline().rstrip('\n'))
cur_dir = "/"
def parent(directory):
    if directory[0]=="/" and directory.count("/") > 1:
        return directory[:directory.rfind("/"):]
    elif directory[0]=="/" and directory.count("/") == 1:
        return "/"
    else:
        return cur_dir

def remove_parents(directory):
    if directory[:2:] == "..":
        directory = parent(cur_dir)+directory[2::]
    cnt = directory.count("..")
    for i in range(cnt):
        pos = directory.find("/..")
        if parent(directory[:pos:]) != "/":
            directory = parent(directory[:pos:]) + directory[pos+3::]
        else:
            directory = directory[pos+3::]
    return directory

for i in range(com_num):
    com = my_file.readline().rstrip('\n')
    if com[:3:] == "pwd":
        if cur_dir != "/":
            print cur_dir+"/"
        else:
            print cur_dir
    elif com[:2:] == "cd" and (".." not in com):
        if com[3:4:] == "/":
            cur_dir = com[3::]
        else:
            if cur_dir != "/":
                cur_dir = cur_dir + "/" + com[3::]
            else:
                cur_dir = cur_dir + com[3::]
    elif com[:2:] == "cd" and (".." in com):
        cur_dir = remove_parents(com[3::])
        
my_file.close()
