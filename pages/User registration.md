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
	-