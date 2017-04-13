#ifndef __ESM_HANDLER_H__
#define __ESM_HANDLER_H__

#include "nas_message.h"

#include "mme_context.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

CORE_DECLARE(void) esm_handle_pdn_connectivity_request(mme_bearer_t *bearer, 
        nas_pdn_connectivity_request_t *pdn_connectivity_request);
CORE_DECLARE(void) esm_handle_lo_information_request(mme_bearer_t *bearer);
CORE_DECLARE(void) esm_handle_information_response(mme_bearer_t *bearer, 
        nas_esm_information_response_t *bearer_information_response);
CORE_DECLARE(void) esm_handle_lo_modify_bearer(mme_bearer_t *bearer);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __ESM_HANDLER_H__ */
