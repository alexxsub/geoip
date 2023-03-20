package main

import (
        "io/ioutil"
        "net/http"
        "fmt"
)

func main() {
        res, _ := http.Get("https://api.ipify.org")
        ip, _ := ioutil.ReadAll(res.Body)
        fmt.Println("My public IP address is: "+string(ip))
}