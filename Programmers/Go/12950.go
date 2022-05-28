func solution(arr1 [][]int, arr2 [][]int) [][]int {
    var ret [][]int
    
    for i := 0; i < len(arr1); i++ {
        var tmp []int
        for j := 0; j < len(arr1[0]); j++ {
            tmp = append(tmp, arr1[i][j] + arr2[i][j])
        }
        ret = append(ret, tmp)
    }
    
    return ret
}