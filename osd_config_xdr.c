/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "osd_config.h"

bool_t
xdr_osd_config (XDR *xdrs, osd_config *objp)
{
	register int32_t *buf;

	 if (!xdr_int (xdrs, &objp->width))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->height))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_encoder (XDR *xdrs, encoder *objp)
{
	register int32_t *buf;

	int i;
	 if (!xdr_int (xdrs, &objp->port_id))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->parameter_name, 20,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->updated_value, 20,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->portname, 20,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->ip_address, 20,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->macaddr, 20,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->type, 20,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->linktype, 20,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->audio, 20,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->format, 20,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->resolution, 20,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->framerate, 20,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->media, 20,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->count))
		 return FALSE;
	return TRUE;
}
