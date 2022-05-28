func solution(phone_number string) string {
    var ret string = ""
    
    for i := 0; i < len(phone_number); i++ {
        if len(phone_number) - i <= 4 {
            ret += string(phone_number[i])
        }else {
            ret += "*"
        }
    }
    
    return ret
}