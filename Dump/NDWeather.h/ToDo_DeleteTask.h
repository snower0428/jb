//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ToDo_BaseBusiness.h"

__attribute__((visibility("hidden")))
@interface ToDo_DeleteTask : ToDo_BaseBusiness
{
}

- (int)throwOutOfRefreshQueue:(struct tododata_business_base *)arg1;
- (int)throwOutOfSyncQueue:(struct transfer_item *)arg1 synccondition:(struct _tag_syncqueue_condition *)arg2;
- (id)getTransferData:(struct transfer_item *)arg1;
- (void)transferCancel:(struct transfer_item *)arg1;
- (_Bool)transferFail:(id)arg1 reserve:(struct transfer_item *)arg2 outdata:(id)arg3;
- (_Bool)transferSuccess:(id)arg1 response:(id)arg2 reserve:(struct transfer_item *)arg3 outdata:(id)arg4;
- (void)insertRequestCommonData:(id)arg1;
- (id)getRequestMethod;
- (id)getTargetURL:(struct transfer_item *)arg1;

@end

