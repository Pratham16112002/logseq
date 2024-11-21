#### Creating a separate route
	- ```
	  r.Route("/authentication", func(r chi.Router) {
	  			r.Post("/user", app.userRegisterHandler)
	  		})
	  ```
- #### Payload for registration
	-