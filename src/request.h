#ifndef MUFACT_REQUEST_H
#define MUFACT_REQUEST_H

typedef struct REQUEST_CORE_STRUCT {
	TIMESTAMP timestamp;
	REQUEST_ID request_id;
	SITE_ID site_id;
} * REQUEST_CORE;

typedef struct RAW_REQUEST_BUNDLE_STRUCT {
	AUTHENTICATOR_SIGNATURE signature;
	REQUEST_VERSION version;
	void* core_data;
} * RAW_REQUEST_BUNDLE;

typedef DEVICE_ENCRYPTED_DATA REQUEST_BUNDLE;

REQUEST_BUNDLE gen_REQUEST_BUNDLE(REQUEST_ID request_id, SITE_ID site_id, AUTHENTICATOR_KEY authenticator_key, DEVICE_KEY device_key);


#endif

