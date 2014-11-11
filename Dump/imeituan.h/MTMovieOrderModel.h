//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTBaseModel.h"

#import "MTUserBasedModel.h"

@class SAKUser;

@interface MTMovieOrderModel : MTBaseModel <MTUserBasedModel>
{
}

- (void)deleteMovieOrdersByIDs:(id)arg1 finished:(CDUnknownBlockType)arg2;
- (void)fetchMovieOrderListByFilter:(int)arg1 finished:(CDUnknownBlockType)arg2;
- (void)fetchMovieOrderByID:(int)arg1 finished:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(retain, nonatomic) SAKUser *user;

@end
