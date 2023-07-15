def before(x,y):
    print("before x:",x,"y:",y)
def after(x,y):
    print("after x:",x,"y:",y)
def first(x,y):
    before(x,y)
    x = x + y
    y = x - y
    x = x - y
    after(x,y)

def second(x,y):
    before(x,y)
    x,y = y,x
    after(x,y)

def third(x,y):
    before(x,y)
    x = x^y
    y = x^y
    x = x^y
    after(x,y)


first(3,4)
second(3,4)
third(3,4)