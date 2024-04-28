from math import gcd, log, floor, ceil, floor
from sys import stdin, stdout
import collections

stdstr = lambda: stdin.readline()
stdint = lambda: int(stdin.readline())
stdpr = lambda x: stdout.write(str(x))


# ......................................
def quick_sort(nums):
    if len(nums) < 2:
        return nums
    else:
        pivot = nums[0]

        less = [i for i in nums[1:] if i <= pivot]
        greater = [i for i in nums[1:] if i > pivot]

        return quick_sort(less) + [pivot] + quick_sort(greater)


def get_value(low, fre):
    for k, v in fre.items():
        if k == low:
            return v
        else:
            pass


def solve():
    n = int(input())
    nums = [int(i) for i in input().split()][:n]
    # e, m, b = map(int, input().split())
    # s = input()
    # res = quick_sort(nums)
    # sums = []

    fre = dict(collections.Counter(nums))
    low = min(fre.keys())
    if get_value(low, fre) % 2 != 0:
        print("Lucky")
    else:
        print("Unlucky")


# ........................................
def get_key(low, fre):
    for k, v in fre.items():
        if v == low:
            return k
        else:
            pass


def check():
    pass


def main():
    # t = int(input())
    t = 1
    for _ in range(t):
        solve()
        # check()


if __name__ == "__main__":
    main()