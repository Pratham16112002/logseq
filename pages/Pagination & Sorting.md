- **Limit** and **Offset**
	- __Limit__ : How much document you want from a big pile.
	- __Offset__ : How much document you want to skip from the big pile.
- Pagination is more of a backend work.
	- **Containment operator** : is `@>`.
		- Used to check weather a fields contains the given values or not.
		  ```
		  p.tags @> $3 
		  ```
		- `$3 = '{}'` ensures that if $3 is empty or not.
	- **Pattern matching** :
		- ``p.title ILIKE TO '%' || $2 || '%'`
- **Time conversion in go**
	- We need to first parse the string to its given output and then format it the required output.
	- ```
	  func ParseTime(str_time string) string {
	  	parsed_time, err := time.Parse(time.RFC3339, str_time)
	  	if err != nil {
	  		return ""
	  	}
	  	return parsed_time.Format(time.RFC3339)
	  }
	  ```