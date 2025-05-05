class CustomValueError(ValueError):
    def __init__(self,arg):
        self.strerror =arg
        self.args = {arg}

try:
    Ex = ValueError()
    Ex.strerror = "La valeur dois être comprise entre 1  et 10."
    raise Ex
except ValueError as e:
    print("Exception ValueError !",e.strerror)