## JWT authentication
	- ### JWT claims
		- Set of key values pairs which stores the information about the subject.
		- Information like expiry date, issued at, user Id.
		- `{ claim name : claim value}`.
		- __Registered claims__ : These are some required,  which are recommended to be added if we want some third party collection.
	- ### Process
		- First we create a payload with credentials
		- id:: 67436f1e-c537-42a6-afc1-fe9f893226fe
		  ```
		  type CreateUserTokenPayload struct {
		  	Email    string `json:"email" validate:"email,required,max=200"`
		  	Password string `json:"password" validate:"required,min=3,max=55"`
		  }
		  ```