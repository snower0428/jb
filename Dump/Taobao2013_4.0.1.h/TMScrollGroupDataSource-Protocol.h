//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TMScrollGroup, TMScrollGroupItem;

@protocol TMScrollGroupDataSource <NSObject>
- (TMScrollGroupItem *)scrollGroup:(TMScrollGroup *)arg1 itemForGroupAtIndex:(unsigned int)arg2;
- (int)numberOfItemsInScrollGroup:(TMScrollGroup *)arg1;

@optional
- (float)scrollGroup:(TMScrollGroup *)arg1 heightOfViewAtIndex:(unsigned int)arg2;
- (float)scrollGroup:(TMScrollGroup *)arg1 widthOfViewAtIndex:(unsigned int)arg2;
@end

