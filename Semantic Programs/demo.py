def make_multiplier(factor):
    def multiplier(x):
        return x * factor
    return multiplier

times3 = make_multiplier(3)
print("Python closure: 3 * 10 =", times3(10))
