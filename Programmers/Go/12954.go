func solution(x int, n int) []int {
    var ret []int
    var prev int = x
    
    for i := 0; i < n; i++ {
        ret = append(ret, prev)
        prev += x
    }
    
    return ret
}