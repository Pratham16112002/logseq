## Composition over inheritance
	- _flaws in inheritance_
		- Tight coupling in super and sub-class.
		- Large hierarchies.
	- Any inheritance relationship can be translated into composition.
	- _Composition_
		- Offers great reusability.
		- Eventually loose coupling.
	- Inheritance ( Is a ).
	- Composition ( Has a).
	-
- ## SOLID
	- ### **S**ingle Responsibility principle
		- A class should just have only one reason to change.
	- ### **O**pen/Close principle
		- A class should be open for extension but closed for modification.
		- A class is open which means that it is extendable.
		- Some languages also have a special keywords like final for a class.
			- After declaring a class __final__ it means that its 100% ready i.e. completed.
	- ### **L**iskov Substitution principle
		- When extending a class, remember that you should be able to pass objects of the subclass in place of objects of parent class without breaking the client code.
		- A subclass should be able to replace the superclass without breaking the functionality of the program.
		- **Rule**
			- **Subclass - Superclass**
				- Method parameters should be same or more abstract.
				- Method return types should be same or more specific.
		- The child class should throw only those exceptions which are expected in the parent class.
		- A subclass shouldn't have weaken post-conditions.
	- ### Interface Segregation Principle
		- Client should not be forced to depend on the methods which they don't use.
		- We try to make our interfaces as narrow as possible to make then specific.
		- Bloated interfaces are De-bloated.
		- There is no need to cram tons of unrelated methods to single interfaces.
	- ### Dependency Inversion Principle
		- High level classes shouldn't depend upon low-level classes.
		- Both should depend on abstractions, further abstractions shouldn't be dependent on details.
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
	- The subclasses can alter the objects being returned by the factory method.
	- Client code always call the factory method.
	- ```
	  class Button {
	  public:
	    virtual void render() = 0;
	    virtual void onClick() = 0;
	  };
	  
	  class WindowsButton : public Button {
	  public:
	    void render() { std::cout << "Render Windows Button" << std::endl; }
	    void onClick() { std::cout << "Close Windows Dialog" << std::endl; }
	  };
	  
	  class HTMLButton : public Button {
	  public:
	    void render() { std::cout << "Render HTML Button" << std::endl; }
	    void onClick() { std::cout << "Close HTML Dialog" << std::endl; }
	  };
	  
	  class Dialog {
	  public:
	    virtual std::unique_ptr<Button> createButton() = 0;
	    void render() {
	      std::unique_ptr<Button> okButton = createButton();
	      okButton->render();
	      okButton->onClick();
	    }
	    void closeDialog() { std::cout << "Close Dialog" << std::endl; }
	  };
	  class WindowsDialog : public Dialog {
	  public:
	    std::unique_ptr<Button> createButton() override {
	      return std::make_unique<WindowsButton>();
	    }
	  };
	  class WebDialog : public Dialog {
	  public:
	    std::unique_ptr<Button> createButton() override {
	      return std::make_unique<HTMLButton>();
	    }
	  };
	  ```
	- Use factory method when we want to provide users of the library to extends its internal components.
	-