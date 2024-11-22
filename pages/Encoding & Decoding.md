### Hashing
	- To create a simple sha256 hash we can do this `	hash := sha256.Sum256([]byte(token))`
		- this will create a hash which will be slice of bytes.
		- we need to convert this into string from with `	hashedToken := hex.EncodeToString(hash[:])`
		-