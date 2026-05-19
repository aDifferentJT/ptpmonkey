#pragma once

#ifdef __WXMSW__
    #ifdef PTP_DLL
        #define PTP_IMPEXPORT __declspec(dllexport)
    #else
        #define PTP_IMPEXPORT __declspec(dllimport)
    #endif
#elif __WXGNU__
    #ifdef PTP_DLL
        #define PTP_IMPEXPORT __attribute__((visibility("default")))
    #else
        #define PTP_IMPEXPORT
    #endif
#else
    #define PTP_IMPEXPORT
#endif
