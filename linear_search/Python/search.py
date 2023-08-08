# linear search with python

def search(arr, n, number_target):
    "Linear search algorithm"
    for i in range(0, n):
        if arr[i] == number_target:
            return i
    return -1


arr = [2, 0, 1, 4, 10, 4, 7, 77, 23, 3]
n = len(arr)
x = 77
result = search(arr, n, x)
if result == -1:
    print(f"Not found {x} in array.")
else:
    print(f"Finded {x} in at index {result}")
