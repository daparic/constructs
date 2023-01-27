package main

import (
    "testing"
    "github.com/stretchr/testify/assert"
)

func TestAddnum(t *testing.T) {
    assert.Equal(t, Addnum(3, 4), 7)
}

func TestBasics(t *testing.T) {
    e := Event {
        Name: "John",
        Id: 5,
    }
    assert.Equal(t, e.Id, 5, "must be equal")
    assert.Equal(t, e.String(), "John-5", "must be equal")
}
