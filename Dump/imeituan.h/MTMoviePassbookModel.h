//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTBaseModel.h"

#import "MTUserBasedModel.h"

@class SAKUser;

@interface MTMoviePassbookModel : MTBaseModel <MTUserBasedModel>
{
}

- (void)downloadPassWithSerialNumber:(id)arg1 andPassType:(id)arg2 finished:(CDUnknownBlockType)arg3;
- (void)createPassWithOrderID:(int)arg1 type:(id)arg2 finished:(CDUnknownBlockType)arg3;
- (id)init;

// Remaining properties
@property(retain, nonatomic) SAKUser *user;

@end
