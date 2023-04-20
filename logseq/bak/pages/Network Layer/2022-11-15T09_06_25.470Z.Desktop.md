- #### Packetizing
	- The first duty of the network layer is definitely
	  ^^packetizing^^: encapsulating the payload in a network-
	  layer packet at the source and decapsulating the
	  payload from the network-layer packet at the
	  destination.
	  In other words, the duty of the network layer is to
	  carry a payload from the source to the destination
	  without changing it or using it.
- #### Routing and Forwarding
	- Other duties of the network layer , which are important as the first , are routing and forwarding , which are directly related to each other .
- #### Packet Switching
	- Packet switching is the transfer of small pieces of data across various networks. These data chunks or ^^packets^^ allow for faster, more efficient data transfer.
	  Often, when a user sends a file across a network, it gets transferred in smaller data packets, not in one piece.
	  **For example**, a 3MB file will be divided into packets, each with a packet header that includes the origin IP address, the destination IP address, the number of packets in the entire data file, and the sequence number.
	  ^^Total Time = n(Transmission Time between Switches ) + (Propagation Delay)^^
	- |Datagram Switching|Virtual Circuit Switching|
	  |--|--|
	  |Connection less i.e we will send the packets without storing them in any buffer . |Connection Oriented i.e we will send the packets with reservation ( A global packet will be sent in the network first ) |
	  | There is no dedicated transmisson path.|	There is also no dedicated transmission path.|
	  |No Reservation |Reservation |
	  |Out of Order i.e The packets arrive at their intended destination in a multiple order in which they were transmitted.|Same Order i.e The packets continually reach their destined destination in the similar order in which they were transmitted.|
	  |In Datagram approach the overhead is high i.e All the packets will travel different path , so it is important to add header to each packets . |In this approaoch the overhead is less i.e we add only the global header to the global packet ( rest header are the local header ).  |
	  |More Packet lost i.e all the packets are travelling different path henceare very prone to get lost . |Less Packet Lost i.e every packet is following the same path less prone to get lost .|
	  |Used in Internet|ATM ( Asynchronus transmission mode )|
	- **Working of Virtual Circuit **
		- In the first step a medium is set up between the two end nodes.
		- Resources are reserved for the transmission of packets.
		- Then a signal is sent to sender to tell the medium is set up and transmission can be started.
		- It ensures the transmission of all packets.
		- A global header is used in the first packet of the connection.
		- Whenever data is to be transmitted a new connection is set up.
	- #+BEGIN_TIP
	  In Virtual Circuit the ACK also travels in the same path 
	  #+END_TIP
- #### Example of Datagram approach
	- ![image.png](../assets/image_1662787110821_0.png)
- #### Example of Virtual Circuit approach
	- ![image.png](../assets/image_1662787161453_0.png)
- #### IPV4 Addresses
	- **IP** stands for **Internet Protocol** and v4 stands for **Version Four** (IPv4). IPv4 was the primary version brought into action for production within the ARPANET in 1983.
	  IP version four addresses are 32-bit integers which will be expressed in decimal notation. 
	  Example- 192.0.2.126 could be an IPv4 address.
	- Notation of Ipv4 addressing 
	  ![image.png](../assets/image_1662787736863_0.png){:height 279, :width 550}
	- From 32 bits : 
	  n bits determines the network ,
	  (32 - n )bits Define connection to the node .
- #### Connection less and Connection Oriented
	- |Connection Oriented |Connection Less|
	  |--|--|
	  |Related to telephone system  . |It is related to postal System . |
	  |It includes connection establishment and termination . |It does not include Connection establishment and termination . |
	  |It gurrantees reliability |It does not gurrantess realibality |
	  |Virtual Connection is created . |No virtual Connection is created |
	  |Need Authentication from target |No need of authentication from target |
	  |Handshake is requried |No Handshake is requried |
	  |Slower than Connection Less[:br]Ex Email , Any Document upload  |Faster than connection oriented [:br]Ex Video Streaming , Gaming . |
