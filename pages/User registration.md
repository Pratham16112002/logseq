#### Creating a separate route
	- A separate end point is necessary for the auth workflow.
- #### Password storing
	- Password should be stored as a hash for security reasons
	- id:: 673eedab-ce3a-45c1-908e-7d4cc9796a4a
	  ```
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
	- The invitation token sent to the user should be stored in hashed form in the backend again for security reasons.
		- id:: 67402ac5-2ea5-4e4d-b4c6-b0de4d020160
		  ```
		  hash := sha256.Sum256([]byte(token))
		  hashedToken := hex.EncodeToString(hash[:])
		  ```
	- **User invitation transaction**
		- __Transaction Wrapper__ : This will mark the begin of transaction and the commit of transaction or rollback of transaction in case of faliure.
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