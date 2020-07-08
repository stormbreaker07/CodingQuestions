
class test:

    def fun(self):
        print("hello")
    
obj = test()
obj.fun()


class Parrot:

    def __init__(self,name,age):
        self.name = name
        self.age = age

    def sing(self,song):
        return "{} ,sings{}", format(self.name,song)

    def dance(self):
        return "{} is now dancing" format(self.name)
    
nw = parrot("vikas",23)
nw.sing("let me love you")