- #### Classfull addressing
	- ![image.png](../assets/image_1662788635621_0.png)
	- #### Class A
		- Total Possible address in class A = 2^{7} -2  = 128 -2 = 126 .
		  127 is reserved for loop back .
		- Total Possible host in class A = 2^{24} -2 . 
		  
		  #+BEGIN_NOTE
		  Both two host addresses :
		  64.0.0.0 represents the network 
		  64.255.255.255 represents the broadcast address 
		  #+END_NOTE
		- Default Mask = 255.0.0.0
		  
		  #+BEGIN_TIP
		  A subnet mask is a 32-bit number created by setting host bits to all 0s and setting network bits to all 1s. In this way, the subnet mask separates the IP address into the network and host addresses.
		  #+END_TIP
		- By Applying AND operation of default mask with the IP address we get the address to which network node belongs .
	- #### Class B
		- Range = 128 - 191 
		  
		  #+BEGIN_NOTE
		  The bounds are included in the range 
		  #+END_NOTE
		- No of Addresses : 2^{30}
		- No of Networks possible : 2^{14}
		- No of hosts possible in each network :  2^{16} - 2 = 65534
		  Default Mask = 255.255.0.0
	- #### Class C
		- Range = 192 - 223
		- No of Addresses : 2^{29}
		- No of Networks possible :  2^{21}
		- No of hosts possible in each network : 2^{8} -2 = 254
		  Default Mast  = 255.255.255.0
	- #### Class D
		- Range = 224 - 239
		- No of IP Addresses possible : 2^{28}
		- These Address are reserved for multi-casting and group email / Broadcasting .
		-
	- #### Class E
		- Range = 240 - 255
		- No of IP Addresses possible : 2^{28}
		- Reserved for military Purpose .
	- #+BEGIN_NOTE
	  There are two type of broadcast address first is limited 
	  and the second is Direct . 
	  #+END_NOTE
		- The limited broadcast is used when a person inside the network wants to send a message to the whole organization , Direct address is used when you want to broadcast the message into a network from outside .
		- Limited broad cast address = 255.255.255.255
		- Mostly in exam you will be asked to find the direct broadcast only .
- #### Drawbacks of class-full addressing
	- **Wastage of Ip - address **
	  In class A so many addresses are waste .
	- **Maintenance is time consuming**
	  In Big Network Maintenance is very difficult .
	- **More prone to errors and security**
	  If an error or a security flow is detected then that is a very big problem to find the error and solve it . More Ip address are there which means more ways to gain unauthorized access to the network .
- #### Class-less addressing
	- No Classes
	- Only blocks : According to the requirement of the user we give the customized size block .
	- ![image.png](../assets/image_1663201350993_0.png)
	- Notation : 
	  \begin{equation}
	  x.y.z.w \backslash\texttt{   }  n 
	  \end{equation}
	  
	  #+BEGIN_NOTE
	  In the above notation n represnts the mask or no of bit represents  blocks / network
	  To get the network id just do the and operation with subnet mask . 
	  #+END_NOTE
	-
	- Rules : Addresses should be contiguous .
	  No of addresses in a block must be in power of 2 .
	  ^^32-n^^ Must be in power of 2 . 
	  First addresses of every block must be evenly divided with  size of block .
- #### Subnetting in Classfull Addressing
	- Dividing the big network into small networks .
	  Subnetting is always does inside an organization to make their own networks for different departments . 
	  Subnetting imporve the wastage of  ip addresses in classfull addressing .
- #### Reason For Subnetting
	- Maintenance of a very big network like class A and class B is very difficult for network administrator .
	- For Security reason , if you want to isolate an department in an organization from one another then subnetting make this happen .
- #### Types of Subnetting
	- Fixed Length subnetting : Divides the network into subnets such that
		- All the subnets are of same size
		- All the subnets have equal number of hosts .
		- All the subnets have same subnet mask .
	- Variable Length subnetting : Divides the network into subnets of variable size ..
