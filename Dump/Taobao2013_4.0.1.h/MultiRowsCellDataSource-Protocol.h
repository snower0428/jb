//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BothColumnsView, MultiRowsCell;

@protocol MultiRowsCellDataSource <NSObject>
- (float)multiRowsCell:(MultiRowsCell *)arg1 heightOfRowAtIndex:(int)arg2;
- (BothColumnsView *)multiRowsCell:(MultiRowsCell *)arg1 viewOfRowAtIndex:(int)arg2;
- (int)numberOfRowsInCell:(MultiRowsCell *)arg1;
@end

