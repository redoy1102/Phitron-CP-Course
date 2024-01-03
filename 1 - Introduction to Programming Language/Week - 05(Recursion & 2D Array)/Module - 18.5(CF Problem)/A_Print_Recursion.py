def fun(i, n):
    if i == n:  return
    print("I love Recursion")
    fun(i+1, n)

n = int(input())
# main
fun(0, n)