- #### Subnetting in Classless addressing ( CIDR )
	- The sub-networks in a network should be carefully enable the routing of packets.
	- The following steps needs to be taken care while proper operation of the subnetworks .
		- 1. The number of addresses in each subnetwork should be a power  of 2 . 
		  2. The prefix of length of each subnetwork should be found using the follwing formula : 
		  \begin{equation}
		   { n  }_{ snet  }   =  n+lo { g  }_{ 2  }   \left(  \dfrac{ N  }{  { N  }_{ sub  }    }    \right)   
		  \end{equation}
		  3. The starting address in each subnetwork should be divisible by the number of addresses in that subnetwork . This can be achieved if we assign addresses to larger networks .
- #### DHCP ( Dynamic Host Configuration Protocol )
	- Address assignment in an orgnanization can be done automatically using the Dynamic Host Configuration Protocol ( DHCP ) . it is an application layer program , using the client sever paradigm , that actually helps TCP/IP at the network layer .
	- There are two types of addresses that can be assigned first is
		- **Static ip** i.e that user assigns manually .
		- **Dynamic ip** i.e where computer gets an I.P address from a DHCP server .
	- A DCHP server automatically  assigns a computer an :
	  1. I.P address 
	  2. Subnet mast 
	  3. Default gateway 
	  4. DNS Server
	- DHCP  assigns the ip address on the basis of its ^^scope .^^
	- The DHCP server assigns the I.P address as a lease
	  
	  #+BEGIN_IMPORTANT
	  A lease is the amount of time an ip address is assigned to a computer 
	  #+END_IMPORTANT
	- The reason for lease is to make sure that the DHCP does not run out of ip addresses .
	- While the host is connected to network the host will send a signal asking the DHCP server to renew their lease time .
	  ![image.png](../assets/image_1663312792718_0.png)
	  **Opcode :** specifies the general type of message . A value of 1 indicates a request message while a value of 2 is a reply message . 
	  **Htype** : Hardware type ( Ethernet , )
	  **HLen :** Length of hardware address 
	  **HCount :** Maximum no of hops ( routers ) the packet can travel 
	  **Transaction Id** : an Interger set by client and repeated by the server 
	  **Time elapsed** : The number of second since the client started to boot . 
	  **Flags :** First bit defines unicast ( 0 ) or multi cast ( 1 ) other 15 bits are not used . 
	  **Client IP Address :** Client puts its own ip address in this field , Set to 0 if the client does not know it  . 
	  **Your IP Address :** is an Ip address that the server assigns to the client  . 
	  **Server IP Address :** A broadcast IP address if client does not know it . 
	  **Gateway IP Address :** The address of default router 
	  **Server name :** A 64-byte domain name of the server . 
	  **Boot file name** : A 128-byte file name holding extra infromation . 
	  **Options :** A 64-byte field with dual purpose described in text .
	-
	-
- #### NAT(Network Address Translation)
	- In most situations , only a small portion of computers need access to internet simultaneously  .
	- A technology that can provide the mapping between public and private Ip address . 
	  This technology allows you to set the public addresses for communication outside the netowrk and private addresses for inter-communication .
	  ![image.png](../assets/image_1663292160600_0.png)
	- It maintains a translation table to store the buffer of public and private Ip addresses .
- #### ARP ( Address Resolution Protocol)
	- Most of the computer programs/applications use **logical address (IP address)** to send/receive messages, however, the actual communication happens over the **physical address (MAC address)** i.e from layer 2 of the OSI model. So our mission is to get the destination MAC address which helps in communicating with other devices. This is where ARP comes into the picture, its functionality is to translate IP address to physical addresses.
	- ARP is used when only the logical address of the host is provided 
	  where is arp obtain the physical address of the receiver .
	- RARP is used when only the physical address of the host is provided 
	  where rarp retrieves the logical address of the host from the server .
	-
