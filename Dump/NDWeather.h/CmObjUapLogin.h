//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TACommHttp.h"

@class NSMutableString, TAUapNormalLoginParam;

@interface CmObjUapLogin : TACommHttp
{
    id bizDelegate;
    TAUapNormalLoginParam *loginDest;
    NSMutableString *blowfish;
}

+ (id)commHttpWithTimeoutSeconds:(double)arg1 user:(id)arg2 bizDelegate:(id)arg3;
+ (id)commHttpWithDelegate:(id)arg1 timeoutSeconds:(double)arg2 user:(id)arg3 bizDelegate:(id)arg4;
- (void)commHttpDidFailToComm:(id)arg1;
- (void)commHttp:(id)arg1 didCommWithResponeHeader:(id)arg2 responseData:(id)arg3;
- (id)transferDataOfCommHttp:(id)arg1;
- (id)allHTTPHeaderFieldsOfCommHttp:(id)arg1;
- (id)methodOfCommHttp:(id)arg1;
- (id)targetURLOfCommHttp:(id)arg1;
- (id)initWithTimeoutSeconds:(double)arg1 autoRelease:(BOOL)arg2 user:(id)arg3 bizDelegate:(id)arg4;
- (id)initWithDelegate:(id)arg1 timeoutSeconds:(double)arg2 autoRelease:(BOOL)arg3 user:(id)arg4 bizDelegate:(id)arg5;
- (void)dealloc;

@end

