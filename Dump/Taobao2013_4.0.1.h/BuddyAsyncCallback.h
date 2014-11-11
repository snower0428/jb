//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AsyncCallbackBase.h"

@interface BuddyAsyncCallback : NSObject <AsyncCallbackBase>
{
    id <BuddyUIDelegate> deleGate;
}

@property(retain, nonatomic) id <BuddyUIDelegate> deleGate; // @synthesize deleGate;
- (int)processGetWWGroupInfoResult:(id)arg1 forRspData:(id)arg2;
- (int)processSearchFriendResult:(id)arg1 forRspData:(id)arg2 resultInfo:(id)arg3;
- (int)processChgContactResult:(id)arg1 forRspData:(id)arg2;
- (int)processDelContactResult:(id)arg1 forRspData:(id)arg2;
- (int)processAddContactAckResult:(id)arg1 forRspData:(id)arg2;
- (int)processAddContactResult:(id)arg1 forRspData:(id)arg2 resultInfo:(id)arg3;
- (int)processGetWangWangContactsResult:(id)arg1 forRspData:(id)arg2;
- (int)processGetContactResult:(id)arg1 forRspData:(id)arg2;
- (int)processGetContactFlagResult:(id)arg1 forRspData:(id)arg2;
- (void)ResponseFail:(unsigned int)arg1 forReqParam:(id)arg2 forError:(id)arg3 forReserved:(unsigned short)arg4 forExtraHeadData:(id)arg5;
- (void)ResponseSuccess:(unsigned int)arg1 forReqParam:(id)arg2 forRspData:(id)arg3 forReserved:(unsigned short)arg4 forExtraHeadData:(id)arg5;
- (void)dealloc;

@end
