#### Creating a separate route
	- ```
	  r.Route("/authentication", func(r chi.Router) {
	  			r.Post("/user", app.userRegisterHandler)
	  		})
	  ```
- #### Payload for registration
	- ```
	  type RegisterUserPayload struct {
	  	Username string `json:"username" validate:"required,max=50"`
	  	Email    string `json:"email" validate:"required,email,max=50"`
	  	Password string `json:"password" validate:"required,min=3,max=88"`
	  }
	  ```
- #### Password storing
	- Password should be stored as a hash for security reasons
	- ```
	  func (p *PasswordType) Set(password_txt string) error {
	  	var err error
	  	p.hash, err = bcrypt.GenerateFromPassword([]byte(password_txt), bcrypt.DefaultCost)
	  	p.text = &password_txt
	  	if err != nil {
	  		return err
	  	}
	  	return nil
	  
	  }
	  ```
	- Ensure that password are stored as hash.
- #### User invitation
	- Creating an separate entity for **user_invitations**.
		- Has `user_id` and token as attributes.
	- __User store__ must have a method `CreateAndInvite()` which will send the email and create the user as well.
	- The invitation token sent to the user should be stored in hashed form in the backend.
	-
- #### Saga Pattern
	- A way to communicate with different services in a transaction like way.
	- We can make it look like an acid transaction.
	- Execution of sequence of transactions in different services.
	- All these transaction on different services are made to look like one transaction.
	- To implement saga pattern into out application we will be having two thing.
		- Create user and invitation method.
		- Delete user and invitation method ( In case of email failure ).
- #### Transaction wrapper
	-