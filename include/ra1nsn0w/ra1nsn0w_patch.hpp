//
//  ra1nsn0w_patch.hpp
//  ra1nsn0w
//
//  Created by tihmstar on 22.09.24.
//  Copyright © 2024 tihmstar. All rights reserved.
//

#ifndef ra1nsn0w_patch_h
#define ra1nsn0w_patch_h

#include <ra1nsn0w/ra1nsn0w_defs.hpp>

namespace tihmstar {
    namespace ra1nsn0w{
        int patchFunciBoot(void *iBootBuf, size_t iBootBufSize, bootconfig *bcfg);
        int patchFuncKernel(void *kernelBuf, size_t kernelBufSize, bootconfig *bcfg);

        void exportPatchesToJson(std::map<uint32_t,std::vector<patchfinder::patch>> patches, const char *outfilePath);
    };
};


#endif /* ra1nsn0w_patch_h */
