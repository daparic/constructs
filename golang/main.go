package main
import (
    "fmt"
)

type Event struct {
    Name string
    Id int
}

func Addnum(a int, b int) int {
    return a + b
}

func (e Event) String() string {
    if e.Name == "" {
        fmt.Println("--- empty ---")
    } else {
        fmt.Println(e.Name)
    }
    if e.Id == 0 {
        fmt.Println("*** Id is zero ***")
    }
    return fmt.Sprintf("%s-%d", e.Name, e.Id)
}

func main() {
    fmt.Println("Hello World!")
}

