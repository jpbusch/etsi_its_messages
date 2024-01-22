/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "/input/ITS-Container.asn"
 * 	`asn1c -fcompound-names -no-gen-example -gen-PER`
 */

#ifndef	_VerticalAcceleration_H_
#define	_VerticalAcceleration_H_


#include <etsi_its_denm_coding/asn_application.h>

/* Including external dependencies */
#include "etsi_its_denm_coding/VerticalAccelerationValue.h"
#include "etsi_its_denm_coding/AccelerationConfidence.h"
#include <etsi_its_denm_coding/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* VerticalAcceleration */
typedef struct VerticalAcceleration {
	VerticalAccelerationValue_t	 verticalAccelerationValue;
	AccelerationConfidence_t	 verticalAccelerationConfidence;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} VerticalAcceleration_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_VerticalAcceleration;

#ifdef __cplusplus
}
#endif

#endif	/* _VerticalAcceleration_H_ */
#include <etsi_its_denm_coding/asn_internal.h>