- #### IPv4 header format
	- It is connection less i.e it does not create any connection before sending the data  , can be referred as datagram service .
	- The range of the Size of IPv4 header is 20-60 Bytes .
	  The range of the size of the payload is 0 - 65515 Bytes
	- ![image.png](../assets/image_1663421861480_0.png)
	  **VER ( 4 bit ):** Tell us the version of IP Address  
	  **HLEN ( 4 bit ) :** Tell the length of the header ( Range 0 - 15 )
	  **Type of service ( 8 bit ) :** Differenctiated Services Code point ( DSCP )
	  
	  #+BEGIN_NOTE
	  First 6 bit for DSCP and rest 2 bit for ECN  ( Explicit Congestiono Notification )
	  #+END_NOTE
	  **Total Length ( 16 bit )** : 2^{16}  = 65535
	  **TTL ( Time To Live ) ( 8 bit ):** 2^{8} = 0 - 255 TTL is a value in an IP ( packet ) that tells a network router when the packet has been in the network too long and should be discarded . 
	  **Protocol ( 8 bit )**: To mention the protocol used . 
	  **Header CheckSum ( 16 bit )** : to detect the corruption in the header of IPv4 packets .
	  
	  #+BEGIN_NOTE
	  1 byte = 8 bits ( In decimal ) = 2 bits ( In Hexa  ),
	  Time to live field is is the ninth byte .
	  #+END_NOTE
	- #### Fragmentation
		- ![image.png](../assets/image_1663938491702_0.png)
		- **Identification bit ( 16 bit ) :** When a Ipv4 packet is divided into smaller packets , and send them with different routes , so when they reach the destination address , these bits helps in determining that they all belong to the same packet .
		  Total Values possible for identification bit : 2^{16}
		- **Flag ( 3 bit )** :
			- MSB  bit :  always 0 .
			- Don't Fragment ( DF ) : If this bit is set to zero then the fragmentation is already done i.e if we dont want to fragment our packet then we set it to 1 .
			- More Fragment ( MF ) : Tells if more fragments are ahead of this fragment or not . if MF is set to 1 then more fragment are ahead of this one else if MF is set to 0 then this fragment is the last one .
		- **Fragment Offset ( 13 bit )** : Use to identify the sequence of fragments in the frame i.e No of bits ahead .
		- #+BEGIN_NOTE
		   A non fragmented packet is considered the last fragment .
		  If the M value is 1 then we can definitely say that original packet has been fragmented .
		  If the Offset bit is zero then , by all means it is the first fragment . 
		  #+END_NOTE
		- **Options **
			- Range : 0 - 40 bytes
			  
			  #+BEGIN_NOTE
			  If the size of the header is 20 bytes then , it will contain no options . 
			  If the size of the header is 60 bytes then we can say that it will contain options of 40 bytes . 
			  #+END_NOTE
			- ^^Record Route :^^  When a packet travels from source to destination , it passes through various routers on the way , Hence it record the address of the routers in its way in those 40 bytes . 
			  Total no of router address it can record is :
			  40 Bytes / 4 Bytes of ip address = 10 \approx 9
				- #+BEGIN_NOTE
				  Because of security reasons this record option is not allowed by the users Only the network administrator will use this for some purposes .
				  #+END_NOTE
			- ^^Source Routing^^ : If the source does not want to follow pre-defined routing protocols , it can set its own routing protocol and paths , It can specify the route that packet has to take on the path we are sending the packet .
			  This option is also not available for normal users only network administrator can use this type of routing .
				- Strict Source Routing
				- Loose Source Routing
		- **Padding**
			- It is used to ensure that the IP packet header has a length that is a multiple of 32 bits ( 4 Bytes ), it is needed because of the varying length of the options field in the IP header ( single byte option ).
		- [[Routing Algorithms]]
	- ### General Principles of congestion control
		- Congestion control refers to mechanism and techniques to control the congestion .
		- Another issue in a network layer protocol is ^^congestion control^^ . Congestion in a network layer is a situation when too many datagrams are present int the internet area .
		- It may also occur when the datagrams sent by the computer is are more then the capacity of the network .
			- #### Congestion Control in Connectionless network
				- Solution :
					- Backward Signaling : A bit can set in the datagram moving in opposite to the congested direction to inform the sender that congestion has occurred and the sender slows down the sending of packets in the network , The bit is sent along with the acknowledgement in the network .
					- Forward Signaling : This is used if no feedback is used in network layer , A bit is set in the packet travelling in the direction of congestion to warn the receiver .
					- Choke Packet : A special packet that can be sent from a router to the sender when it encounters congestion . ( This mechanism is implemented in Internet network layer ) .
					- Another solution is by ranking the packets according to their importance in the whole message . A field is added to the header of the packet to tell the importance .
				- #### Congestion Control in connection oriented Network
					- In this type of network congestion control is a bit easier
						- One method is simply by creating an virtual circuit when there is a congestion in an area .
			- ### Congestion Control
				- It refers to the mechanism technique that can either prevent congestion before it happens or remove congestion after it happens .
				- There are two types :
					- **Open Loops** : Protocols to  prevent or avoid congestion
						- Retransmission Policy : If the sent packet is lost or corrupted , the packet needs to be retransmitted .
						- Window Policy Use selective reject window method
						- Acknowledgement Policy : is Sending fewer acknowledgement means imposing less load on the network , Because acknowledgement also causes traffic in the network .
					- **Closed Loop** : Protocols that allow system to enter congested state detect it and remove it .
						- Back Pressure : If congestion has occurred then it sends the Pressure to the upstream ( towards source ) to reduce the packet speed .
						- Choke Packet : If congestion has occurred then it sends a choke packet directly to the source to reduce the Packets and do not disturb the rest of the nodes in between .
						- Implicit Signaling : Souce gusses there is a congestion in the network when it does not receive any acknowledgement , at last the source slows down .
						- Explicit Signaling :  Sending direct signal to source or destination  ( remember here we send a signal not a packet ) .
			- #### Congestion Control in virtual Circuit ( Connection Oriented )Subnets
				- Admission Control : This technique is used to keep the congestion which has already begun
					- It states that whenever congestion has happened then do not setup any virtual circuit until the congestion is cleared .
					- But an alternative solution is to make virtual circuit if congestion happens .
			- #### Congestion in Data gram subnets
				- In datagram subnet for each output lines , other resources the router maintains an estimate of it's Utilization
	- ### Quality of Service
		- We try  to create an appropriate environment for traffic .
		- Over all performance measure of computer networks .
		- Characteristics :
			- **Reliability** : Losing a packet or ack . ( Ideally Reliability should be high ) , If it happens the packet is retransmitted which decreases reliability . 
			  Example : In email & file transfer we need more reliability than video conferencing .
			- **Delay** : Source to destination delay .
			- **Jitter** : Variation between different between the transmission rate , in other words delay between the packets must be same .
			- **Bandwidth** ( Rate of transmission ): Different Application require different bandwidth . ( email needs less bandwidth were as video call needs more bandwidth )
		- #### Technique for achieving good QOS
			- **Traffic Shapping** : Another method of congestion control to shape the traffic before it enter the network .
			  It controls the rate at which packets are sent .
			- **Leaky bucket Algorithm** :
			  In this algorithm we just control the unregulated flow of packets into regulated flow of packets .
				- ![image.png](../assets/image_1667640767145_0.png){:height 318, :width 362}
			- **Token bucket Algorithm** :
				- It allows a Bursty traffic at a regular maximum rate .
				- It is good algorithm in case of idle host .
				- It allows to accumulate token for further use ( In case of Bursty Traffic ) .
				- ![image.png](../assets/image_1667643100274_0.png)
		- ### Leaky Bucket Vs Token Bucket
			- Leaky Bucket discards packets
			- Token Bucket does not discard packets , it discards tokens
			- With token bucket , a packet can only be transmitted if there are enough token to cover its length in bytes .
			- Leaky bucket sends packets at an average rate . ( More Bursty Traffic ( Overflow ))
			- Token Bucket allows in large bursts to be sent faster by speeding up  the output .
			- Token Bucket allows saving of token to send large Data .
			- Leaky Bucket does not allow saving .