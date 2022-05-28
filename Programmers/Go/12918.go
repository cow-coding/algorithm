// import "fmt"
import "unicode"

func solution(s string) bool {
    
    if len(s) != 4 && len(s) != 6 {return false}
    
    for i := 0; i < len(s); i++ {
        if !unicode.IsNumber(rune(s[i])) {
            // fmt.Println(string(s[i]))
            return false
        }
    }
    
    return true
}