func solution(x int) bool {
    var rem int = 0
    var tmp = x
    var sum int
    
    for tmp != 0 {
        rem = tmp % 10
        tmp /= 10
        sum += rem
    }
    println(sum)
    if x % sum == 0 {
        return true
    }else {
        return false
    }
    
    
    return true
}