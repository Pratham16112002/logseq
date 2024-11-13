#### Context
collapsed:: true
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
	  collapsed:: true
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
			- #+BEGIN_NOTE
			  .PHONY command in make file is used to declare phony targets. A phony target is the one that doesn't represent a file or directory but instead is simply a name of the command or set of commands.
			  #+END_NOTE
	- #### Usage in API
		- It is better to create a separate readJSON and writeJSON method.
		- ```
		  package main
		  
		  import (
		  	"encoding/json"
		  	"net/http"
		  )
		  
		  func writeJSON(res http.ResponseWriter, status int, data any) error {
		  	res.Header().Set("Content-Type", "application/json")
		  	res.WriteHeader(status)
		  	return json.NewEncoder(res).Encode(data)
		  }
		  
		  func readJSON(res http.ResponseWriter, req *http.Request, data any) error {
		  	maxBytes := 1_048_578
		  	req.Body = http.MaxBytesReader(res, req.Body, int64(maxBytes))
		  	decoder := json.NewDecoder(req.Body)
		  	return decoder.Decode(data)
		  }
		  ```
			-
- ### DB Migrations
  collapsed:: true
	- Transferring the data from one database to another.
	- #### Up/Down Migration   SSSSS
		- ![image.png](../assets/image_1731493867599_0.png)
		  collapsed:: true
			- The migration files will run sequentially in order.
		- Similarly in the migration down process certain statements will get executed in **order**.
		- During migration the dirty columns tell os that weather the last command has failed or not.
			- If **DIRTY** : FALSE
			  collapsed:: true
				- No problems in executing the commands.
			- Else
			  collapsed:: true
				- Some problem has occurred.
		-