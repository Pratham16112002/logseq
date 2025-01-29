## Composition
- ## Abstract Factory
	- In this pattern the top parent component is the factory which may have multiple children components.
	- _Normal Factory Pattern_
		- we are
- ## Factory Pattern
	- Comes under creational pattern.
	- Very commonly used pattern.
	- Hides the creation logic of the instances.
	- The client interact with the factory and tells the kind of instances that needs to be created, then the factory interacts with corresponding concrete objects and return the correct required instance back.
	- The client  asks the factory to return the specific object.
	- Three part in the code.
		- **Factory code**
		  collapsed:: true
			- ```
			  // Factory
			  func DrawShape(shapeType string) shape.Shape {
			  	switch shapeType {
			  	case "circle":
			  		return shape.NewCircle()
			  	case "rectangle":
			  		return shape.NewRectangle()
			  	case "square":
			  		return shape.NewSquare()
			  	default:
			  		panic("This shape is not supported")
			  	}
			  
			  }
			  
			  ```
		- **Client code**
		  collapsed:: true
			- ```
			  func main() {
			  	// Client code
			  
			  	circle := DrawShape("circle")
			  	// Draw circle
			  	circle.Draw()
			  
			  	rectangle := DrawShape("rectangle")
			  	// Draw rectangle
			  	rectangle.Draw()
			  
			  	square := DrawShape("square")
			  
			  	// Draw square
			  	square.Draw()
			  }
			  ```
		- **App code**
		  collapsed:: true
			- ```
			  type Shape interface {
			  	Draw()
			  }
			  ```
			- ```
			  type Square struct{}
			  
			  func NewSquare() Square {
			  	return Square{}
			  }
			  
			  func (c Square) Draw() {
			  	// implementation
			  	println("square is drawn")
			  }
			  ```
			- ```
			  type Rectangle struct{}
			  
			  func NewRectangle() Rectangle {
			  	return Rectangle{}
			  }
			  
			  func (c Rectangle) Draw() {
			  	// implementation
			  	println("rectangle is drawn")
			  }
			  ```
			- ```
			  type Circle struct{}
			  
			  func NewCircle() Circle {
			  	return Circle{}
			  }
			  
			  func (c Circle) Draw() {
			  	// Implementation
			  	println("Circle is drawn")
			  }
			  ```