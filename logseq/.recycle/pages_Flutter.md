- ### Camera
	- First you need to import camera plugin in the main.dart file and then add 
	  ```
	  WidgetsFlutterBinding.ensureInitialized();
	  ```
		- You need to add this initialization before you run your main app when you need the binding to be initialized before the runApp .
		- You need to find all the available cameras in the device by running
		  ```
		    cameras = await availableCameras();
		  ```
		- ^^avilableCamers()^^ function will return all the cameras attached to the device.
		- To create a List in Dart of ^^CameraDiscription^^ 
		  ```
		  late List<CameraDescription> cameras;
		  ```
		- create a camera controller and a cameraValue variable of data type ^^Future<void>^^.
		- ```
		  _cameraController = CameraController(cameras[0], ResolutionPreset.high);
		      cameraValue = _cameraController.initialize();
		  ```
		- we assign a value to the cameraController with a camera at index 0  and resolution preset is set as high , then we