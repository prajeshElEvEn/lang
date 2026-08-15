package err

import (
	"errors"
)

func Error() error {
	return errors.New("what is this?")
}
