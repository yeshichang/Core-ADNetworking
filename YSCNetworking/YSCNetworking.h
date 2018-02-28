// YSCNetworking.h
//
// Copyright (c) 2013 YSCNetworking (http://YSCnetworking.com/)
// 
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
// 
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

#import <Foundation/Foundation.h>
#import <Availability.h>
#import <TargetConditionals.h>

#ifndef _YSCNETWORKING_
    #define _YSCNETWORKING_

    #import "YSCURLRequestSerialization.h"
    #import "YSCURLResponseSerialization.h"
    #import "YSCSecurityPolicy.h"

#if !TARGET_OS_WATCH
    #import "YSCNetworkReachabilityManager.h"
#endif

    #import "YSCURLSessionManager.h"
    #import "YSCHTTPSessionManager.h"

#endif /* _YSCNETWORKING_ */
