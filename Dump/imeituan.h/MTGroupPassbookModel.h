//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTBaseModel.h"

#import "MTUserBasedModel.h"

@class SAKUser;

@interface MTGroupPassbookModel : MTBaseModel <MTUserBasedModel>
{
}

- (void)downloadPassWithIdentifier:(id)arg1 andPassToken:(id)arg2 finished:(CDUnknownBlockType)arg3;
- (void)createPassWithOrderID:(int)arg1 finished:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(retain, nonatomic) SAKUser *user;

@end

