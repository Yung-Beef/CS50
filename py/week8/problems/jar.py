class Jar:
    def __init__(self, capacity=12):
        # __init__ should initialize a cookie jar with the given capacity (user input, or default of 12),
        # which represents the maximum number of cookies that can fit in the cookie jar.
        # If capacity is not a non-negative int, though, __init__ should instead raise a ValueError.
        if int(capacity) >= 0:
            self._capacity = capacity
        else:
            raise ValueError
        self._size = 0

    def __str__(self):
        # __str__ should return a str with 🍪, where is the number of cookies in the cookie jar.
        # For instance, if there are 3 cookies in the cookie jar, then str should return "🍪🍪🍪"
        return self.size * '🍪'

    def deposit(self, n):
        # deposit should add n cookies to the cookie jar.
        # If adding that many would exceed the cookie jar’s capacity, though, deposit should instead raise a ValueError.
        if self._size + int(n) > self._capacity:
            raise ValueError
        self._size += int(n)

    def withdraw(self, n):
        # withdraw should remove n cookies from the cookie jar.
        # Nom nom nom. If there aren’t that many cookies in the cookie jar, though, withdraw should instead raise a ValueError.
        if self._size - int(n) < 0:
            raise ValueError
        self._size -= int(n)

    @property
    def capacity(self):
        # capacity should return the cookie jar’s capacity.
        return self._capacity

    @property
    def size(self):
        # size should return the number of cookies actually in the cookie jar, initially 0.
        return self._size
