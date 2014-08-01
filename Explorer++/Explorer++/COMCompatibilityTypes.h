#pragma once

#ifdef __IDataObjectAsyncCapability_INTERFACE_DEFINED__

// For reasons best known to Microsoft, the interface class "IAsyncOperation" has (as early as at least VS2013 / WIN8 SDK) been inexplicably renamed "IDataObjectAsyncCapability"
// Alias for IDataObjectAsyncCapability
typedef IDataObjectAsyncCapability IAsyncOperation;

// Alias for IID_IDataObjectAsyncCapability
#define IID_IAsyncOperation IID_IDataObjectAsyncCapability

#endif 	/* __IDataObjectAsyncCapability_INTERFACE_DEFINED__ */
