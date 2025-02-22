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
  collapsed:: true
	- Creational design pattern that lets you construct complex objects step by step.
	- Allows you to produce different type and representations of an object using the same construction code.
	- Suppose you have a house but there will be multiple different houses type that you can build.
	- Extract the object construction code outside of its own class and move it to separate objects called builders.
	- The builder class would contains lots of Setter in the class along with a method which would return a new instance of actual class.
	- We try to make the object constructor as non-public.
		- By doing this we force the users to instantiate using the builder only.
	- **Director class**
		- Defines the order in which we should call the construction steps so that we could reuse specific configurations of the products we are building.
		- Its optional and on demand thing.
	- Completely hides the details of the product construction from the client code.
	- _Solution_
		- Create Sub-classes for each different types or create a constructor with large parameters which may remains unused most of the time.
	- _Actual solution_
		- Builder pattern : Write the construction code out of its own class and move it to separate objects called builders.
	- Its lets you construct complex objects step by step.
	- Code
	  collapsed:: true
		- ```
		  class Car {
		  private:
		    string engine;
		    string body;
		    int wheels;
		    bool sunroof;
		  
		  public:
		    Car() : wheels(4), sunroof(false) {}
		  
		    void setEngine(const string &eng) { engine = eng; }
		    void setBody(const string &bod) { body = bod; }
		    void setWheels(int w) { wheels = w; }
		    void setSunroof(bool hasSunRoof) { sunroof = hasSunRoof; }
		    // the const keyword specifiy that the method does not modify the state of the
		    // object. it ensures that the method is read only. can be called on constant
		    // objects.
		    //
		    void showCar() const {
		      cout << " Car specifications \n";
		      cout << "Engine : " << engine << "\n";
		      cout << "Body : " << body << "\n";
		      cout << "Wheels " << wheels << "\n";
		      cout << "Sunroof : " << (sunroof ? "Yes" : "No") << "\n";
		    }
		  };
		  
		  class CarBuilder {
		  public:
		    virtual ~CarBuilder() = default;
		    virtual void buildEngine() = 0;
		    virtual void buildBody() = 0;
		    virtual void buildWheels() = 0;
		    virtual void buildSunroof() = 0;
		    virtual shared_ptr<Car> getCar() = 0;
		  };
		  
		  class SportsCarBuilder : public CarBuilder {
		  
		  private:
		    shared_ptr<Car> car;
		  
		  public:
		    SportsCarBuilder() { car = make_shared<Car>(); }
		    void buildEngine() override { car->setEngine("V8 Turbo"); }
		    void buildBody() override { car->setBody("Sports body"); }
		  
		    void buildWheels() override { car->setWheels(4); }
		    void buildSunroof() override { car->setSunroof(true); }
		    shared_ptr<Car> getCar() override { return car; }
		  };
		  
		  class CarDirector {
		  public:
		    shared_ptr<Car> constructCar(CarBuilder &builder) {
		      builder.buildEngine();
		      builder.buildBody();
		      builder.buildWheels();
		      builder.buildSunroof();
		      return builder.getCar();
		    }
		  };
		  
		  int main(int argc, char *argv[]) {
		    SportsCarBuilder sportsCarBuilder;
		    CarDirector director;
		    shared_ptr<Car> myCar = director.constructCar(sportsCarBuilder);
		    myCar->showCar();
		    return 0;
		  }
		  ```
	-