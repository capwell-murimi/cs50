def    main():
    jar = Jar(10)
    print(jar)  # Output: ""
    jar.deposit(9)
    print(jar)  # Output: "🍪🍪🍪"
    jar.withdraw(2)
    print(jar)  # Output: "🍪"
    print(jar.capacity )
    print(len(jar.cookies))

class Jar:
    def __init__(self, capacity=12):
        if capacity < 0:
            raise ValueError("Capacity must be a non-negative integer.")
        self._capacity = capacity
        self.cookies = []

    def __str__(self):
        return "🍪" * len(self.cookies)

    def deposit(self, n):
        if len(self.cookies) + n > self._capacity:
            raise ValueError("Exceeds the cookie jar's capacity.")
        self.cookies.extend([None] * n)

    def withdraw(self, n):
        if len(self.cookies) < n:
            raise ValueError("Not enough cookies in the cookie jar.")
        self.cookies = self.cookies[:-n]

    @property
    def capacity(self):
        return self._capacity

    @property
    def size(self):
        return len(self.cookies)


main()
