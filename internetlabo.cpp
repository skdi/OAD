NAT:posee un servidor DHCP
adaptador puente:tu maquina aparece en la red fisica .no posee DHCP

/si la compu virtual tiene internet: ping 8.8.8.8
auto enp0s8
iface enp0s8 inet static
addres 192.168.2.1
netmask 255.255.255.0
network 192.168.2.0
broadcast 192.168.2.255

sudo nano /etc/network/interfaces
//para subir la configuracion : sudo ifup enps08
ifconfig

///////////////////////////////////////////////
dhcpd
//////////////////////////////////////////////
sudo nano /etc/dhcp/dhcpd.conf
en la parte ddns 
default-lease-time 6000;
max-lease-time 22000;
luego del coment poner ------ authoritative;
nuestra subnet 192.168.2.0 netmask 255.255.255.0 LLAVE
	range 192.168.2.10 192.168.2.20;
	option subnet-mask 255.255.255.0;
	option routers 192.168.2.1;
	option broadcast-address 192.168.2.255;	LLAVECERRADA

(fuera)dhcpd -t //comprobar si esta bien
sudo /etc/default/isc-dhcp-server
INTERFACES="enp0s8"
sudo service isc-dhcp-server start
				stop
				restart
				status


todos los servicios estan en ..... /etc/inited/

PROBAR
sudo apt-get install isc-dhcp-client
-cerrar MV
-abrir configuraciones colocar internal network
-iniciar MV probar conf de ip (ifconfig)
-en el servidor :	cat /var/lab/dhcp/dhcpd.leases
