## JWT authentication
	- ### JWT claims
		- Set of key values pairs which stores the information about the subject.
		- Information like expiry date, issued at, user Id.
		- `{ claim name : claim value}`.
		- __Registered claims__ : These are some required,  which are recommended to be added if we want some third party collection.
		- ```
		  claims := jwt.MapClaims{
		  		"sub": user.ID,
		  		"exp": time.Now().Add(app.config.auth.token.exp).Unix(),
		  		"iat": time.Now().Unix(),
		  		"iss": app.config.auth.token.iss,
		  		"nbf": time.Now().Unix(),
		  		"aud": app.config.auth.token.iss,
		  	}
		  ```
		- #### Token creation from JWT claims
			- ```
			  func (j *JWTAuthenticator) GenerateToken(claims jwt.Claims) (string, error) {
			  
			  	token := jwt.NewWithClaims(jwt.SigningMethodHS256, claims)
			  
			  	tokenString, err := token.SignedString([]byte(j.secret))
			  
			  	if err != nil {
			  		return "", nil
			  	}
			  	return tokenString, nil
			  }
			  ```
			-