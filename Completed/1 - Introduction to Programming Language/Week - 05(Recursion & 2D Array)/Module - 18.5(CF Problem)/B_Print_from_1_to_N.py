def fun(i, n):
    if i == n+1:    return
    print(i)
    fun(i+1, n)


n = int(input())
# main
fun(1, n)