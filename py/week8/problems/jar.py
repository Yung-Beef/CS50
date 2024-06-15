class Jar:
    def __init__(self, capacity=12):
        # __init__ should initialize a cookie jar with the given capacity (user input, or default of 12),
        # which represents the maximum number of cookies that can fit in the cookie jar.
        # If capacity is not a non-negative int, though, __init__ should instead raise a ValueError.
        if capacity
        self.capacity = capacity

    def __str__(self):
        # __str__ should return a str with 🍪, where is the number of cookies in the cookie jar.
        # For instance, if there are 3 cookies in the cookie jar, then str should return "🍪🍪🍪"

        string = ""
        for _ in cookies:   # but what is cookies?
            string = string + "🍪"

        return string

    def deposit(self, n):
        # deposit should add n cookies to the cookie jar.
        # If adding that many would exceed the cookie jar’s capacity, though, deposit should instead raise a ValueError.

    def withdraw(self, n):
        # withdraw should remove n cookies from the cookie jar.
        # Nom nom nom. If there aren’t that many cookies in the cookie jar, though, withdraw should instead raise a ValueError.

    @property
    def capacity(self):
        # capacity should return the cookie jar’s capacity.

    @property
    def size(self):
        # size should return the number of cookies actually in the cookie jar, initially 0.
