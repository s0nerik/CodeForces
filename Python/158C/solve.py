import sys
my_file = sys.stdin
#my_file = open("input.txt", "r")
my_file.readline()
a = my_file.read().strip().split("\n")

class Dir:
    def __init__(self, dir):
        self.dir = [i for i in dir.split("/") if i]
    def current(self):
        return "/"+"/".join(map(str, self.dir))+"/" if self.dir else "/"
    def cd(self, new, direct):
        if direct:
            self.dir = new.dir
        else:
            self.dir += new.dir
        i = 0
        while i < len(self.dir):
            if self.dir[i] == "..":
                self.dir[i] = "_"
                if i > 0:
                    self.dir[i-1] = "_"
                while "_" in self.dir:
                    self.dir.remove("_")
                    i -= 1
            i += 1

dir= Dir("/")

for c in a:
    new = Dir(c[3:])
    if "pwd" in c:
        print(dir.current())
    elif "cd" in c[:2]:
        if c[3] == "/":
            dir.cd(new, True)
        else:
            dir.cd(new, False)