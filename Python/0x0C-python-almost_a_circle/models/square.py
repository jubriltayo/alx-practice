from models.rectangle import Rectangle

class Square(Rectangle):
    def __init__(self, size, x=0, y=0, id=None):
        super().__init__(size, size, x, y, id)
        self.size = size

    def __str__(self):
        id = str(self.id)
        x = str(self.x)
        y = str(self.y)
        w = str(self.width)
        return '[Square] (' + id + ') ' + x + '/' + y + ' - ' + w