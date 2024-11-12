#### Context
	- Tells the computer what to do next or when to stop something.
	- Best example would be high resource heavy computational API's which process lots of data or takes long time to gather the required data.
		- We could get a timeout for these API's with Go context.
	- We could also attach this context to the database in go and set a timeout for the  backend connection.
	- ```
	  	ctx, cnl_fn := context.WithTimeout(context.Background(), 5*time.Second)
	      defer cnl_fn()
	  	if err = db.PingContext(ctx); err != nil {
	  		return nil, err
	  	}
	  ```
- #### JSON
	- When using json embedding in struct .
		- ```
		  type User struct {
		  	ID        int64  `json:"id"`
		  	Username  string `json:"username"`
		  	Email     string `json:"email"`
		  	Password  string `json:"-"`
		  	CreatedAt string `json:"created_at"`
		  }
		  ```
			- The password filed will be hidden and not be displayed in the JSON output.
			- #BEGIN_NOTE
			  .PHONY command in make file is used to declare phony targets. A phony target is the one that doesn't represent a file or directory but instead is simply a name of the command or set of commands.
			  #END_NOTE
			-
		-