//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTCacheDAO.h"

@interface MTOrderDAO : MTCacheDAO
{
}

- (void)findOrderByID:(int)arg1 finished:(CDUnknownBlockType)arg2;
- (void)saveOrUpdateOrder:(id)arg1;
- (void)findOrdersByResponse:(id)arg1 offset:(int)arg2 limit:(int)arg3 finished:(CDUnknownBlockType)arg4;
- (id)init;

@end

