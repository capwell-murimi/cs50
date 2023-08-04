class car:
    def __init__(self,  name,color,year):
        self.name   =   name
        self.color  =   color
        self.year   =   year

    def randomfunc(self):
        print(f"This is  a {self.color} {self.name} from {self.year}")

car1  = car("toyota","blue","2001")
car1.randomfunc()