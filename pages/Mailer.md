- We can use multiple SMTP third party or even our own.
- Mail should be exposed to certain level of application only.
- ### Implementation
	- It should be an interface with a send method.
	- ```
	  type Client interface {
	  	Send(templateFile, username, email string, data any, isSandbox bool) error
	  }
	  ```
	-