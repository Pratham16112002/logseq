- #### Routers
	- A router receives and sends data on computer networks. Routers are sometimes confused with network , hubs , modems , or networks switches . However , routers can combine the functions of these components , and with these devices , to improve internet access or help create business networks . 
	  Routers can also provide **security** , Embedded firewall and content filtering software provide and an protection .
	- #### Types of routers
		- **Core routers** are generally used by service providers or cloud providers . They provide maximum bandwidth to connect additional routers or switches .
		- **Edge routers** also called gateway router , they are optimized and designed to connect to other routers to distribute data to end users . They don't usually offer WIFI , they tiypically have only ethernet ports-an input to connect to the internet and serveral outputs to connect additional routers .
		- **Distribution Routers** receives data from the edge router via wired connection and sends it on to end users , typically via WIFI .
		- **Wireless Routers** combine the functions of edge routers and distribution routers. These are commonplace routers for home networks and Internet access.
	- #### How to choose small business routers
		- 1. **Connectivity** Pay close attention to the numbers and types of ports (such as phone, Ethernet, cable, and USB) to make sure you can connect the necessary devices.
		  2. **Bandwidth** Pay close attention to the numbers and types of ports (such as phone, Ethernet, cable, and USB) to make sure you can connect the necessary devices.
		  3. **Wireless Capability** 
		  4. **Simplified Setup and management** Most routers provide a browser-based interface that connects directly to your router to perform setup and admin .
		  5. **Security** should at least off WPA or WPA2 password protection . 
		  6. **Flexibiltiy** Consider routers that have at least one power over ethernet (PoE) port. PoE provides both data and electricity power supply to external devices.
		  7. **Automatic updates**
		  8. **User Changeable configuration** For example , parental controls , and security settings . 
		  9. **Guest networks** to limit the access to the business's devices and files , while offering connectivity to visitors . 
		  10. **Quality of service controls** allows you to limit network use to up or downstream transmissions ,control for certain types of use . 
		  11. **Mesh networks** Allows you to place multiple WIFI transmitters accros your office , all on one network .
	- #### Layer-2 and layer-3 switches
		- A **switch** is a device which sends a data packet in a local network. 
		  ^^HUB HAS NO BRAIN^^
		  #+BEGIN_NOTE
		  A hub floods the network with the packet and only destination system receives that packet while others just drop due to which the traffic increases a lot. To solve this problem switch came into the picture. A switch first learns, by flooding network just like hub to fill MAC- address table, on which port a particular device is connected. After learning it sends packets to that particular host only. 
		  #+END_NOTE
		- #+BEGIN_IMPORTANT
		  Switches layer 2 mac address 
		  #+END_IMPORTANT
		- ?
		  |Layer 2 Switch|Layer 3 Switch|
		  |--|--|
		  |Operate on Layer 2 ( Data Link ) of OSI Model|Operate on layer (Network layer ) of OSI model|
		  |Send "frames" to destination on the basis of MAC address.|Route Packet with help of IP address|
		  |Used to reduce traffic on local network.|Mostly Used to implement VLAN (Virtual Local area network)|
		  |Quite fast as they do not look at the Layer 3 portion of the data packets.|Takes time to examine data packets before sending them to their destination|
		  |It has single broadcast domain|It has multiple broadcast domain.|
		  |Can communicate within a network only.|	Can communicate within or outside network.|
		-