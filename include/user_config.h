#ifndef _USER_CONFIG_H_
#define _USER_CONFIG_H_

#define CFG_HOLDER	0x00FF55A4	/* Change this value to load default configurations */
#define CFG_LOCATION	0x3C	/* Please don't change or if you know what you doing */
#define CLIENT_SSL_ENABLE

/*DEFAULT CONFIGURATIONS*/

#define MQTT_HOST			"iot.open-smart.cn" //or "mqtt.yourdomain.com"
#define MQTT_PORT			8883
#define MQTT_BUF_SIZE		1024
#define MQTT_KEEPALIVE		60	 /*second*/

#define MQTT_CLIENT_ID		"DVES%08X"
#define MQTT_USER			"LexinSmart"
#define MQTT_PASS			"doASwe12"

#define MQTT_RECONNECT_TIMEOUT 	5	   /*second*/

#define DEFAULT_SECURITY	            1
#define QUEUE_BUFFER_SIZE		 		2048 /*������ 2048*/

#define PROTOCOL_NAMEv311			/*MQTT version 3.11 compatible with https://eclipse.org/paho/clients/testing/*/
#endif
//PROTOCOL_NAMEv31	/*MQTT version 3.1 compatible with Mosquitto v0.15*/
