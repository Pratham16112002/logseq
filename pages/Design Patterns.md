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
- ## Abstract Factory Pattern
  collapsed:: true
	- Its an advancement of Factory Pattern when we have a requirement of large number of related products.
	- The same code of abstract factory can be implemented with factory pattern but the code will not follow the Open/Closed principle and Single responsibility principle.
	- Example in Go Lang
	- ```
	  type Monitor interface {
	  	Assemble()
	  }
	  
	  type GPU interface {
	  	Assemble()
	  }
	  
	  type MsiGpu struct{}
	  
	  func (g *MsiGpu) Assemble() {
	  	fmt.Println("Assembling Msi Gpu")
	  }
	  
	  type MsiMonitor struct{}
	  
	  func (m *MsiMonitor) Assemble() {
	  	fmt.Println("Assembling Msi Monitor")
	  }
	  
	  type AsusGpu struct{}
	  
	  func (g *AsusGpu) Assemble() {
	  	fmt.Println("Asssembling Asus Gpu")
	  }
	  
	  type AsusMonitor struct{}
	  
	  func (g *AsusMonitor) Assemble() {
	  	fmt.Println("Assembling Asus Monitor")
	  }
	  
	  type Company interface {
	  	CreateGpu() GPU
	  	CreateMonitor() Monitor
	  }
	  
	  type MsiManufacturing struct{}
	  
	  func (mM *MsiManufacturing) CreateGpu() MsiGpu {
	  	return MsiGpu{}
	  }
	  
	  func (mM *MsiManufacturing) CreateMonitor() MsiMonitor {
	  	return MsiMonitor{}
	  }
	  
	  type AsusManufacturing struct{}
	  
	  func (aM *AsusManufacturing) CreateGpu() AsusGpu {
	  	return AsusGpu{}
	  }
	  
	  func (aM *AsusManufacturing) CreateMonitor() AsusMonitor {
	  	return AsusMonitor{}
	  }
	  ```
	- We use abstract factory when the code needs to work with different families of related products.
	- **Code cpp**
		- ```
		  class Button {
		  public:
		    virtual void render() = 0;
		    virtual ~Button() = default;
		  };
		  
		  class Checkbox {
		  public:
		    // virtual function which will be overriden by the base classes.
		    virtual void render() = 0;
		    virtual ~Checkbox() = default;
		  };
		  
		  class WindowsButton : public Button {
		  public:
		    void render() override { cout << "Rendering windows Button\n"; }
		  };
		  
		  class WindowsChecbox : public Checkbox {
		  public:
		    void render() override { cout << "Rendering windows Checkbox\n"; }
		  };
		  
		  class MacOSButton : public Button {
		  public:
		    void render() override { cout << "Rendering macos Button\n"; }
		  };
		  
		  class MacOSChecbox : public Checkbox {
		  public:
		    void render() override { cout << "Rendering macos Checkbox\n"; }
		  };
		  
		  class GUIFactory {
		  public:
		    virtual std::unique_ptr<Button> createButton() = 0;
		    virtual unique_ptr<Checkbox> createChecbox() = 0;
		    virtual ~GUIFactory() = default;
		  };
		  
		  class WindowsFactory : public GUIFactory {
		  public:
		    unique_ptr<Button> createButton() { return make_unique<WindowsButton>(); }
		    unique_ptr<Checkbox> createChecbox() { return make_unique<WindowsChecbox>(); }
		  };
		  
		  class MacOSFactory : public GUIFactory {
		  public:
		    unique_ptr<Button> createButton() { return make_unique<MacOSButton>(); }
		    unique_ptr<Checkbox> createChecbox() { return make_unique<MacOSChecbox>(); }
		  };
		  
		  void renderUI(unique_ptr<GUIFactory> factory) {
		    auto button = factory->createButton();
		    auto checkbox = factory->createChecbox();
		    button->render();
		    checkbox->render();
		  }	
		  ```
	-
- ## Builder Factory Pattern
	- Creational design pattern that lets you construct complex objects step by step.
	- Allows you to produce different type and representations of an object using the same construction code.
	- Suppose you have a house but there will be multiple different houses type that you can build