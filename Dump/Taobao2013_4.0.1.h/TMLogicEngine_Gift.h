//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TMLogicEngine.h"

@class NSMutableDictionary;

@interface TMLogicEngine_Gift : TMLogicEngine
{
    NSMutableDictionary *_extHeadDict;
}

- (void).cxx_destruct;
- (id)requestSuccess:(id)arg1 withData:(id)arg2;
- (void)sendGiftShare:(id)arg1 withShareId:(id)arg2 withDeviceId:(id)arg3 withToken:(id)arg4 api:(id)arg5 withDelegate:(id)arg6;
- (id)getHTTPPostParams:(id)arg1 dataJson:(id)arg2;
- (void)reportShare:(id)arg1 tx:(id)arg2 withDelegate:(id)arg3;
- (id)stringByDecodingURLFormat:(id)arg1;
- (void)sendGift:(id)arg1 withTimeStamp:(id)arg2 withUA:(id)arg3 withDelegate:(id)arg4;

@end
