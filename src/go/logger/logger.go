package main

import (
	"log"

	"github.com/err"
)

func main() {
	log.SetPrefix("logger: ")
	log.SetFlags(0)

	var e error
	e = err.Error()
	if e != nil {
		log.Fatal(e)
	}
}
